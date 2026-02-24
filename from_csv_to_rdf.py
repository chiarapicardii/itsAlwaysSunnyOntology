import csv
from rdflib import Graph, Namespace, Literal, RDF, RDFS, XSD, URIRef

SUNNY = Namespace("http://www.semanticweb.org/lachi/ontologies/2026/nameholder#")
g = Graph()
g.parse("itsAlwaysSunnyOntology.ttl", format="turtle")
g.bind("sunny", SUNNY)

def sunny_node(value):
    if not value:
        return None
    value = str(value).strip()
    if not value:
        return None
    if value.startswith("http"):
        return URIRef(value) #this avoided several errors, because we force the machine to read it as a node
    return SUNNY[value.replace(" ", "_")] 

#Mapping TheoreticalMechanism and HumorQualities 
theoretical_mechanism = {
    "SuperiorityTheory": SUNNY.SuperiorityTheory,
    "IncongruityTheory": SUNNY.IncongruityTheory,
    "ReliefTheory": SUNNY.ReliefTheory
}

quality_types = {
    "BehavioralQuality": SUNNY.BehavioralQuality,
    "AestheticQuality": SUNNY.AestheticQuality,
    "PhysicalQuality": SUNNY.PhysicalQuality
}

with open("ontologia_IASIP.csv", newline='', encoding='utf-8') as csv_file:
    reader = csv.DictReader(csv_file, delimiter=';')

    for row in reader:
        # skip rows without a scene_id
        scene_id = row.get("scene_id", "").strip()
        scene_uri = sunny_node(scene_id) #putting it into the function, creating a node
        if scene_uri is None:
            continue

        # HumorousSituation metadata
        g.add((scene_uri, RDF.type, SUNNY.HumorousSituation))
        g.add((scene_uri, SUNNY.hasEpisodeNumber, Literal(row["episode_number"])))
        g.add((scene_uri, SUNNY.hasTitle, Literal(row["episode_title"])))
        g.add((scene_uri, SUNNY.hasDescription, Literal(row["scene_description"])))
        g.add((scene_uri, SUNNY.hasTimestamp, Literal(row["timestamp"])))

        #HumorEntity: Agent
        agent_names = [name.strip() for name in row["agent_name"].split(",")] # comma separates different agents so we don't mistakenly merge them into one entity
        for agent_name in agent_names:
            agent_uri = sunny_node(agent_name)
            if agent_uri:
                g.add((agent_uri, RDF.type, SUNNY.Agent))
                g.add((scene_uri, SUNNY.hasAgent, agent_uri)) #this is useful to connect the agent to the scene
                agent_quality = row.get("agent_quality_type", "").strip()
                if agent_quality in quality_types:
                    g.add((agent_uri, SUNNY.hasQuality, quality_types[agent_quality]))

        #HumorEntity: Target
        target_names = [name.strip() for name in row["target_name"].split(",")]
        for target_name in target_names:
            target_uri = sunny_node(target_name)
            if target_uri:
                g.add((target_uri, RDF.type, SUNNY.Target))
                g.add((scene_uri, SUNNY.hasTarget, target_uri)) #this is useful to connect the target to the scene
                target_quality = row.get("target_quality_type", "").strip()
                if target_quality in quality_types:
                    g.add((target_uri, SUNNY.hasQuality, quality_types[target_quality]))

        #HumorousFrame
        frame_uri = sunny_node(scene_id + "_frame")
        g.add((frame_uri, RDF.type, SUNNY.HumorousFrame))
        g.add((scene_uri, SUNNY.isDescribedBy, frame_uri))

        #ExpectedSocialFrame: abstract description of the normal social context
        social_uri = sunny_node(row.get("social_frame_id"))
        if social_uri:
            g.add((social_uri, RDF.type, SUNNY.ExpectedSocialFrame))
            g.add((social_uri, RDFS.label, Literal(row["social_frame_name"], datatype=XSD.string)))
            g.add((social_uri, RDFS.comment, Literal(row["social_frame_definition"], datatype=XSD.string)))
            g.add((frame_uri, SUNNY.includesDescription, social_uri))

        #EthicalRule: abstract behavioural rule of the social context
        rule_uri = sunny_node(row.get("ethical_rule_id"))
        if rule_uri:
            g.add((rule_uri, RDF.type, SUNNY.EthicalRule))
            g.add((rule_uri, RDFS.label, Literal(row["ethical_rule_name"], datatype=XSD.string)))
            g.add((rule_uri, RDFS.comment, Literal(row["ethical_rule_definition"], datatype=XSD.string)))
            g.add((frame_uri, SUNNY.includesDescription, rule_uri))

        #SubversiveFrame: abstract description of the distorted logic behind the subversion
        subversive_frame_uri = sunny_node(row.get("subversive_frame_id"))
        if subversive_frame_uri:
            g.add((subversive_frame_uri, RDF.type, SUNNY.SubversiveFrame))
            g.add((subversive_frame_uri, RDFS.label, Literal(row["subversive_frame_name"], datatype=XSD.string)))
            g.add((subversive_frame_uri, RDFS.comment, Literal(row["subversive_frame_definition"], datatype=XSD.string)))
            g.add((frame_uri, SUNNY.includesDescription, subversive_frame_uri))

        #NormOccurence: concrete instance of the expected behaviour in this specific scene
        norm_uri = sunny_node(scene_id + "_norm")
        g.add((norm_uri, RDF.type, SUNNY.NormOccurence))
        g.add((norm_uri, RDFS.comment, Literal(row["norm_occurrence_desc"], datatype=XSD.string)))
        g.add((scene_uri, SUNNY.includesSituation, norm_uri))

        #SubversiveOccurence: concrete act of subversion, violates the NormOccurence
        subversive_uri = sunny_node(scene_id + "_subversive")
        g.add((subversive_uri, RDF.type, SUNNY.SubversiveOccurence))
        g.add((subversive_uri, RDFS.comment, Literal(row["subversive_occurrence_desc"], datatype=XSD.string)))
        g.add((scene_uri, SUNNY.includesSituation, subversive_uri))
        g.add((subversive_uri, SUNNY.violates, norm_uri)) # SubversiveOccurence violates NormOccurence

        #TheoreticalMechanism: explains the scene and is triggered by the subversion
        theo_mech = row.get("theoretical_mechanism", "").strip()
        if theo_mech in theoretical_mechanism:
            mech_uri = sunny_node(scene_id + "_mechanism") #this is FUNDAMENTAL because we create an istance of the class, otherwise we would be using the classes as individuals (this is an entity of class Subversion, for example)
            g.add((mech_uri, RDF.type, theoretical_mechanism[theo_mech]))
            g.add((scene_uri, SUNNY.isExplainedBy, mech_uri)) 
            g.add((mech_uri, SUNNY.isTriggeredBy, subversive_uri)) #this means that the instance is triggered not the class itself

# serialization
g.serialize(destination="SunnyOntology_populated.ttl", format="turtle")
print("Ontology successfully saved!")