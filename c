@prefix dul: <http://www.loa-cnr.it/ontologies/DUL.owl#> .
@prefix owl: <http://www.w3.org/2002/07/owl#> .
@prefix rdfs: <http://www.w3.org/2000/01/rdf-schema#> .
@prefix sunny: <https://github.com/chiarapicardii/itsAlwaysSunnyOntology/blob/main/itsAlwaysSunnyOntology.ttl#> .
@prefix xsd: <http://www.w3.org/2001/XMLSchema#> .

dul:Description owl:equivalentClass sunny:Description .

dul:Situation owl:equivalentClass sunny:Situation .

dul:isDescribedBy owl:equivalentProperty sunny:isDescribedBy .

<https://github.com/chiarapicardii/itsAlwaysSunnyOntology/blob/main/itsAlwaysSunnyOntology.ttl> a owl:Ontology ;
    rdfs:comment "itsAlwaysSunnyOntology url: \"https://github.com/chiarapicardii/itsAlwaysSunnyOntology/blob/main/itsAlwaysSunnyOntology.ttl\"" ;
    owl:imports <http://www.loa-cnr.it/ontologies/DUL.owl> .

sunny:AestheticQuality a owl:Class ;
    rdfs:comment "how they are dressed, how they appear" ;
    rdfs:subClassOf sunny:HumorQuality .

sunny:HS_001 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Dee,
        sunny:Mac ;
    sunny:hasDescription "Mac and Dee insult a lifeguard who tells them they are too big for the children's slide, then they force their way down and get painfully stuck." ;
    sunny:hasEpisodeNumber "S12E02" ;
    sunny:hasTarget sunny:Lifeguard ;
    sunny:hasTimestamp "00:02:32" ;
    sunny:hasTitle "The Gang Goes to a Water Park" ;
    sunny:includesSituation sunny:HS_001_norm,
        sunny:HS_001_subversive ;
    sunny:isDescribedBy sunny:HS_001_frame ;
    sunny:isExplainedBy sunny:HS_001_mechanism .

sunny:HS_002 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Dee,
        sunny:Gang ;
    sunny:hasDescription "Dee brings the entire gang into her therapy session, and Frank dumps dirty dishes on the floor, demanding the therapist decide who should wash them" ;
    sunny:hasEpisodeNumber "S08E05" ;
    sunny:hasTarget sunny:The_Therapist ;
    sunny:hasTimestamp "00:00:46" ;
    sunny:hasTitle "The Gang Gets Analyzed" ;
    sunny:includesSituation sunny:HS_002_norm,
        sunny:HS_002_subversive ;
    sunny:isDescribedBy sunny:HS_002_frame ;
    sunny:isExplainedBy sunny:HS_002_mechanism .

sunny:HS_003 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Dennis,
        sunny:Mac ;
    sunny:hasDescription "Mac and Dennis in their yard and aggressively stare in silence at a friendly neighbor who comes over to welcome them" ;
    sunny:hasEpisodeNumber "S11E05" ;
    sunny:hasTarget sunny:Wally_\(The_Neighbor\) ;
    sunny:hasTimestamp "00:05:08" ;
    sunny:hasTitle "Mac & Dennis Move to the Suburbs" ;
    sunny:includesSituation sunny:HS_003_norm,
        sunny:HS_003_subversive ;
    sunny:isDescribedBy sunny:HS_003_frame ;
    sunny:isExplainedBy sunny:HS_003_mechanism .

sunny:HS_004 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Charlie ;
    sunny:hasDescription "Mac and Dennis try to create an online dating profile for Charlie, but get frustrated when he gives absurd answers" ;
    sunny:hasEpisodeNumber "S05E05" ;
    sunny:hasTarget sunny:Dennis,
        sunny:Mac ;
    sunny:hasTimestamp "00:06:18" ;
    sunny:hasTitle "The Waitress Is Getting Married" ;
    sunny:includesSituation sunny:HS_004_norm,
        sunny:HS_004_subversive ;
    sunny:isDescribedBy sunny:HS_004_frame ;
    sunny:isExplainedBy sunny:HS_004_mechanism .

sunny:HS_005 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Charlie,
        sunny:Mac ;
    sunny:hasDescription "Mac and Charlie confront the thief who stole their bike, but intimidated by him, they retreat and instead brutally beat up his kid and friends to take the bike back" ;
    sunny:hasEpisodeNumber "S13E05" ;
    sunny:hasTarget sunny:The_Kids ;
    sunny:hasTimestamp "00:16:50" ;
    sunny:hasTitle "The Gang Gets New Wheels" ;
    sunny:includesSituation sunny:HS_005_norm,
        sunny:HS_005_subversive ;
    sunny:isDescribedBy sunny:HS_005_frame ;
    sunny:isExplainedBy sunny:HS_005_mechanism .

sunny:HS_006 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Charlie ;
    sunny:hasDescription "Charlie suggests using green paint to dye the bar's beer for St. Patrick's Day, and Mac discovers Charlie has been casually drinking the toxic paint himself" ;
    sunny:hasEpisodeNumber "S11E08" ;
    sunny:hasTarget sunny:Mac ;
    sunny:hasTimestamp "00:04:40" ;
    sunny:hasTitle "Charlie Catches a Leprechaun" ;
    sunny:includesSituation sunny:HS_006_norm,
        sunny:HS_006_subversive ;
    sunny:isDescribedBy sunny:HS_006_frame ;
    sunny:isExplainedBy sunny:HS_006_mechanism .

sunny:HS_007 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Charlie_Mom ;
    sunny:hasDescription "During a bar fundraiser for her supposed cancer, Charlie's mom reads a desperate speech but then casually admits to the crowd she faked the illness just for attention" ;
    sunny:hasEpisodeNumber "S08E06" ;
    sunny:hasTarget sunny:Charlie,
        sunny:The_Fundraiser_Crowd ;
    sunny:hasTimestamp "00:17:57" ;
    sunny:hasTitle "Charlie's Mom Has Cancer" ;
    sunny:includesSituation sunny:HS_007_norm,
        sunny:HS_007_subversive ;
    sunny:isDescribedBy sunny:HS_007_frame ;
    sunny:isExplainedBy sunny:HS_007_mechanism .

sunny:HS_008 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Dee ;
    sunny:hasDescription "Dee tries to perform stand-up comedy but gets severe stage fright, repeatedly dry heaving loudly into the microphone before fleeing" ;
    sunny:hasEpisodeNumber "S04E09" ;
    sunny:hasTarget sunny:The_Comedy_Club_Audience ;
    sunny:hasTimestamp "00:09:20" ;
    sunny:hasTitle "Dennis Reynolds: An Erotic Life" ;
    sunny:includesSituation sunny:HS_008_norm,
        sunny:HS_008_subversive ;
    sunny:isDescribedBy sunny:HS_008_frame ;
    sunny:isExplainedBy sunny:HS_008_mechanism .

sunny:HS_009 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Dennis ;
    sunny:hasDescription "Dennis demands Dee peel his apple because Mac used to do it to protect him from \"toxins,\" and screams when she tells him to just eat the skin" ;
    sunny:hasEpisodeNumber "S05E09" ;
    sunny:hasTarget sunny:Dee ;
    sunny:hasTimestamp "00:09:56" ;
    sunny:hasTitle "Mac and Dennis Break Up" ;
    sunny:includesSituation sunny:HS_009_norm,
        sunny:HS_009_subversive ;
    sunny:isDescribedBy sunny:HS_009_frame ;
    sunny:isExplainedBy sunny:HS_009_mechanism .

sunny:HS_010 a sunny:HumorousSituation ;
    sunny:hasAgent sunny:Charlie,
        sunny:Mac ;
    sunny:hasDescription "Dennis and Dee confess their severe crack addiction to Mac and Charlie, who immediately respond with total apathy and ruthlessly mock them for crying about it" ;
    sunny:hasEpisodeNumber "S02E03" ;
    sunny:hasTarget sunny:Dee,
        sunny:Dennis ;
    sunny:hasTimestamp "00:19:35" ;
    sunny:hasTitle "Dennis and Dee Go on Welfare" ;
    sunny:includesSituation sunny:HS_010_norm,
        sunny:HS_010_subversive ;
    sunny:isDescribedBy sunny:HS_010_frame ;
    sunny:isExplainedBy sunny:HS_010_mechanism .

sunny:describes a owl:ObjectProperty ;
    owl:inverseOf sunny:isDescribedBy .

sunny:hasAgent a owl:ObjectProperty ;
    rdfs:domain sunny:HumorousSituation ;
    rdfs:range sunny:Agent ;
    rdfs:subPropertyOf dul:hasParticipant ;
    owl:inverseOf sunny:isAgentIn .

sunny:hasDescription a owl:DatatypeProperty ;
    rdfs:comment "Description of the scene" ;
    rdfs:domain sunny:Situation ;
    rdfs:range xsd:string .

sunny:hasEpisodeNumber a owl:DatatypeProperty ;
    rdfs:comment "Episode number with the season: for ex. S01E09" ;
    rdfs:domain sunny:Situation ;
    rdfs:range xsd:integer .

sunny:hasQuality a owl:ObjectProperty ;
    rdfs:comment "connecting HumorQuality to HumorEntity" ;
    rdfs:domain sunny:HumorEntity ;
    rdfs:range sunny:HumorQuality .

sunny:hasTarget a owl:ObjectProperty ;
    rdfs:domain sunny:HumorousSituation ;
    rdfs:range sunny:Target ;
    rdfs:subPropertyOf dul:hasParticipant ;
    owl:inverseOf sunny:isTargetIn .

sunny:hasTimestamp a owl:DatatypeProperty ;
    rdfs:comment "Where to find the specific moment" ;
    rdfs:domain sunny:Situation ;
    rdfs:range xsd:string .

sunny:hasTitle a owl:DatatypeProperty ;
    rdfs:comment "Title of the episode" ;
    rdfs:domain sunny:Situation ;
    rdfs:range xsd:string .

sunny:includesDescription a owl:ObjectProperty ;
    rdfs:comment "All the elements that, blended, make the DescriptionFrame of the humor" ;
    rdfs:domain sunny:HumorousFrame ;
    rdfs:range sunny:EthicalRule,
        sunny:ExpectedSocialFrame,
        sunny:SubversiveFrame ;
    rdfs:subPropertyOf dul:hasComponent,
        sunny:includes .

sunny:includesSituation a owl:ObjectProperty ;
    rdfs:comment "The actual application in the situation of the blending of the elements" ;
    rdfs:domain sunny:HumorousSituation ;
    rdfs:range sunny:NormOccurence,
        sunny:SubversiveOccurence ;
    rdfs:subPropertyOf dul:hasComponent,
        sunny:includes .

sunny:isExplainedBy a owl:ObjectProperty ;
    rdfs:domain sunny:HumorousSituation ;
    rdfs:range sunny:TheoreticalMechanism .

sunny:isTriggeredBy a owl:ObjectProperty ;
    rdfs:comment "TheoreticalMechanism to Subversion" ;
    rdfs:domain sunny:TheoreticalMechanism ;
    rdfs:range sunny:SubversiveOccurence .

sunny:isViolatedBy a owl:ObjectProperty ;
    owl:inverseOf sunny:violates .

sunny:Charlie_Mom a sunny:Agent ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:ER_ClinicalBoundaries a sunny:EthicalRule ;
    rdfs:label "Respect for Clinical Purpose and Boundaries"^^xsd:string ;
    rdfs:comment "A professional norm requiring the patient to use therapy for psychological healing and to respect the sanctity of the clinical space"^^xsd:string .

sunny:ER_CompassionAndSupport a sunny:EthicalRule ;
    rdfs:label "Compassion in Times of Crisis"^^xsd:string ;
    rdfs:comment "The ethical obligation to provide emotional support and intervention when a loved one confesses to a life-threatening problem like severe drug addiction"^^xsd:string .

sunny:ER_MedicalHonesty a sunny:EthicalRule ;
    rdfs:label "Truthfulness Regarding Severe Illness"^^xsd:string ;
    rdfs:comment "A fundamental moral rule prohibiting individuals from faking terminal diseases to exploit others' empathy or steal charitable funds"^^xsd:string .

sunny:ER_NeighborlyEtiquette a sunny:EthicalRule ;
    rdfs:label "Good Neighbor Etiquette and Basic Politeness"^^xsd:string ;
    rdfs:comment "A social norm requiring individuals to acknowledge greetings, introduce themselves, and maintain a friendly demeanor with those living nearby"^^xsd:string .

sunny:ER_PerformanceComposure a sunny:EthicalRule ;
    rdfs:label "Theatrical Composure and Preparation"^^xsd:string ;
    rdfs:comment "The social expectation that a public performer maintains basic composure, speaks clearly, and attempts to entertain rather than displaying severe bodily distress"^^xsd:string .

sunny:ER_PersonalIndependence a sunny:EthicalRule ;
    rdfs:label "Personal Independence and Maturity"^^xsd:string ;
    rdfs:comment "A social norm dictating that adults should not treat their peers as servants for trivial tasks or throw tantrums when denied"^^xsd:string .

sunny:ER_ProtectionOfMinors a sunny:EthicalRule ;
    rdfs:label "Protection of Minors from Adult Violence"^^xsd:string ;
    rdfs:comment "An absolute ethical and legal norm stating that grown adults must never physically assault children, regardless of the circumstances or provocation"^^xsd:string .

sunny:ER_SafetyCompliance a sunny:EthicalRule ;
    rdfs:label "Compliance with Safety Regulations"^^xsd:string ;
    rdfs:comment "A social norm requiring patrons to strictly follow age/size restrictions and respect designated staff instructions"^^xsd:string .

sunny:ER_SelfPreservation a sunny:EthicalRule ;
    rdfs:label "Basic Self-Preservation and Health"^^xsd:string ;
    rdfs:comment " The universal human instinct and ethical responsibility to protect one's own body and others by not consuming or serving lethal toxins"^^xsd:string .

sunny:ER_SocialRelatability a sunny:EthicalRule ;
    rdfs:label "Relatability and Social Appeal in Dating"^^xsd:string ;
    rdfs:comment "The expectation that one should present understandable and socially acceptable traits to be perceived as an attractive and safe partner"^^xsd:string .

sunny:ESF_AdultSelfSufficiency a sunny:ExpectedSocialFrame ;
    rdfs:label "Basic Adult Self-Sufficiency"^^xsd:string ;
    rdfs:comment "The social expectation that a grown adult is capable of preparing and eating basic foods, like an apple, without assistance"^^xsd:string .

sunny:ESF_CharityFundraiser a sunny:ExpectedSocialFrame ;
    rdfs:label "Charity Fundraiser Event"^^xsd:string ;
    rdfs:comment "A social gathering designed to elicit empathy and collect financial donations to help someone facing a severe tragedy or illness"^^xsd:string .

sunny:ESF_CloseFriendship a sunny:ExpectedSocialFrame ;
    rdfs:label "Close Friendship and Mutual Support"^^xsd:string ;
    rdfs:comment "A social bond between close friends where mutual support, empathy, and help are expected during times of severe personal crisis"^^xsd:string .

sunny:ESF_DisputeResolution a sunny:ExpectedSocialFrame ;
    rdfs:label "Adult Dispute Resolution"^^xsd:string ;
    rdfs:comment "A social situation where mature adults resolve conflicts or thefts through verbal negotiation, law enforcement, or direct confrontation with the responsible party"^^xsd:string .

sunny:ESF_FoodAndBeverageSafety a sunny:ExpectedSocialFrame ;
    rdfs:label "Food and Beverage Safety Standards"^^xsd:string ;
    rdfs:comment "A baseline commercial and personal standard where consumable items must be non-toxic, and individuals avoid ingesting deadly chemicals"^^xsd:string .

sunny:ESF_OnlineDatingProfile a sunny:ExpectedSocialFrame ;
    rdfs:label "Online Dating Profile Creation"^^xsd:string ;
    rdfs:comment "A social ritual where an individual highlights their most attractive, relatable, and normal hobbies to find a romantic partner"^^xsd:string .

sunny:ESF_PsychotherapySession a sunny:ExpectedSocialFrame ;
    rdfs:label "Clinical Psychotherapy Session"^^xsd:string ;
    rdfs:comment "A confidential, clinical setting where a patient works with a professional to address deep psychological issues."^^xsd:string .

sunny:ESF_PublicPerformance a sunny:ExpectedSocialFrame ;
    rdfs:label "Public Stand-Up Comedy Performance"^^xsd:string ;
    rdfs:comment "An entertainment setting where a performer stands on stage to confidently deliver rehearsed jokes and amuse an audience"^^xsd:string .

sunny:ESF_RecreationalSafety a sunny:ExpectedSocialFrame ;
    rdfs:label "Recreational Facility Safety"^^xsd:string ;
    rdfs:comment "A public setting where patrons must follow safety rules and staff instructions to prevent injury"^^xsd:string .

sunny:ESF_SuburbanNeighborhood a sunny:ExpectedSocialFrame ;
    rdfs:label "Suburban Neighborhood Interaction"^^xsd:string ;
    rdfs:comment "A residential community setting where neighbors are expected to be cordial, introduce themselves, and engage in polite small talk."^^xsd:string .

sunny:Gang a sunny:Agent ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:HS_001_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_SafetyCompliance,
        sunny:ESF_RecreationalSafety,
        sunny:SubF_ChildishRebellion .

sunny:HS_001_mechanism a sunny:SuperiorityTheory ;
    sunny:isTriggeredBy sunny:HS_001_subversive .

sunny:HS_002_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_ClinicalBoundaries,
        sunny:ESF_PsychotherapySession,
        sunny:SubF_TherapyTrivialization .

sunny:HS_002_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_002_subversive .

sunny:HS_003_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_NeighborlyEtiquette,
        sunny:ESF_SuburbanNeighborhood,
        sunny:SubF_HostileParanoia .

sunny:HS_003_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_003_subversive .

sunny:HS_004_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_SocialRelatability,
        sunny:ESF_OnlineDatingProfile,
        sunny:SubF_BizarreUnrelatability .

sunny:HS_004_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_004_subversive .

sunny:HS_005_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_ProtectionOfMinors,
        sunny:ESF_DisputeResolution,
        sunny:SubF_DisplacedCowardice .

sunny:HS_005_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_005_subversive .

sunny:HS_006_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_SelfPreservation,
        sunny:ESF_FoodAndBeverageSafety,
        sunny:SubF_ToxicConsumption .

sunny:HS_006_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_006_subversive .

sunny:HS_007_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_MedicalHonesty,
        sunny:ESF_CharityFundraiser,
        sunny:SubF_FakedIllness .

sunny:HS_007_mechanism a sunny:ReliefTheory ;
    sunny:isTriggeredBy sunny:HS_007_subversive .

sunny:HS_008_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_PerformanceComposure,
        sunny:ESF_PublicPerformance,
        sunny:SubF_BodilyPanic .

sunny:HS_008_mechanism a sunny:SuperiorityTheory ;
    sunny:isTriggeredBy sunny:HS_008_subversive .

sunny:HS_009_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_PersonalIndependence,
        sunny:ESF_AdultSelfSufficiency,
        sunny:SubF_InfantileCodependency .

sunny:HS_009_mechanism a sunny:IncongruityTheory ;
    sunny:isTriggeredBy sunny:HS_009_subversive .

sunny:HS_010_frame a sunny:HumorousFrame ;
    sunny:includesDescription sunny:ER_CompassionAndSupport,
        sunny:ESF_CloseFriendship,
        sunny:SubF_CruelApathy .

sunny:HS_010_mechanism a sunny:SuperiorityTheory ;
    sunny:isTriggeredBy sunny:HS_010_subversive .

sunny:Lifeguard a sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:ReliefTheory a owl:Class ;
    rdfs:subClassOf sunny:TheoreticalMechanism .

sunny:SubF_BizarreUnrelatability a sunny:SubversiveFrame ;
    rdfs:label "Absurd and Repellent Personal Tastes"^^xsd:string ;
    rdfs:comment "The genuine expression of nonsensical, grotesque, or deeply unsettling preferences that guarantee immediate social rejection"^^xsd:string .

sunny:SubF_BodilyPanic a sunny:SubversiveFrame ;
    rdfs:label "Involuntary Bodily Panic and Failure"^^xsd:string ;
    rdfs:comment "The complete physical and psychological collapse of a performer, resulting in grotesque bodily reflexes instead of rehearsed entertainment"^^xsd:string .

sunny:SubF_ChildishRebellion a sunny:SubversiveFrame ;
    rdfs:label "Childish Rebellion by Adults"^^xsd:string ;
    rdfs:comment "Adults exhibiting severe regression, throwing tantrums and breaking simple rules designed for children out of pure stubbornness"^^xsd:string .

sunny:SubF_CruelApathy a sunny:SubversiveFrame ;
    rdfs:label "Callous Apathy and Cruel Mockery"^^xsd:string ;
    rdfs:comment "The sociopathic reaction of finding immense amusement in the suffering of friends, completely discarding any sense of empathy or duty to help"^^xsd:string .

sunny:SubF_DisplacedCowardice a sunny:SubversiveFrame ;
    rdfs:label "Displaced Violence Due to Cowardice"^^xsd:string ;
    rdfs:comment "The distorted logic of attacking innocent or weaker targets (children) to compensate for the fear of confronting the actual, physically intimidating perpetrator"^^xsd:string .

sunny:SubF_FakedIllness a sunny:SubversiveFrame ;
    rdfs:label "Faking Illness for Attention"^^xsd:string ;
    rdfs:comment "The sociopathic act of fabricating a deadly disease to manipulate loved ones into giving affection and strangers into giving money"^^xsd:string .

sunny:SubF_HostileParanoia a sunny:SubversiveFrame ;
    rdfs:label "Urban Hostility and Paranoia in Suburbia"^^xsd:string ;
    rdfs:comment "The distorted belief that friendly, unsolicited social interaction is a threat or an offensive intrusion of privacy that warrants aggressive silence"^^xsd:string .

sunny:SubF_InfantileCodependency a sunny:SubversiveFrame ;
    rdfs:label "Infantile Co-dependency and Tantrums"^^xsd:string ;
    rdfs:comment "The regressive behavior of a grown adult demanding toddler-level care from others and reacting with explosive rage when treated like an adult"^^xsd:string .

sunny:SubF_TherapyTrivialization a sunny:SubversiveFrame ;
    rdfs:label "Trivialization and Hijacking of Therapy"^^xsd:string ;
    rdfs:comment "The distorted belief that a highly trained medical professional is merely a referee for petty, mundane domestic disputes"^^xsd:string .

sunny:SubF_ToxicConsumption a sunny:SubversiveFrame ;
    rdfs:label "Casual Consumption of Toxic Substances"^^xsd:string ;
    rdfs:comment "The absurd normalization of eating or drinking industrial, deadly chemicals as if they were harmless everyday food items"^^xsd:string .

sunny:The_Comedy_Club_Audience a sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:The_Fundraiser_Crowd a sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:The_Kids a sunny:Target ;
    sunny:hasQuality sunny:PhysicalQuality .

sunny:The_Therapist a sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:Wally_\(The_Neighbor\) a sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:isAgentIn a owl:ObjectProperty .

sunny:isIncludedIn a owl:ObjectProperty .

sunny:isTargetIn a owl:ObjectProperty .

sunny:violates a owl:ObjectProperty ;
    rdfs:comment "connecting SubversiveOccurrence to NormOccurence" ;
    rdfs:domain sunny:SubversiveOccurence ;
    rdfs:range sunny:NormOccurence .

sunny:HS_001_norm a sunny:NormOccurence ;
    rdfs:comment "Mac and Dee should respect the lifeguard's instructions, accept that the slide is for children only, and walk away to use the adult attractions"^^xsd:string .

sunny:HS_001_subversive a sunny:SubversiveOccurence ;
    rdfs:comment """Mac and Dee dismiss the lifeguard's warning, selfishly push their way down the slide, and get wedged in the tube.
"""^^xsd:string ;
    sunny:violates sunny:HS_001_norm .

sunny:HS_002_norm a sunny:NormOccurence ;
    rdfs:comment "Dee should use the private session to explore her personal feelings about the dinner conflict and work on her own psychological growth alone"^^xsd:string .

sunny:HS_002_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Dee hijacks the session by bringing in the gang, while Frank dumps a tablecloth of dirty dishes on the therapist's floor to demand a ruling on a chore"^^xsd:string ;
    sunny:violates sunny:HS_002_norm .

sunny:HS_003_norm a sunny:NormOccurence ;
    rdfs:comment "Mac and Dennis should smile back, introduce themselves, and exchange polite pleasantries with the neighbor welcoming them."^^xsd:string .

sunny:HS_003_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Mac and Dennis stare aggressively in dead silence at the greeting neighbor, refusing to speak, and later express genuine outrage that he dared to talk to them"^^xsd:string ;
    sunny:violates sunny:HS_003_norm .

sunny:HS_004_norm a sunny:NormOccurence ;
    rdfs:comment "Charlie should provide normal, attractive answers like \"traveling,\" \"movies,\" or \"pizza\" to make himself appealing to women"^^xsd:string .

sunny:HS_004_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Charlie answers the questions with absurd, repellent things like \"milk steak,\" \"magnets,\" and \"ghouls,\" completely ruining the profile"^^xsd:string ;
    sunny:violates sunny:HS_004_norm .

sunny:HS_005_norm a sunny:NormOccurence ;
    rdfs:comment "Mac and Charlie should confront the intimidating father who stole their bike or call the police to resolve the theft legally"^^xsd:string .

sunny:HS_005_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Too terrified to fight the adult thief, Mac and Charlie return and brutally beat up his young children instead to steal the bike back"^^xsd:string ;
    sunny:violates sunny:HS_005_norm .

sunny:HS_006_norm a sunny:NormOccurence ;
    rdfs:comment "Charlie should use safe, edible food coloring for the beer and acknowledge the extreme danger of ingesting industrial paint"^^xsd:string .

sunny:HS_006_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Charlie plans to serve paint to customers, reveals his green tongue to show he drinks it himself, and dismisses Mac's horror about its toxicity"^^xsd:string ;
    sunny:violates sunny:HS_006_norm .

sunny:HS_007_norm a sunny:NormOccurence ;
    rdfs:comment "Charlie’s mom should honestly disclose her health status, never fake a terminal illness, and seek her son's attention through healthy communication"^^xsd:string .

sunny:HS_007_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Charlie’s mom stands before a sympathetic crowd wearing makeup to look dying, and casually admits she made up the cancer just to get Charlie to care about her"^^xsd:string ;
    sunny:violates sunny:HS_007_norm .

sunny:HS_008_norm a sunny:NormOccurence ;
    rdfs:comment "Dee should confidently hold the microphone, tell her rehearsed jokes smoothly, and attempt to make the audience laugh"^^xsd:string .

sunny:HS_008_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Dee stammers nervously, fails to tell a single joke, and repeatedly dry heaves loudly into the microphone before running off stage"^^xsd:string ;
    sunny:violates sunny:HS_008_norm .

sunny:HS_009_norm a sunny:NormOccurence ;
    rdfs:comment "Dennis should either peel the apple himself or simply eat it with the skin like a normal, functioning adult"^^xsd:string .

sunny:HS_009_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Dennis demands Dee peel his apple, cites absurd fears of skin toxins, and throws a screaming tantrum when she refuses to coddle him"^^xsd:string ;
    sunny:violates sunny:HS_009_norm .

sunny:HS_010_norm a sunny:NormOccurence ;
    rdfs:comment "Mac and Charlie should express deep shock and concern, offer immediate help, and suggest rehab for their friends' severe addiction"^^xsd:string .

sunny:HS_010_subversive a sunny:SubversiveOccurence ;
    rdfs:comment "Mac and Charlie immediately state they do not care, laugh at their friends' degraded state, and aggressively pantomime them crying for crack"^^xsd:string ;
    sunny:violates sunny:HS_010_norm .

sunny:includes a owl:ObjectProperty,
        owl:TransitiveProperty ;
    rdfs:comment "This is the shape to model the inclusion for the blending, but as i understood is not possibile to use the same property for D&S seeing that one is a construction of a patter and the other of the real application of it" ;
    owl:inverseOf sunny:isIncludedIn .

sunny:isDescribedBy a owl:ObjectProperty ;
    rdfs:comment "Important to connect the situations with the corresponding descriptions" ;
    rdfs:domain sunny:Situation ;
    rdfs:range sunny:Description .

sunny:HumorEntity a owl:Class ;
    rdfs:subClassOf dul:SocialAgent .

sunny:PhysicalQuality a owl:Class ;
    rdfs:comment "In what pysical condition the characters are (naked, sweating, dirty)" ;
    rdfs:subClassOf sunny:HumorQuality .

sunny:SuperiorityTheory a owl:Class ;
    rdfs:subClassOf sunny:TheoreticalMechanism .

sunny:Dennis a sunny:Agent,
        sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality,
        sunny:PhysicalQuality .

sunny:HumorQuality a owl:Class ;
    rdfs:comment "This make the blend possibile: through this precise actions the character make the breaking of the social norm funny" ;
    rdfs:subClassOf dul:Quality .

sunny:Charlie a sunny:Agent,
        sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:Dee a sunny:Agent,
        sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality,
        sunny:PhysicalQuality .

sunny:TheoreticalMechanism a owl:Class ;
    rdfs:comment "This is related to the literature around the construction oh humor" .

sunny:Description a owl:Class ;
    rdfs:comment "The description part of all the frames converging to create the humorous situation" ;
    owl:disjointWith sunny:Situation .

sunny:IncongruityTheory a owl:Class ;
    rdfs:subClassOf sunny:TheoreticalMechanism .

sunny:Mac a sunny:Agent,
        sunny:Target ;
    sunny:hasQuality sunny:BehavioralQuality .

sunny:Agent a owl:Class ;
    rdfs:comment "Who does the action" ;
    rdfs:subClassOf sunny:HumorEntity .

sunny:Situation a owl:Class ;
    rdfs:comment "The real description of what happens in the episodes" .

sunny:BehavioralQuality a owl:Class ;
    rdfs:comment "expressions, strange behaviours" ;
    rdfs:subClassOf sunny:HumorQuality .

sunny:EthicalRule a owl:Class ;
    rdfs:comment "the BEHAVIOURAL rules of the corresponding frame (Social decorum, professionalism, respect)" ;
    rdfs:subClassOf sunny:Description .

sunny:ExpectedSocialFrame a owl:Class ;
    rdfs:comment "the normal social frame (a funeral, a job interview)" ;
    rdfs:subClassOf sunny:Description .

sunny:HumorousFrame a owl:Class ;
    rdfs:comment "This is the BLENDING class, keeping all the descriptions together" ;
    rdfs:subClassOf sunny:Description .

sunny:SubversiveFrame a owl:Class ;
    rdfs:comment "Important to note that this is the only element in the description without a corrisponding class in the SItuation, becaue this is just a throretical description of the - already distorted - context the characters live in. In this sense, the whole situation is just an explanation of what we are describing here" ;
    rdfs:subClassOf sunny:Description .

sunny:Target a owl:Class ;
    rdfs:comment "The victim of the joke" ;
    rdfs:subClassOf sunny:HumorEntity .

sunny:NormOccurence a owl:Class ;
    rdfs:comment "How the characters apply this norm realated to the frame" ;
    rdfs:subClassOf sunny:Situation .

sunny:SubversiveOccurence a owl:Class ;
    rdfs:comment "The real act of subversion (what are the characters doing)" ;
    rdfs:subClassOf dul:Action,
        sunny:Situation .

sunny:HumorousSituation a owl:Class ;
    rdfs:comment "The situation BLENDING all the other situations (Social, Norm e Subversive)" ;
    rdfs:subClassOf sunny:Situation .

