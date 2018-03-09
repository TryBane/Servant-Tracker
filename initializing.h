#ifndef INITIALIZING_H
#define INITIALIZING_H
#include "mainwindow.h"

void MainWindow::initializeServants()
{
    servants.reserve(65);

    // Initialize Saber Servants
    {
        servants.push_back(Servant("Artoria Pendragon",
                                   "Saber",{
                                       Material{"Dragon Fang",2,18},
                                       Material{"Hero Proof",3,29},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Phoenix Feather",4,8},
                                       Material{"Dragon's Reverse Scale",4,5},
                                       Material{"Proof of Hero","Skill",5,15},
                                       Material{"Proof of Hero","Skill",6,29},
                                       Material{"Dragon Fang","Skill",7,12},
                                       Material{"Dragon Fang","Skill",8,24},
                                       Material{"Claw of Chaos","Skill",8,4},
                                       Material{"Claw of Chaos","Skill",9,11},
                                       Material{"Dragon's Reverse Scale","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Artoria Pendragon (Alter)",
                                   "Saber",{
                                       Material{"Dragon Fang",2,15},
                                       Material{"Claw of Chaos",3,5},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Claw of Chaos","Skill",5,3},
                                       Material{"Claw of Chaos","Skill",6,5},
                                       Material{"Dragon Fang","Skill",7,10},
                                       Material{"Dragon Fang","Skill",8,20},
                                       Material{"Void's Dust","Skill",8,10},
                                       Material{"Void's Dust","Skill",9,30},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Artoria Pendragon (Lily)",
                                   "Saber",{
                                       Material{"Proof of Hero",2,18},
                                       Material{"Dragon Fang",3,20},
                                       Material{"Seed of Yggdrasil",3,5},
                                       Material{"Seed of Yggdrasil",4,10},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Dragon Fang","Skill",5,10},
                                       Material{"Dragon Fang","Skill",6,20},
                                       Material{"Proof of Hero","Skill",7,12},
                                       Material{"Proof of Hero","Skill",8,24},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,9},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Nero Claudius",
                                   "Saber",{
                                       Material{"Octuplet Crystals",2,6},
                                       Material{"Phoenix Feather",3,7},
                                       Material{"Ghost Lantern",3,4},
                                       Material{"Ghost Lantern",4,8},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Phoenix Feather","Skill",4,4},
                                       Material{"Phoenix Feather","Skill",5,7},
                                       Material{"Octuplet Crystals","Skill",6,4},
                                       Material{"Octuplet Crystals","Skill",7,8},
                                       Material{"Dragon Fang","Skill",8,12},
                                       Material{"Dragon Fang","Skill",9,36},
                                       Material{"Eternal Gear","Skill",9,20} },
                                   4 ) );

        servants.push_back(Servant("Siegfried",
                                   "Saber",{
                                       Material{"Dragon Fang",2,15},
                                       Material{"Seed of Yggdrasil",3,10},
                                       Material{"Proof of Hero",3,12},
                                       Material{"Proof of Hero",4,24},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Seed of Yggdrasil","Skill",5,5},
                                       Material{"Seed of Yggdrasil","Skill",6,10},
                                       Material{"Dragon Fang","Skill",7,10},
                                       Material{"Dragon Fang","Skill",8,20},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,6},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Gaius Julius Caesar",
                                   "Saber",{
                                       Material{"Proof of Hero",2,15},
                                       Material{"Eternal Gear",3,7},
                                       Material{"Forbidden Page",3,4},
                                       Material{"Forbidden Page",4,7},
                                       Material{"Claw of Chaos",4,5},
                                       Material{"Eternal Gear","Skill",5,4},
                                       Material{"Eternal Gear","Skill",6,7},
                                       Material{"Proof of Hero","Skill",7,10},
                                       Material{"Proof of Hero","Skill",8,20},
                                       Material{"Ghost Lantern","Skill",8,4},
                                       Material{"Ghost Lantern","Skill",9,12},
                                       Material{"Claw of Chaos","Skill",9,10}
                                   },
                                   3 ) );

        servants.push_back(Servant("Altera",
                                   "Saber",{
                                       Material{"Void's Dust",2,15},
                                       Material{"Claw of Chaos",3,6},
                                       Material{"Meteor Horseshoe",3,5},
                                       Material{"Meteor Horseshoe",4,10},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Claw of Chaos","Skill",5,3},
                                       Material{"Claw of Chaos","Skill",6,6},
                                       Material{"Void's Dust","Skill",7,10},
                                       Material{"Void's Dust","Skill",8,20},
                                       Material{"Evil Bone","Skill",8,18},
                                       Material{"Evil Bone","Skill",9,54},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Gilles de Rais",
                                   "Saber",{
                                       Material{"Proof of Hero",2,15},
                                       Material{"Void's Dust",3,13},
                                       Material{"Evil Bone",3,10},
                                       Material{"Evil Bone",4,20},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Void's Dust","Skill",5,7},
                                       Material{"Void's Dust","Skill",6,13},
                                       Material{"Proof of Hero","Skill",7,10},
                                       Material{"Proof of Hero","Skill",8,20},
                                       Material{"Ghost Lantern","Skill",8,4},
                                       Material{"Ghost Lantern","Skill",9,12},
                                       Material{"Heart of the Foreign God","Skill",9,7}
                                   },
                                   3 ) );

        servants.push_back(Servant("Chevalier d'Eon",
                                   "Saber",{
                                       Material{"Proof of Hero",2,18},
                                       Material{"Seed of Yggdrasil",3,10},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Phoenix Feather",4,7},
                                       Material{"Serpent Jewel",4,8},
                                       Material{"Seed of Yggdrasil","Skill",5,5},
                                       Material{"Seed of Yggdrasil","Skill",6,10},
                                       Material{"Proof of Hero","Skill",7,12},
                                       Material{"Proof of Hero","Skill",8,24},
                                       Material{"Forbidden Page","Skill",8,5},
                                       Material{"Forbidden Page","Skill",9,15},
                                       Material{"Serpent Jewel","Skill",9,16}
                                   },
                                   4 ) );

        servants.push_back(Servant("Okita Souji",
                                   "Saber",{
                                       Material{"Void's Dust",2,15},
                                       Material{"Dragon Fang",3,24},
                                       Material{"Eternal Gear",3,5},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Phoenix Feather",4,10},
                                       Material{"Dragon Fang","Skill",5,12},
                                       Material{"Dragon Fang","Skill",6,24},
                                       Material{"Void's Dust","Skill",7,10},
                                       Material{"Void's Dust","Skill",8,20},
                                       Material{"Claw of Chaos","Skill",8,4},
                                       Material{"Claw of Chaos","Skill",9,11},
                                       Material{"Phoenix Feather","Skill",9,20}
                                   },
                                   5 ) );

        servants.push_back(Servant("Fergus mac Roich",
                                   "Saber",{
                                       Material{"Proof of Hero",2,15},
                                       Material{"Octuplet Crystals",3,7},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,3},
                                       Material{"Meteor Horseshoe",4,8},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,7},
                                       Material{"Proof of Hero","Skill",7,10},
                                       Material{"Proof of Hero","Skill",8,20},
                                       Material{"Seed of Yggdrasil","Skill",8,5},
                                       Material{"Seed of Yggdrasil","Skill",9,15},
                                       Material{"Meteor Horseshoe","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Mordred",
                                   "Saber",{
                                       Material{"Dragon Fang",2,18},
                                       Material{"Octuplet Crystals",3,10},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Dragon's Reverse Scale",4,5},
                                       Material{"Octuplet Crystals","Skill",5,5},
                                       Material{"Octuplet Crystals","Skill",6,10},
                                       Material{"Dragon Fang","Skill",7,12},
                                       Material{"Dragon Fang","Skill",8,24},
                                       Material{"Claw of Chaos","Skill",8,4},
                                       Material{"Claw of Chaos","Skill",9,11},
                                       Material{"Dragon's Reverse Scale","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Nero Claudius (Bride)",
                                   "Saber",{
                                       Material{"Octuplet Crystals",2,8},
                                       Material{"Ghost Lantern",3,10},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Phoenix Feather",4,8},
                                       Material{"Seed of Yggdrasil",4,15},
                                       Material{"Ghost Lantern","Skill",5,5},
                                       Material{"Ghost Lantern","Skill",6,10},
                                       Material{"Octuplet Crystals","Skill",7,5},
                                       Material{"Octuplet Crystals","Skill",8,10},
                                       Material{"Serpent Jewel","Skill",8,5},
                                       Material{"Serpent Jewel","Skill",9,15},
                                       Material{"Eternal Gear","Skill",9,24}
                                   },
                                   5 ) );

        servants.push_back(Servant("Ryougi Shiki (Saber)",
                                   "Saber",{
                                       Material{"Void's Dust",2,15},
                                       Material{"Phoenix Feather",3,8},
                                       Material{"Claw of Chaos",3,3},
                                       Material{"Claw of Chaos",4,6},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Phoenix Feather","Skill",5,4},
                                       Material{"Phoenix Feather","Skill",6,8},
                                       Material{"Void's Dust","Skill",7,10},
                                       Material{"Void's Dust","Skill",8,20},
                                       Material{"Octuplet Crystals","Skill",8,6},
                                       Material{"Octuplet Crystals","Skill",9,18},
                                       Material{"Ghost Lantern","Skill",9,24}
                                   },
                                   5 ) );

        servants.push_back(Servant("Rama",
                                   "Saber",{
                                       Material{"Seed of Yggdrasil",2,8},
                                       Material{"Heart of the Foreign God",3,4},
                                       Material{"Octuplet Crystals",3,4},
                                       Material{"Octuplet Crystals",4,8},
                                       Material{"Spirit Root",4,4},
                                       Material{"Heart of the Foreign God","Skill",5,2},
                                       Material{"Heart of the Foreign God","Skill",6,4},
                                       Material{"Seed of Yggdrasil","Skill",7,5},
                                       Material{"Seed of Yggdrasil","Skill",8,10},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,9},
                                       Material{"Evil Bone","Skill",9,60}
                                   },
                                   4 ) );
    }
    // Initialize Archer Servants
    {
        servants.push_back(Servant("Emiya",
                                   "Archer",{
                                       Material{"Proof of Hero",2,18},
                                       Material{"Eternal Gear",3,8},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Void's Dust",4,20},
                                       Material{"Eternal Gear","Skill",5,4},
                                       Material{"Eternal Gear","Skill",6,8},
                                       Material{"Proof of Hero","Skill",7,12},
                                       Material{"Proof of Hero","Skill",8,24},
                                       Material{"Phoenix Feather","Skill",8,4},
                                       Material{"Phoenix Feather","Skill",9,12},
                                       Material{"Void's Dust","Skill",9,40}
                                   },
                                   4 ) );

        servants.push_back(Servant("Gilgamesh",
                                   "Archer",{
                                       Material{"Serpent Jewel",2,6},
                                       Material{"Proof of Hero",3,29},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Proof of Hero","Skill",5,15},
                                       Material{"Proof of Hero","Skill",6,29},
                                       Material{"Serpent Jewel","Skill",7,4},
                                       Material{"Serpent Jewel","Skill",8,8},
                                       Material{"Void's Dust","Skill",8,12},
                                       Material{"Void's Dust","Skill",9,36},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Robin Hood",
                                   "Archer",{
                                       Material{"Seed of Yggdrasil",2,6},
                                       Material{"Serpent Jewel",3,6},
                                       Material{"Dragon Fang",3,8},
                                       Material{"Dragon Fang",4,16},
                                       Material{"Void's Dust",4,16},
                                       Material{"Serpent Jewel","Skill",5,3},
                                       Material{"Serpent Jewel","Skill",6,6},
                                       Material{"Seed of Yggdrasil","Skill",7,4},
                                       Material{"Seed of Yggdrasil","Skill",8,8},
                                       Material{"Phoenix Feather","Skill",8,4},
                                       Material{"Phoenix Feather","Skill",9,10},
                                       Material{"Void's Dust","Skill",9,32}
                                   },
                                   3 ) );

        servants.push_back(Servant("Atalanta",
                                   "Archer",{
                                       Material{"Phoenix Feather",2,5},
                                       Material{"Dragon Fang",3,20},
                                       Material{"Serpent Jewel",3,4},
                                       Material{"Serpent Jewel",4,7},
                                       Material{"Seed of Yggdrasil",4,12},
                                       Material{"Dragon Fang","Skill",5,10},
                                       Material{"Dragon Fang","Skill",6,20},
                                       Material{"Phoenix Feather","Skill",7,4},
                                       Material{"Phoenix Feather","Skill",8,7},
                                       Material{"Void's Dust","Skill",8,10},
                                       Material{"Void's Dust","Skill",9,30},
                                       Material{"Seed of Yggdrasil","Skill",9,24}
                                   },
                                   4 ) );

        servants.push_back(Servant("Euryale",
                                   "Archer",{
                                       Material{"Serpent Jewel",2,4},
                                       Material{"Dragon's Reverse Scale",3,3},
                                       Material{"Void's Dust",3,7},
                                       Material{"Void's Dust",4,13},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Dragon's Reverse Scale","Skill",5,2},
                                       Material{"Dragon's Reverse Scale","Skill",6,3},
                                       Material{"Serpent Jewel","Skill",7,3},
                                       Material{"Serpent Jewel","Skill",8,6},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,8},
                                       Material{"Heart of the Foreign God","Skill",9,7}
                                   },
                                   3 ) );

        servants.push_back(Servant("Arash",
                                   "Archer",{
                                       Material{"Seed of Yggdrasil",2,3},
                                       Material{"Proof of Hero",3,10},
                                       Material{"Octuplet Crystals",3,2},
                                       Material{"Octuplet Crystals",4,4},
                                       Material{"Void's Dust",4,8},
                                       Material{"Proof of Hero","Skill",5,5},
                                       Material{"Proof of Hero","Skill",6,10},
                                       Material{"Seed of Yggdrasil","Skill",7,2},
                                       Material{"Seed of Yggdrasil","Skill",8,4},
                                       Material{"Homunculus Baby","Skill",8,2},
                                       Material{"Homunculus Baby","Skill",9,6},
                                       Material{"Void's Dust","Skill",9,16}
                                   },
                                   1 ) );

        servants.push_back(Servant("Orion",
                                   "Archer",{
                                       Material{"Heart of the Foreign God",2,3},
                                       Material{"Serpent Jewel",3,8},
                                       Material{"Claw of Chaos",3,3},
                                       Material{"Claw of Chaos",4,6},
                                       Material{"Phoenix Feather",4,10},
                                       Material{"Serpent Jewel","Skill",5,4},
                                       Material{"Serpent Jewel","Skill",6,8},
                                       Material{"Heart of the Foreign God","Skill",7,2},
                                       Material{"Heart of the Foreign God","Skill",8,4},
                                       Material{"Void's Dust","Skill",8,12},
                                       Material{"Void's Dust","Skill",9,36},
                                       Material{"Phoenix Feather","Skill",9,20}
                                   },
                                   5 ) );

        servants.push_back(Servant("David",
                                   "Archer",{
                                       Material{"Void's Dust",2,10},
                                       Material{"Homunculus Baby",3,7},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,3},
                                       Material{"Octuplet Crystals",4,8},
                                       Material{"Homunculus Baby","Skill",5,4},
                                       Material{"Homunculus Baby","Skill",6,7},
                                       Material{"Void's Dust","Skill",7,7},
                                       Material{"Void's Dust","Skill",8,13},
                                       Material{"Proof of Hero","Skill",8,12},
                                       Material{"Proof of Hero","Skill",9,36},
                                       Material{"Octuplet Crystals","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Oda Nobunaga",
                                   "Archer",{
                                       Material{"Evil Bone","Skill",5,12},
                                       Material{"Evil Bone","Skill",6,24},
                                       Material{"Octuplet Crystals","Skill",7,4},
                                       Material{"Octuplet Crystals","Skill",8,8},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,9},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Nikola Tesla",
                                   "Archer",{
                                       Material{"Void's Dust",2,15},
                                       Material{"Forbidden Page",3,10},
                                       Material{"Eternal Gear",3,5},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Ghost Lantern",4,12},
                                       Material{"Forbidden Page","Skill",5,5},
                                       Material{"Forbidden Page","Skill",6,10},
                                       Material{"Void's Dust","Skill",7,10},
                                       Material{"Void's Dust","Skill",8,20},
                                       Material{"Phoenix Feather","Skill",8,5},
                                       Material{"Phoenix Feather","Skill",9,15},
                                       Material{"Ghost Lantern","Skill",9,24}
                                   },
                                   5 ) );

        servants.push_back(Servant("Arjuna",
                                   "Archer",{
                                       Material{"Proof of Hero",2,22},
                                       Material{"Phoenix Feather",3,8},
                                       Material{"Serpent Jewel",3,4},
                                       Material{"Serpent Jewel",4,8},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Phoenix Feather","Skill",5,4},
                                       Material{"Phoenix Feather","Skill",6,8},
                                       Material{"Proof of Hero","Skill",7,15},
                                       Material{"Proof of Hero","Skill",8,29},
                                       Material{"Seed of Yggdrasil","Skill",8,8},
                                       Material{"Seed of Yggdrasil","Skill",9,22},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Gilgamesh (Child)",
                                   "Archer",{
                                       Material{"Seed of Yggdrasil",2,6},
                                       Material{"Serpent Jewel",3,6},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,3},
                                       Material{"Proof of Hero",4,24},
                                       Material{"Serpent Jewel","Skill",5,3},
                                       Material{"Serpent Jewel","Skill",6,6},
                                       Material{"Seed of Yggdrasil","Skill",7,4},
                                       Material{"Seed of Yggdrasil","Skill",8,8},
                                       Material{"Void's Dust","Skill",8,8},
                                       Material{"Void's Dust","Skill",9,24},
                                       Material{"Phoenix Feather","Skill",9,13}
                                   },
                                   3 ) );
    }
    // Initialize Lancer Servants
    {
     servants.push_back(Servant("Cu Chulainn",
                                "Lancer",{
                                    Material{"Claw of Chaos",2,3},
                                    Material{"Seed of Yggdrasil",3,8},
                                    Material{"Octuplet Crystals",3,4},
                                    Material{"Octuplet Crystals",4,7},
                                    Material{"Phoenix Feather",4,7},
                                    Material{"Seed of Yggdrasil","Skill",5,4},
                                    Material{"Seed of Yggdrasil","Skill",6,8},
                                    Material{"Claw of Chaos","Skill",7,2},
                                    Material{"Claw of Chaos","Skill",8,4},
                                    Material{"Proof of Hero","Skill",8,12},
                                    Material{"Proof of Hero","Skill",9,36},
                                    Material{"Phoenix Feather","Skill",9,13}
                                },
                                3 ) );

     servants.push_back(Servant("Elizabeth Bathory",
                                "Lancer",{
                                    Material{"Dragon Fang",2,15},
                                    Material{"Dragon's Reverse Scale",3,4},
                                    Material{"Claw of Chaos",3,3},
                                    Material{"Claw of Chaos",4,5},
                                    Material{"Phoenix Feather",4,8},
                                    Material{"Dragon's Reverse Scale","Skill",5,2},
                                    Material{"Dragon's Reverse Scale","Skill",6,4},
                                    Material{"Dragon Fang","Skill",7,10},
                                    Material{"Dragon Fang","Skill",8,20},
                                    Material{"Forbidden Page","Skill",8,5},
                                    Material{"Forbidden Page","Skill",9,15},
                                    Material{"Phoenix Feather","Skill",9,16}
                                },
                                4 ) );

     servants.push_back(Servant("Musashibou Benkei",
                                "Lancer",{
                                    Material{"Evil Bone",2,11},
                                    Material{"Seed of Yggdrasil",3,6},
                                    Material{"Homunculus Baby",3,3},
                                    Material{"Homunculus Baby",4,5},
                                    Material{"Void's Dust",4,12},
                                    Material{"Seed of Yggdrasil","Skill",5,3},
                                    Material{"Seed of Yggdrasil","Skill",6,6},
                                    Material{"Evil Bone","Skill",7,8},
                                    Material{"Evil Bone","Skill",8,15},
                                    Material{"Void's Dust","Skill",8,6},
                                    Material{"Void's Dust","Skill",9,42}
                                },
                                2 ) );

     servants.push_back(Servant("Cu Chulainn (Prototype)",
                                "Lancer",{
                                    Material{"Void's Dust",2,10},
                                    Material{"Seed of Yggdrasil",3,8},
                                    Material{"Claw of Chaos",3,2},
                                    Material{"Claw of Chaos",4,4},
                                    Material{"Octuplet Crystals",4,8},
                                    Material{"Seed of Yggdrasil","Skill",5,4},
                                    Material{"Seed of Yggdrasil","Skill",6,8},
                                    Material{"Void's Dust","Skill",7,7},
                                    Material{"Void's Dust","Skill",8,13},
                                    Material{"Proof of Hero","Skill",8,12},
                                    Material{"Proof of Hero","Skill",9,36},
                                    Material{"Octuplet Crystals","Skill",9,16}
                                },
                                3 ) );

     servants.push_back(Servant("Leonidas",
                                "Lancer",{
                                    Material{"Claw of Chaos",2,3},
                                    Material{"Void's Dust",3,10},
                                    Material{"Octuplet Crystals",3,3},
                                    Material{"Octuplet Crystals",4,5},
                                    Material{"Evil Bone",4,18},
                                    Material{"Void's Dust","Skill",5,5},
                                    Material{"Void's Dust","Skill",6,10},
                                    Material{"Claw of Chaos","Skill",7,2},
                                    Material{"Claw of Chaos","Skill",8,3},
                                    Material{"Serpent Jewel","Skill",8,3},
                                    Material{"Serpent Jewel","Skill",9,8},
                                    Material{"Evil Bone","Skill",9,36}
                                },
                                2 ) );

     servants.push_back(Servant("Romulus",
                                "Lancer",{
                                    Material{"Octuplet Crystals",2,5},
                                    Material{"Phoenix Feather",3,6},
                                    Material{"Evil Bone",3,10},
                                    Material{"Evil Bone",4,20},
                                    Material{"Void's Dust",4,16},
                                    Material{"Phoenix Feather","Skill",5,3},
                                    Material{"Phoenix Feather","Skill",6,6},
                                    Material{"Octuplet Crystals","Skill",7,4},
                                    Material{"Octuplet Crystals","Skill",8,7},
                                    Material{"Eternal Gear","Skill",8,4},
                                    Material{"Eternal Gear","Skill",9,12},
                                    Material{"Void's Dust","Skill",9,32}
                                },
                                3 ) );

     servants.push_back(Servant("Hector",
                                "Lancer",{
                                    Material{"Meteor Horseshoe",2,5},
                                    Material{"Proof of Hero",3,20},
                                    Material{"Seed of Yggdrasil",3,4},
                                    Material{"Seed of Yggdrasil",4,8},
                                    Material{"Phoenix Feather",4,7},
                                    Material{"Proof of Hero","Skill",5,10},
                                    Material{"Proof of Hero","Skill",6,20},
                                    Material{"Meteor Horseshoe","Skill",7,4},
                                    Material{"Meteor Horseshoe","Skill",8,7},
                                    Material{"Octuplet Crystals","Skill",8,4},
                                    Material{"Octuplet Crystals","Skill",9,12},
                                    Material{"Phoenix Feather","Skill",9,13}
                                },
                                3 ) );

     servants.push_back(Servant("Scathach",
                                "Lancer",{
                                    Material{"Evil Bone",2,22},
                                    Material{"Void's Dust",3,20},
                                    Material{"Claw of Chaos",3,3},
                                    Material{"Claw of Chaos",4,6},
                                    Material{"Heart of the Foreign God",4,5},
                                    Material{"Void's Dust","Skill",5,10},
                                    Material{"Void's Dust","Skill",6,20},
                                    Material{"Evil Bone","Skill",7,15},
                                    Material{"Evil Bone","Skill",8,29},
                                    Material{"Phoenix Feather","Skill",8,5},
                                    Material{"Phoenix Feather","Skill",9,15},
                                    Material{"Heart of the Foreign God","Skill",9,10}
                                },
                                5 ) );

     servants.push_back(Servant("Diarmuid Ua Duibhne",
                                "Lancer",{
                                    Material{"Seed of Yggdrasil",2,6},
                                    Material{"Phoenix Feather",3,6},
                                    Material{"Serpent Jewel",3,3},
                                    Material{"Serpent Jewel",4,6},
                                    Material{"Void's Dust",4,16},
                                    Material{"Phoenix Feather","Skill",5,3},
                                    Material{"Phoenix Feather","Skill",6,6},
                                    Material{"Seed of Yggdrasil","Skill",7,4},
                                    Material{"Seed of Yggdrasil","Skill",8,8},
                                    Material{"Proof of Hero","Skill",8,12},
                                    Material{"Proof of Hero","Skill",9,36},
                                    Material{"Void's Dust","Skill",9,32}
                                },
                                3 ) );

     servants.push_back(Servant("Artoria Pendragon (Lancer Alter)",
                                "Lancer",{
                                    Material{"Meteor Horseshoe",2,6},
                                    Material{"Phoenix Feather",3,7},
                                    Material{"Dragon's Reverse Scale",3,2},
                                    Material{"Dragon's Reverse Scale",4,4},
                                    Material{"Heart of the Foreign God",4,4},
                                    Material{"Phoenix Feather","Skill",5,4},
                                    Material{"Phoenix Feather","Skill",6,7},
                                    Material{"Meteor Horseshoe","Skill",7,4},
                                    Material{"Meteor Horseshoe","Skill",8,8},
                                    Material{"Dragon Fang","Skill",8,12},
                                    Material{"Dragon Fang","Skill",9,36},
                                    Material{"Heart of the Foreign God","Skill",9,8}
                                },
                                4 ) );

     servants.push_back(Servant("Karna",
                                "Lancer",{
                                    Material{"Octuplet Crystals",2,8},
                                    Material{"Eternal Gear",3,10},
                                    Material{"Phoenix Feather",3,4},
                                    Material{"Phoenix Feather",4,8},
                                    Material{"Heart of the Foreign God",4,5},
                                    Material{"Eternal Gear","Skill",5,5},
                                    Material{"Eternal Gear","Skill",6,10},
                                    Material{"Octuplet Crystals","Skill",7,5},
                                    Material{"Octuplet Crystals","Skill",8,10},
                                    Material{"Proof of Hero","Skill",8,18},
                                    Material{"Proof of Hero","Skill",9,36},
                                    Material{"Heart of the Foreign God","Skill",9,10}
                                },
                                5 ) );

     servants.push_back(Servant("Fionn mac Cumhaill",
                                "Lancer",{
                                    Material{"Phoenix Feather",2,5},
                                    Material{"Evil Bone",3,24},
                                    Material{"Claw of Chaos",3,3},
                                    Material{"Claw of Chaos",4,5},
                                    Material{"Void's Dust",4,20},
                                    Material{"Evil Bone","Skill",5,12},
                                    Material{"Evil Bone","Skill",6,24},
                                    Material{"Phoenix Feather","Skill",7,4},
                                    Material{"Phoenix Feather","Skill",8,7},
                                    Material{"Octuplet Crystals","Skill",8,5},
                                    Material{"Octuplet Crystals","Skill",9,15},
                                    Material{"Serpent Jewel","Skill",9,16}
                                },
                                4 ) );

     servants.push_back(Servant("Brynhildr",
                                "Lancer",{
                                    Material{"Heart of the Foreign God",2,3},
                                    Material{"Seed of Yggdrasil",3,12},
                                    Material{"Proof of Hero",3,15},
                                    Material{"Proof of Hero",4,29},
                                    Material{"Ghost Lantern",4,12},
                                    Material{"Seed of Yggdrasil","Skill",5,6},
                                    Material{"Seed of Yggdrasil","Skill",6,12},
                                    Material{"Heart of the Foreign God","Skill",7,2},
                                    Material{"Heart of the Foreign God","Skill",8,4},
                                    Material{"Phoenix Feather","Skill",8,5},
                                    Material{"Phoenix Feather","Skill",9,15},
                                    Material{"Claw of Chaos","Skill",9,15}
                                },
                                5 ) );

     servants.push_back(Servant("Li Shuwen (Lancer)",
                                "Lancer",{
                                    Material{"Dragon Fang",2,15},
                                    Material{"Octuplet Crystals",3,8},
                                    Material{"Claw of Chaos",3,3},
                                    Material{"Claw of Chaos",4,5},
                                    Material{"Dragon's Reverse Scale",4,4},
                                    Material{"Octuplet Crystals","Skill",5,4},
                                    Material{"Octuplet Crystals","Skill",6,8},
                                    Material{"Dragon Fang","Skill",7,10},
                                    Material{"Dragon Fang","Skill",8,20},
                                    Material{"Void's Dust","Skill",8,10},
                                    Material{"Void's Dust","Skill",9,30},
                                    Material{"Warhorse's Immature Horn","Skill",9,12}
                                },
                                4 ) );
    }
    // Initialize Rider Servants
    {
        servants.push_back(Servant("Medusa",
                                   "Rider",{
                                       Material{"Serpent Jewel",2,4},
                                       Material{"Void's Dust",3,13},
                                       Material{"Meteor Horseshoe",3,4},
                                       Material{"Meteor Horseshoe",4,7},
                                       Material{"Phoenix Feather",4,7},
                                       Material{"Void's Dust","Skill",5,7},
                                       Material{"Void's Dust","Skill",6,13},
                                       Material{"Serpent Jewel","Skill",7,3},
                                       Material{"Serpent Jewel","Skill",8,6},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,5},
                                       Material{"Phoenix Feather","Skill",9,13}
                                   },
                                   3 ) );

        servants.push_back(Servant("Saint George",
                                   "Rider",{
                                       Material{"Proof of Hero",2,11},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Forbidden Page",3,3},
                                       Material{"Forbidden Page",4,5},
                                       Material{"Meteor Horseshoe",4,6},
                                       Material{"Phoenix Feather","Skill",5,2},
                                       Material{"Phoenix Feather","Skill",6,4},
                                       Material{"Proof of Hero","Skill",7,8},
                                       Material{"Proof of Hero","Skill",8,15},
                                       Material{"Eternal Gear","Skill",8,3},
                                       Material{"Eternal Gear","Skill",9,9},
                                       Material{"Meteor Horseshoe","Skill",9,12}
                                   },
                                   2 ) );

        servants.push_back(Servant("Edward Teach",
                                   "Rider",{
                                       Material{"Evil Bone",2,11},
                                       Material{"Octuplet Crystals",3,5},
                                       Material{"Forbidden Page",3,3},
                                       Material{"Forbidden Page",4,5},
                                       Material{"Ghost Lantern",4,6},
                                       Material{"Octuplet Crystals","Skill",5,3},
                                       Material{"Octuplet Crystals","Skill",6,5},
                                       Material{"Evil Bone","Skill",7,8},
                                       Material{"Evil Bone","Skill",8,15},
                                       Material{"Homunculus Baby","Skill",8,3},
                                       Material{"Homunculus Baby","Skill",9,9},
                                       Material{"Ghost Lantern","Skill",9,15}
                                   },
                                   2 ) );

        servants.push_back(Servant("Boudica",
                                   "Rider",{
                                       Material{"Phoenix Feather",2,4},
                                       Material{"Evil Bone",3,20},
                                       Material{"Meteor Horseshoe",3,4},
                                       Material{"Meteor Horseshoe",4,7},
                                       Material{"Void's Dust",4,16},
                                       Material{"Evil Bone","Skill",5,10},
                                       Material{"Evil Bone","Skill",6,20},
                                       Material{"Phoenix Feather","Skill",7,3},
                                       Material{"Phoenix Feather","Skill",8,6},
                                       Material{"Serpent Jewel","Skill",8,4},
                                       Material{"Serpent Jewel","Skill",9,10},
                                       Material{"Void's Dust","Skill",9,32}
                                   },
                                   3 ) );

        servants.push_back(Servant("Ushiwakamaru",
                                   "Rider",{
                                       Material{"Proof of Hero",2,15},
                                       Material{"Meteor Horseshoe",3,7},
                                       Material{"Ghost Lantern",3,4},
                                       Material{"Ghost Lantern",4,7},
                                       Material{"Octuplet Crystals",4,8},
                                       Material{"Meteor Horseshoe","Skill",5,4},
                                       Material{"Meteor Horseshoe","Skill",6,7},
                                       Material{"Proof of Hero","Skill",7,10},
                                       Material{"Proof of Hero","Skill",8,20},
                                       Material{"Eternal Gear","Skill",8,4},
                                       Material{"Eternal Gear","Skill",9,12},
                                       Material{"Octuplet Crystals","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Alexander",
                                   "Rider",{
                                       Material{"Meteor Horseshoe",2,5},
                                       Material{"Octuplet Crystals",3,7},
                                       Material{"Phoenix Feather",3,3},
                                       Material{"Phoenix Feather",4,6},
                                       Material{"Proof of Hero",4,24},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,7},
                                       Material{"Meteor Horseshoe","Skill",7,4},
                                       Material{"Meteor Horseshoe","Skill",8,7},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,8},
                                       Material{"Proof of Hero","Skill",9,48}
                                   },
                                   3 ) );

        servants.push_back(Servant("Marie Antoinette",
                                   "Rider",{
                                       Material{"Phoenix Feather",2,5},
                                       Material{"Serpent Jewel",3,7},
                                       Material{"Meteor Horseshoe",3,4},
                                       Material{"Meteor Horseshoe",4,8},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Serpent Jewel","Skill",5,4},
                                       Material{"Serpent Jewel","Skill",6,7},
                                       Material{"Phoenix Feather","Skill",7,4},
                                       Material{"Phoenix Feather","Skill",8,7},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,6},
                                       Material{"Eternal Gear","Skill",9,20}
                                   },
                                   4 ) );

        servants.push_back(Servant("Saint Martha",
                                   "Rider",{
                                       Material{"Dragon Fang",2,15},
                                       Material{"Seed of Yggdrasil",3,10},
                                       Material{"Claw of Chaos",3,3},
                                       Material{"Claw of Chaos",4,5},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Seed of Yggdrasil","Skill",5,5},
                                       Material{"Seed of Yggdrasil","Skill",6,10},
                                       Material{"Dragon Fang","Skill",7,10},
                                       Material{"Dragon Fang","Skill",8,20},
                                       Material{"Phoenix Feather","Skill",8,4},
                                       Material{"Phoenix Feather","Skill",9,12},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Francis Drake",
                                   "Rider",{
                                       Material{"Evil Bone",2,22},
                                       Material{"Dragon Fang",3,24},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Dragon Fang","Skill",5,12},
                                       Material{"Dragon Fang","Skill",6,24},
                                       Material{"Evil Bone","Skill",7,15},
                                       Material{"Evil Bone","Skill",8,29},
                                       Material{"Ghost Lantern","Skill",8,6},
                                       Material{"Ghost Lantern","Skill",9,18},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Anne Bonny & Mary Read",
                                   "Rider",{
                                       Material{"Homunculus Baby",2,6},
                                       Material{"Ghost Lantern",3,8},
                                       Material{"Evil Bone",3,12},
                                       Material{"Evil Bone",4,24},
                                       Material{"Claw of Chaos",4,6},
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Homunculus Baby","Skill",7,4},
                                       Material{"Homunculus Baby","Skill",8,8},
                                       Material{"Void's Dust","Skill",8,10},
                                       Material{"Void's Dust","Skill",9,30},
                                       Material{"Claw of Chaos","Skill",9,12}
                                   },
                                   4 ) );

        servants.push_back(Servant("Altoria Pendragon (Santa Alter)",
                                   "Rider",{
                                       Material{"Dragon Fang","Skill",5,10},
                                       Material{"Dragon Fang","Skill",6,20},
                                       Material{"Meteor Horseshoe","Skill",7,4},
                                       Material{"Meteor Horseshoe","Skill",8,8},
                                       Material{"Dragon's Reverse Scale","Skill",8,2},
                                       Material{"Dragon's Reverse Scale","Skill",9,6},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Astolfo",
                                   "Rider",{
                                       Material{"Meteor Horseshoe",2,6},
                                       Material{"Octuplet Crystals",3,8},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Phoenix Feather",4,7},
                                       Material{"Claw of Chaos",4,6},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,8},
                                       Material{"Meteor Horseshoe","Skill",7,4},
                                       Material{"Meteor Horseshoe","Skill",8,8},
                                       Material{"Forbidden Page","Skill",8,5},
                                       Material{"Forbidden Page","Skill",9,15},
                                       Material{"Seed of Yggdrasil","Skill",9,24}
                                   },
                                   4 ) );

        servants.push_back(Servant("Medb",
                                   "Rider",{
                                       Material{"Serpent Jewel",2,6},
                                       Material{"Phoenix Feather",3,8},
                                       Material{"Meteor Horseshoe",3,5},
                                       Material{"Meteor Horseshoe",4,10},
                                       Material{"Warhorse's Immature Horn",4,8},
                                       Material{"Phoenix Feather","Skill",5,4},
                                       Material{"Phoenix Feather","Skill",6,8},
                                       Material{"Serpent Jewel","Skill",7,4},
                                       Material{"Serpent Jewel","Skill",8,8},
                                       Material{"Ghost Lantern","Skill",8,6},
                                       Material{"Ghost Lantern","Skill",9,18},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );
    }
    // Initialize Caster Servants
    {
        servants.push_back(Servant("Medea",
                                   "Caster",{
                                       Material{"Dragon Fang",2,12},
                                       Material{"Void's Dust",3,13},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,3},
                                       Material{"Forbidden Page",4,8},
                                       Material{"Void's Dust","Skill",5,7},
                                       Material{"Void's Dust","Skill",6,13},
                                       Material{"Dragon Fang","Skill",7,8},
                                       Material{"Dragon Fang","Skill",8,16},
                                       Material{"Ghost Lantern","Skill",8,4},
                                       Material{"Ghost Lantern","Skill",9,12},
                                       Material{"Forbidden Page","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Gilles de Rais (Caster)",
                                   "Caster",{
                                       Material{"Ghost Lantern",2,5},
                                       Material{"Homunculus Baby",3,7},
                                       Material{"Forbidden Page",3,4},
                                       Material{"Forbidden Page",4,7},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Homunculus Baby","Skill",5,4},
                                       Material{"Homunculus Baby","Skill",6,7},
                                       Material{"Ghost Lantern","Skill",7,4},
                                       Material{"Ghost Lantern","Skill",8,7},
                                       Material{"Void's Dust","Skill",8,8},
                                       Material{"Void's Dust","Skill",9,24},
                                       Material{"Heart of the Foreign God","Skill",9,7}
                                   },
                                   3 ) );

        servants.push_back(Servant("Hans Christian Andersen",
                                   "Caster",{
                                       Material{"Forbidden Page",2,4},
                                       Material{"Homunculus Baby",3,5},
                                       Material{"Eternal Gear",3,3},
                                       Material{"Eternal Gear",4,5},
                                       Material{"Meteor Horseshoe",4,6},
                                       Material{"Homunculus Baby","Skill",5,3},
                                       Material{"Homunculus Baby","Skill",6,5},
                                       Material{"Forbidden Page","Skill",7,3},
                                       Material{"Forbidden Page","Skill",8,5},
                                       Material{"Void's Dust","Skill",8,6},
                                       Material{"Void's Dust","Skill",9,18},
                                       Material{"Meteor Horseshoe","Skill",9,12}
                                   },
                                   2 ) );

        servants.push_back(Servant("William Shakespeare",
                                   "Caster",{
                                       Material{"Ghost Lantern",2,4},
                                       Material{"Forbidden Page",3,5},
                                       Material{"Homunculus Baby",3,3},
                                       Material{"Homunculus Baby",4,5},
                                       Material{"Serpent Jewel",4,5},
                                       Material{"Forbidden Page","Skill",5,3},
                                       Material{"Forbidden Page","Skill",6,5},
                                       Material{"Ghost Lantern","Skill",7,3},
                                       Material{"Ghost Lantern","Skill",8,5},
                                       Material{"Void's Dust","Skill",8,6},
                                       Material{"Void's Dust","Skill",9,18},
                                       Material{"Serpent Jewel","Skill",9,10}
                                   },
                                   2 ) );

        servants.push_back(Servant("Mephistopheles",
                                   "Caster",{
                                       Material{"Void's Dust",2,10},
                                       Material{"Homunculus Baby",3,4},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,3},
                                       Material{"Ghost Lantern",4,8},
                                       Material{"Homunculus Baby","Skill",5,4},
                                       Material{"Homunculus Baby","Skill",6,7},
                                       Material{"Void's Dust","Skill",7,7},
                                       Material{"Void's Dust","Skill",8,13},
                                       Material{"Eternal Gear","Skill",8,4},
                                       Material{"Eternal Gear","Skill",9,12},
                                       Material{"Ghost Lantern","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Wolfgang Amadeus Mozart",
                                   "Caster",{
                                       Material{"Evil Bone",2,8},
                                       Material{"Eternal Gear",3,4},
                                       Material{"Forbidden Page",3,2},
                                       Material{"Forbidden Page",4,4},
                                       Material{"Heart of the Foreign God",4,2},
                                       Material{"Eternal Gear","Skill",5,2},
                                       Material{"Eternal Gear","Skill",6,4},
                                       Material{"Evil Bone","Skill",7,5},
                                       Material{"Evil Bone","Skill",8,10},
                                       Material{"Phoenix Feather","Skill",8,2},
                                       Material{"Phoenix Feather","Skill",9,5},
                                       Material{"Heart of the Foreign God","Skill",9,4}
                                   },
                                   1 ) );

        servants.push_back(Servant("Zhuge Liang (Lord El-Melloi II)",
                                   "Caster",{
                                       Material{"Void's Dust",2,15},
                                       Material{"Forbidden Page",3,10},
                                       Material{"Eternal Gear",3,5},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Phoenix Feather",4,12},
                                       Material{"Forbidden Page","Skill",5,5},
                                       Material{"Forbidden Page","Skill",6,10},
                                       Material{"Void's Dust","Skill",7,10},
                                       Material{"Void's Dust","Skill",8,20},
                                       Material{"Heart of the Foreign God","Skill",8,3},
                                       Material{"Heart of the Foreign God","Skill",9,8},
                                       Material{"Phoenix Feather","Skill",9,20}
                                   },
                                   5 ) );

        servants.push_back(Servant("Cu Chulainn (Caster)",
                                   "Caster",{
                                       Material{"Seed of Yggdrasil",2,6},
                                       Material{"Forbidden Page",3,7},
                                       Material{"Claw of Chaos",3,2},
                                       Material{"Claw of Chaos",4,4},
                                       Material{"Eternal Gear",4,8},
                                       Material{"Forbidden Page","Skill",5,4},
                                       Material{"Forbidden Page","Skill",6,7},
                                       Material{"Seed of Yggdrasil","Skill",7,4},
                                       Material{"Seed of Yggdrasil","Skill",8,8},
                                       Material{"Phoenix Feather","Skill",8,4},
                                       Material{"Phoenix Feather","Skill",9,10},
                                       Material{"Eternal Gear","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Elizabeth Bathory (Halloween)",
                                   "Caster",{
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Evil Bone","Skill",7,12},
                                       Material{"Evil Bone","Skill",8,24},
                                       Material{"Dragon Fang","Skill",8,12},
                                       Material{"Dragon Fang","Skill",9,36},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Tamamo no Mae",
                                   "Caster",{
                                       Material{"Ghost Lantern",2,8},
                                       Material{"Evil Bone",3,29},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Forbidden Page",4,12},
                                       Material{"Evil Bone","Skill",5,15},
                                       Material{"Evil Bone","Skill",6,29},
                                       Material{"Ghost Lantern","Skill",7,5},
                                       Material{"Ghost Lantern","Skill",8,10},
                                       Material{"Seed of Yggdrasil","Skill",8,8},
                                       Material{"Seed of Yggdrasil","Skill",9,22},
                                       Material{"Forbidden Page","Skill",9,24}
                                   },
                                   5 ) );

        servants.push_back(Servant("Medea (Lily)",
                                   "Caster",{
                                       Material{"Void's Dust",2,12},
                                       Material{"Ghost Lantern",3,8},
                                       Material{"Phoenix Feather",3,4},
                                       Material{"Phoenix Feather",4,7},
                                       Material{"Forbidden Page",4,10},
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Void's Dust","Skill",7,8},
                                       Material{"Void's Dust","Skill",8,16},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,6},
                                       Material{"Forbidden Page","Skill",9,20}
                                   },
                                   4 ) );

        servants.push_back(Servant("Nursery Rhyme",
                                   "Caster",{
                                       Material{"Seed of Yggdrasil",2,8},
                                       Material{"Ghost Lantern",3,8},
                                       Material{"Forbidden Page",3,4},
                                       Material{"Forbidden Page",4,8},
                                       Material{"Phoenix Feather",4,8},
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Seed of Yggdrasil","Skill",7,5},
                                       Material{"Seed of Yggdrasil","Skill",8,10},
                                       Material{"Homunculus Baby","Skill",8,5},
                                       Material{"Homunculus Baby","Skill",9,15},
                                       Material{"Phoenix Feather","Skill",9,16}
                                   },
                                   4 ) );

        servants.push_back(Servant("Paracelsus von Hohenheim",
                                   "Caster",{
                                       Material{"Forbidden Page",2,5},
                                       Material{"Eternal Gear",3,7},
                                       Material{"Homunculus Baby",3,4},
                                       Material{"Homunculus Baby",4,7},
                                       Material{"Evil Bone",4,24},
                                       Material{"Eternal Gear","Skill",5,4},
                                       Material{"Eternal Gear","Skill",6,7},
                                       Material{"Forbidden Page","Skill",7,4},
                                       Material{"Forbidden Page","Skill",8,7},
                                       Material{"Void's Dust","Skill",8,8},
                                       Material{"Void's Dust","Skill",9,24},
                                       Material{"Evil Bone","Skill",9,48}
                                   },
                                   3 ) );

        servants.push_back(Servant("Charles Babbage",
                                   "Caster",{
                                       Material{"Eternal Gear",2,5},
                                       Material{"Octuplet Crystals",3,7},
                                       Material{"Forbidden Page",3,4},
                                       Material{"Forbidden Page",4,7},
                                       Material{"Void's Dust",4,16},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,7},
                                       Material{"Eternal Gear","Skill",7,4},
                                       Material{"Eternal Gear","Skill",8,7},
                                       Material{"Ghost Lantern","Skill",8,4},
                                       Material{"Ghost Lantern","Skill",9,12},
                                       Material{"Void's Dust","Skill",9,32}
                                   },
                                   3 ) );

        servants.push_back(Servant("Helena Blavatsky",
                                   "Caster",{
                                       Material{"Void's Dust",2,12},
                                       Material{"Ghost Lantern",3,8},
                                       Material{"Homunculus Baby",3,4},
                                       Material{"Homunculus Baby",4,8},
                                       Material{"Forbidden Page",4,10},
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Void's Dust","Skill",7,8},
                                       Material{"Void's Dust","Skill",8,16},
                                       Material{"Black Tallow","Skill",8,3},
                                       Material{"Black Tallow","Skill",9,9},
                                       Material{"Phoenix Feather","Skill",9,16}
                                   },
                                   4 ) );

        servants.push_back(Servant("Thomas Edison",
                                   "Caster",{
                                       Material{"Forbidden Page",2,12},
                                       Material{"Ghost Lantern",3,8},
                                       Material{"Eternal Gear",3,4},
                                       Material{"Eternal Gear",4,8},
                                       Material{"Forbidden Page",4,10},
                                       Material{"Hero Proof","Skill",5,4},
                                       Material{"Hero Proof","Skill",6,8},
                                       Material{"Forbidden Page","Skill",7,8},
                                       Material{"Forbidden Page","Skill",8,16},
                                       Material{"Heart of the Foreign God","Skill",8,3},
                                       Material{"Heart of the Foreign God","Skill",9,9},
                                       Material{"Claw of Chaos","Skill",9,16}
                                   },
                                   4 ) );
    }
    // Initialize Assassin Servants
    {
        servants.push_back(Servant("Sasaki Kojiro",
                                   "Assassin",{
                                       Material{"Proof of Hero",2,8},
                                       Material{"Octuplet Crystals",3,7},
                                       Material{"Eternal Gear",3,2},
                                       Material{"Eternal Gear",4,4},
                                       Material{"Octuplet Crystals",4,4},
                                       Material{"Void's Dust","Skill",5,4},
                                       Material{"Void's Dust","Skill",6,7},
                                       Material{"Proof of Hero","Skill",7,5},
                                       Material{"Proof of Hero","Skill",8,10},
                                       Material{"Evil Bone","Skill",8,6},
                                       Material{"Evil Bone","Skill",9,18},
                                       Material{"Octuplet Crystals","Skill",9,8}
                                   },
                                   1 ) );

        servants.push_back(Servant("Cursed Arm Hassan",
                                   "Assassin",{
                                       Material{"Evil Bone",2,11},
                                       Material{"Eternal Gear",3,5},
                                       Material{"Void's Dust",3,5},
                                       Material{"Void's Dust",4,10},
                                       Material{"Homunculus Baby",4,6},
                                       Material{"Eternal Gear","Skill",5,3},
                                       Material{"Eternal Gear","Skill",6,5},
                                       Material{"Evil Bone","Skill",7,8},
                                       Material{"Evil Bone","Skill",8,15},
                                       Material{"Ghost Lantern","Skill",8,3},
                                       Material{"Ghost Lantern","Skill",9,9},
                                       Material{"Homunculus Baby","Skill",9,12}
                                   },
                                   2 ) );

        servants.push_back(Servant("Stheno",
                                   "Assassin",{
                                       Material{"Serpent Jewel",2,5},
                                       Material{"Heart of the Foreign God",3,4},
                                       Material{"Void's Dust",3,8},
                                       Material{"Void's Dust",4,16},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Heart of the Foreign God","Skill",5,2},
                                       Material{"Heart of the Foreign God","Skill",6,4},
                                       Material{"Serpent Jewel","Skill",7,4},
                                       Material{"Serpent Jewel","Skill",8,7},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,9},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Jing Ke",
                                   "Assassin",{
                                       Material{"Evil Bone",2,15},
                                       Material{"Octuplet Crystals",3,7},
                                       Material{"Ghost Lantern",3,4},
                                       Material{"Ghost Lantern",4,7},
                                       Material{"Void's Dust",4,16},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,7},
                                       Material{"Evil Bone","Skill",7,10},
                                       Material{"Evil Bone","Skill",8,20},
                                       Material{"Phoenix Feather","Skill",8,4},
                                       Material{"Phoenix Feather","Skill",9,10},
                                       Material{"Void's Dust","Skill",9,32}
                                   },
                                   3 ) );

        servants.push_back(Servant("Chares-Henri Sanson",
                                   "Assassin",{
                                       Material{"Evil Bone",2,11},
                                       Material{"Void's Dust",3,10},
                                       Material{"Heart of the Foreign God",3,1},
                                       Material{"Heart of the Foreign God",4,2},
                                       Material{"Homunculus Baby",4,6},
                                       Material{"Void's Dust","Skill",5,5},
                                       Material{"Void's Dust","Skill",6,10},
                                       Material{"Evil Bone","Skill",7,8},
                                       Material{"Evil Bone","Skill",8,16},
                                       Material{"Forbidden Page","Skill",8,3},
                                       Material{"Forbidden Page","Skill",9,9},
                                       Material{"Homunculus Baby","Skill",9,12}
                                   },
                                   2 ) );

        servants.push_back(Servant("The Phantom of the Opera",
                                   "Assassin",{
                                       Material{"Ghost Lantern",2,4},
                                       Material{"Void's Dust",3,10},
                                       Material{"Eternal Gear",3,3},
                                       Material{"Eternal Gear",4,5},
                                       Material{"Evil Bone",4,18},
                                       Material{"Void's Dust","Skill",5,5},
                                       Material{"Void's Dust","Skill",6,10},
                                       Material{"Ghost Lantern","Skill",7,3},
                                       Material{"Ghost Lantern","Skill",8,5},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,4},
                                       Material{"Evil Bone","Skill",9,36}
                                   },
                                   2 ) );

        servants.push_back(Servant("Mata Hari",
                                   "Assassin",{
                                       Material{"Phoenix Feather",2,2},
                                       Material{"Eternal Gear",3,4},
                                       Material{"Ghost Lantern",3,2},
                                       Material{"Ghost Lantern",4,4},
                                       Material{"Serpent Jewel",4,4},
                                       Material{"Eternal Gear","Skill",5,2},
                                       Material{"Eternal Gear","Skill",6,4},
                                       Material{"Phoenix Feather","Skill",7,2},
                                       Material{"Phoenix Feather","Skill",8,3},
                                       Material{"Homunculus Baby","Skill",8,2},
                                       Material{"Homunculus Baby","Skill",9,6},
                                       Material{"Serpent Jewel","Skill",9,7}
                                   },
                                   1 ) );

        servants.push_back(Servant("Carmilla",
                                   "Assassin",{
                                       Material{"Serpent Jewel",2,5},
                                       Material{"Homunculus Baby",3,8},
                                       Material{"Heart of the Foreign God",3,2},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Claw of Chaos",4,6},
                                       Material{"Homunculus Baby","Skill",5,4},
                                       Material{"Homunculus Baby","Skill",6,8},
                                       Material{"Serpent Jewel","Skill",7,4},
                                       Material{"Serpent Jewel","Skill",8,7},
                                       Material{"Homunculus Baby","Skill",8,15},
                                       Material{"Homunculus Baby","Skill",9,45},
                                       Material{"Claw of Chaos","Skill",9,12}
                                   },
                                   4 ) );

        servants.push_back(Servant("Jack the Ripper",
                                   "Assassin",{
                                       Material{"Evil Bone",2,22},
                                       Material{"Void's Dust",3,20},
                                       Material{"Eternal Gear",3,5},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Claw of Chaos",4,8},
                                       Material{"Void's Dust","Skill",5,10},
                                       Material{"Void's Dust","Skill",6,20},
                                       Material{"Evil Bone","Skill",7,15},
                                       Material{"Evil Bone","Skill",8,29},
                                       Material{"Heart of the Foreign God","Skill",8,3},
                                       Material{"Heart of the Foreign God","Skill",9,8},
                                       Material{"Claw of Chaos","Skill",9,15}
                                   },
                                   5 ) );

        servants.push_back(Servant("Henry Jekyll & Hyde",
                                   "Assassin",{
                                       Material{"Evil Bone",2,15},
                                       Material{"Void's Dust",3,13},
                                       Material{"Octuplet Crystals",3,4},
                                       Material{"Octuplet Crystals",4,7},
                                       Material{"Homunculus Baby",4,8},
                                       Material{"Void's Dust","Skill",5,7},
                                       Material{"Void's Dust","Skill",6,13},
                                       Material{"Evil Bone","Skill",7,10},
                                       Material{"Evil Bone","Skill",8,20},
                                       Material{"Heart of the Foreign God","Skill",8,2},
                                       Material{"Heart of the Foreign God","Skill",9,5},
                                       Material{"Homunculus Baby","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Mysterious Heroine X",
                                   "Assassin",{
                                       Material{"Dragon Fang",2,18},
                                       Material{"Phoenix Feather",3,8},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Proof of Hero",4,36},
                                       Material{"Phoenix Feather","Skill",5,4},
                                       Material{"Phoenix Feather","Skill",6,8},
                                       Material{"Dragon Fang","Skill",7,12},
                                       Material{"Dragon Fang","Skill",8,24},
                                       Material{"Void's Dust","Skill",8,12},
                                       Material{"Void's Dust","Skill",9,36},
                                       Material{"Octuplet Crystals","Skill",9,24}
                                   },
                                   5 ) );

        servants.push_back(Servant("Ryougi Shiki",
                                   "Assassin",{
                                       Material{"Evil Bone","Skill",5,12},
                                       Material{"Evil Bone","Skill",6,24},
                                       Material{"Claw of Chaos","Skill",7,3},
                                       Material{"Claw of Chaos","Skill",8,5},
                                       Material{"Eternal Gear","Skill",8,5},
                                       Material{"Eternal Gear","Skill",9,15},
                                       Material{"Homunculus Baby","Skill",9,20}
                                   },
                                   4 ) );

        servants.push_back(Servant("Emiya (Assassin)",
                                   "Assassin",{
                                       Material{"Hero Proof",2,12},
                                       Material{"Evil Bone",3,8},
                                       Material{"Void's Dust",3,4},
                                       Material{"Void's Dust",4,8},
                                       Material{"Bloodstone Tear",4,10},
                                       Material{"Evil Bone","Skill",5,4},
                                       Material{"Evil Bone","Skill",6,8},
                                       Material{"Hero Proof","Skill",7,8},
                                       Material{"Hero Proof","Skill",8,16},
                                       Material{"Homunculus Baby","Skill",8,3},
                                       Material{"Homunculus Baby","Skill",9,9},
                                       Material{"Heart of the Foreign God","Skill",9,16}
                                   },
                                   4 ) );
    }
    // Initialize Berserker Servants
    {
        servants.push_back(Servant("Heracles",
                                   "Berserker",{
                                       Material{"Octuplet Crystals",2,6},
                                       Material{"Heart of the Foreign God",3,4},
                                       Material{"Claw of Chaos",3,3},
                                       Material{"Claw of Chaos",4,5},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Heart of the Foreign God","Skill",5,2},
                                       Material{"Heart of the Foreign God","Skill",6,4},
                                       Material{"Octuplet Crystals","Skill",7,4},
                                       Material{"Octuplet Crystals","Skill",8,8},
                                       Material{"Proof of Hero","Skill",8,15},
                                       Material{"Proof of Hero","Skill",9,45},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Lancelot",
                                   "Berserker",{
                                       Material{"Dragon's Reverse Scale",2,3},
                                       Material{"Claw of Chaos",3,5},
                                       Material{"Void's Dust",3,8},
                                       Material{"Void's Dust",4,16},
                                       Material{"Dragon Fang",4,24},
                                       Material{"Claw of Chaos","Skill",5,3},
                                       Material{"Claw of Chaos","Skill",6,5},
                                       Material{"Dragon's Reverse Scale","Skill",7,2},
                                       Material{"Dragon's Reverse Scale","Skill",8,4},
                                       Material{"Meteor Horseshoe","Skill",8,5},
                                       Material{"Meteor Horseshoe","Skill",9,15},
                                       Material{"Dragon Fang","Skill",9,48}
                                   },
                                   4 ) );

        servants.push_back(Servant("Lu Bu",
                                   "Berserker",{
                                       Material{"Meteor Horseshoe",2,5},
                                       Material{"Evil Bone",3,20},
                                       Material{"Claw of Chaos",3,2},
                                       Material{"Claw of Chaos",4,4},
                                       Material{"Void's Dust",4,16},
                                       Material{"Evil Bone","Skill",5,10},
                                       Material{"Evil Bone","Skill",6,20},
                                       Material{"Meteor Horseshoe","Skill",7,4},
                                       Material{"Meteor Horseshoe","Skill",8,7},
                                       Material{"Octuplet Crystals","Skill",8,4},
                                       Material{"Octuplet Crystals","Skill",9,12},
                                       Material{"Void's Dust","Skill",9,32}
                                   },
                                   3 ) );

        servants.push_back(Servant("Spartacus",
                                   "Berserker",{
                                       Material{"Octuplet Crystals",2,3},
                                       Material{"Proof of Hero",3,10},
                                       Material{"Homunculus Baby",3,2},
                                       Material{"Homunculus Baby",4,4},
                                       Material{"Evil Bone",4,12},
                                       Material{"Proof of Hero","Skill",5,5},
                                       Material{"Proof of Hero","Skill",6,10},
                                       Material{"Octuplet Crystals","Skill",7,2},
                                       Material{"Octuplet Crystals","Skill",8,4},
                                       Material{"Seed of Yggdrasil","Skill",8,3},
                                       Material{"Seed of Yggdrasil","Skill",9,8},
                                       Material{"Evil Bone","Skill",9,24}
                                   },
                                   1 ) );

        servants.push_back(Servant("Sakata Kintoki",
                                   "Berserker",{
                                       Material{"Proof of Hero",2,22},
                                       Material{"Octuplet Crystals",3,10},
                                       Material{"Seed of Yggdrasil",3,6},
                                       Material{"Seed of Yggdrasil",4,12},
                                       Material{"Heart of the Foreign God",4,5},
                                       Material{"Octuplet Crystals","Skill",5,5},
                                       Material{"Octuplet Crystals","Skill",6,10},
                                       Material{"Proof of Hero","Skill",7,15},
                                       Material{"Proof of Hero","Skill",8,29},
                                       Material{"Void's Dust","Skill",8,12},
                                       Material{"Void's Dust","Skill",9,36},
                                       Material{"Heart of the Foreign God","Skill",9,10}
                                   },
                                   5 ) );

        servants.push_back(Servant("Vlad III",
                                   "Berserker",{
                                       Material{"Dragon's Reverse Scale",2,3},
                                       Material{"Claw of Chaos",3,6},
                                       Material{"Forbidden Page",3,5},
                                       Material{"Forbidden Page",4,10},
                                       Material{"Void's Dust",4,24},
                                       Material{"Claw of Chaos","Skill",5,3},
                                       Material{"Claw of Chaos","Skill",6,6},
                                       Material{"Dragon's Reverse Scale","Skill",7,2},
                                       Material{"Dragon's Reverse Scale","Skill",8,4},
                                       Material{"Evil Bone","Skill",8,18},
                                       Material{"Evil Bone","Skill",9,54},
                                       Material{"Void's Dust","Skill",9,48}
                                   },
                                   5 ) );

        servants.push_back(Servant("Asterios",
                                   "Berserker",{
                                       Material{"Octuplet Crystals",2,3},
                                       Material{"Proof of Hero",3,10},
                                       Material{"Meteor Horseshoe",3,2},
                                       Material{"Meteor Horseshoe",4,4},
                                       Material{"Seed of Yggdrasil",4,5},
                                       Material{"Proof of Hero","Skill",5,5},
                                       Material{"Proof of Hero","Skill",6,10},
                                       Material{"Octuplet Crystals","Skill",7,2},
                                       Material{"Octuplet Crystals","Skill",8,4},
                                       Material{"Void's Dust","Skill",8,4},
                                       Material{"Void's Dust","Skill",9,12},
                                       Material{"Seed of Yggdrasil","Skill",9,10}
                                   },
                                   1 ) );

        servants.push_back(Servant("Caligula",
                                   "Berserker",{
                                       Material{"Octuplet Crystals",2,4},
                                       Material{"Serpent Jewel",3,4},
                                       Material{"Ghost Lantern",3,3},
                                       Material{"Ghost Lantern",4,5},
                                       Material{"Forbidden Page",4,6},
                                       Material{"Serpent Jewel","Skill",5,2},
                                       Material{"Serpent Jewel","Skill",6,4},
                                       Material{"Octuplet Crystals","Skill",7,3},
                                       Material{"Octuplet Crystals","Skill",8,5},
                                       Material{"Meteor Horseshoe","Skill",8,3},
                                       Material{"Meteor Horseshoe","Skill",9,9},
                                       Material{"Forbidden Page","Skill",9,12}
                                   },
                                   2 ) );

        servants.push_back(Servant("Darius III",
                                   "Berserker",{
                                       Material{"Octuplet Crystals",2,5},
                                       Material{"Phoenix Feather",3,6},
                                       Material{"Evil Bone",3,10},
                                       Material{"Evil Bone",4,20},
                                       Material{"Meteor Horseshoe",4,8},
                                       Material{"Phoenix Feather","Skill",5,3},
                                       Material{"Phoenix Feather","Skill",6,6},
                                       Material{"Octuplet Crystals","Skill",7,4},
                                       Material{"Octuplet Crystals","Skill",8,7},
                                       Material{"Void's Dust","Skill",8,8},
                                       Material{"Void's Dust","Skill",9,24},
                                       Material{"Meteor Horseshoe","Skill",9,16}
                                   },
                                   3 ) );

        servants.push_back(Servant("Kiyohime",
                                   "Berserker",{
                                       Material{"Ghost Lantern",2,5},
                                       Material{"Evil Bone",3,20},
                                       Material{"Dragon Fang",3,8},
                                       Material{"Dragon Fang",4,16},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Evil Bone","Skill",5,10},
                                       Material{"Evil Bone","Skill",6,20},
                                       Material{"Ghost Lantern","Skill",7,4},
                                       Material{"Ghost Lantern","Skill",8,7},
                                       Material{"Seed of Yggdrasil","Skill",8,5},
                                       Material{"Seed of Yggdrasil","Skill",9,15},
                                       Material{"Dragon's Reverse Scale","Skill",9,7}
                                   },
                                   3 ) );

        servants.push_back(Servant("Eric Bloodaxe",
                                   "Berserker",{
                                       Material{"Evil Bone",2,11},
                                       Material{"Homunculus Baby",3,5},
                                       Material{"Serpent Jewel",3,2},
                                       Material{"Serpent Jewel",4,4},
                                       Material{"Void's Dust",4,12},
                                       Material{"Homunculus Baby","Skill",5,3},
                                       Material{"Homunculus Baby","Skill",6,5},
                                       Material{"Evil Bone","Skill",7,8},
                                       Material{"Evil Bone","Skill",8,15},
                                       Material{"Claw of Chaos","Skill",8,2},
                                       Material{"Claw of Chaos","Skill",9,6},
                                       Material{"Void's Dust","Skill",9,24}
                                   },
                                   2 ) );

        servants.push_back(Servant("Tamamo Cat",
                                   "Berserker",{
                                       Material{"Ghost Lantern",2,6},
                                       Material{"Homunculus Baby",3,8},
                                       Material{"Claw of Chaos",3,3},
                                       Material{"Claw of Chaos",4,5},
                                       Material{"Heart of the Foreign God",4,4},
                                       Material{"Homunculus Baby","Skill",5,4},
                                       Material{"Homunculus Baby","Skill",6,8},
                                       Material{"Ghost Lantern","Skill",7,4},
                                       Material{"Ghost Lantern","Skill",8,8},
                                       Material{"Octuplet Crystals","Skill",8,5},
                                       Material{"Octuplet Crystals","Skill",9,15},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) );

        servants.push_back(Servant("Frankenstein",
                                   "Berserker",{
                                       Material{"Homunculus Baby",2,6},
                                       Material{"Evil Bone",3,24},
                                       Material{"Ghost Lantern",3,4},
                                       Material{"Ghost Lantern",4,8},
                                       Material{"Eternal Gear",4,10},
                                       Material{"Evil Bone","Skill",5,12},
                                       Material{"Evil Bone","Skill",6,24},
                                       Material{"Homunculus Baby","Skill",7,5},
                                       Material{"Homunculus Baby","Skill",8,8},
                                       Material{"Octuplet Crystals","Skill",8,5},
                                       Material{"Octuplet Crystals","Skill",9,15},
                                       Material{"Eternal Gear","Skill",9,20}
                                   },
                                   4 ) );

        servants.push_back(Servant("Beowulf",
                                   "Berserker",{
                                       Material{"Proof of Hero",2,18},
                                       Material{"Octuplet Crystals",3,8},
                                       Material{"Dragon's Reverse Scale",3,2},
                                       Material{"Dragon's Reverse Scale",4,4},
                                       Material{"Evil Bone",4,30},
                                       Material{"Octuplet Crystals","Skill",5,4},
                                       Material{"Octuplet Crystals","Skill",6,8},
                                       Material{"Proof of Hero","Skill",7,12},
                                       Material{"Proof of Hero","Skill",8,24},
                                       Material{"Seed of Yggdrasil","Skill",8,6},
                                       Material{"Seed of Yggdrasil","Skill",9,18},
                                       Material{"Dragon Fang","Skill",9,48}
                                   },
                                   4 ) );

        servants.push_back(Servant("Nightingale",
                                   "Berserker",{
                                       Material{"Phoenix Feather",2,12},
                                       Material{"Seed of Yggdrasil",3,8},
                                       Material{"Claw of Chaos",3,4},
                                       Material{"Claw of Chaos",4,8},
                                       Material{"Homunculus Baby",4,10},
                                       Material{"Seed of Yggdrasil","Skill",5,4},
                                       Material{"Seed of Yggdrasil","Skill",6,8},
                                       Material{"Phoenix Feather","Skill",7,8},
                                       Material{"Phoenix Feather","Skill",8,16},
                                       Material{"Bloodstone Tear","Skill",8,3},
                                       Material{"Bloodstone Tear","Skill",9,9},
                                       Material{"Ghost Lantern","Skill",9,16}
                                   },
                                   5 ) );

        servants.push_back(Servant("Cu Chulainn (Alter)",
                                   "Berserker",{
                                       Material{"Evil Bone",2,12},
                                       Material{"Claw of Chaos",3,8},
                                       Material{"Heart of the Foreign God",3,4},
                                       Material{"Heart of the Foreign God",4,8},
                                       Material{"Bloodstone Tear",4,10},
                                       Material{"Claw of Chaos","Skill",5,4},
                                       Material{"Claw of Chaos","Skill",6,8},
                                       Material{"Evil Bone","Skill",7,8},
                                       Material{"Evil Bone","Skill",8,16},
                                       Material{"Serpent Jewel","Skill",8,3},
                                       Material{"Serpent Jewel","Skill",9,9},
                                       Material{"Void's Dust","Skill",9,16}
                                   },
                                   5 ) );
    }
    // Initialize Extra Servants
    {
    servants.push_back(Servant("Mashu Kyrielight",
                               "Shielder",{
                                   Material{"Proof of Hero","Skill",2,5},
                                   Material{"Dragon Fang","Skill",3,5},
                                   Material{"Seed of Yggdrasil","Skill",4,5},
                                   Material{"Octuplet Crystals","Skill",5,5},
                                   Material{"Void's Dust","Skill",6,5},
                                   Material{"Eternal Gear","Skill",7,5},
                                   Material{"Phoenix Feather","Skill",8,5},
                                   Material{"Dragon's Reverse Scale","Skill",9,5}
                               },
                               3 ) );

    servants.push_back(Servant("Jeanne d'Arc",
                               "Ruler",{
                                   Material{"Heart of the Foreign God","Skill",8,5},
                                   Material{"Heart of the Foreign God","Skill",9,15}
                               },
                               5 ) );

    servants.push_back(Servant("Amakusa Shirou",
                               "Ruler",{
                                   Material{"Heart of the Foreign God",8,5},
                                   Material{"Heart of the Foreign God",9,15}
                               },
                               5 ) );

    servants.push_back(Servant("Edmond Dantes",
                               "Avenger",{
                                   Material{"Evil Bone",1,10},
                                   Material{"Octuplet Crystals",1,10},
                                   Material{"Serpent Jewel",2,10},
                                   Material{"Forbidden Page",4,8},
                                   Material{"Void's Dust",1,10},
                                   Material{"Eternal Gear",1,10},
                                   Material{"Phoenix Feather",2,10},
                                   Material{"Heart of the Foreign God",4,8},
                                   Material{"Hero Proof","Skill",2,10},
                                   Material{"Seed of Yggdrasil","Skill",3,12},
                                   Material{"Dragon Fang","Skill",4,12},
                                   Material{"Ghost Lantern","Skill",5,12},
                                   Material{"Meteor Horseshoe","Skill",6,12},
                                   Material{"Homunculus Baby","Skill",7,15},
                                   Material{"Claw of Chaos","Skill",8,15},
                                   Material{"Dragon's Reverse Scale","Skill",9,15}
                               },
                               5 ) );
    }
}

void MainWindow::initializeNodes()
{
    // Daily Quests

        // Sunday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Saber",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Saber",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Saber",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Saber",10 ) );

        // Monday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Archer",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Archer",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Archer",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Archer",10 ) );

        // Tuesday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Lancer",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Lancer",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Lancer",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Lancer",10 ) );

        // Wednesday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Berserker",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Berserker",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Berserker",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Berserker",10 ) );

        // Thursday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Rider",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Rider",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Rider",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Rider",10 ) );

        // Friday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Caster",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Caster",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Caster",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Caster",10 ) );

        // Saturday Quests
        nodes.push_back( FarmableNode( 60,"Daily","Assassin",40 ) );
        nodes.push_back( FarmableNode( 40,"Daily","Assassin",30 ) );
        nodes.push_back( FarmableNode( 25,"Daily","Assassin",20 ) );
        nodes.push_back( FarmableNode( 10,"Daily","Assassin",10 ) );

    // Fuyuki Quests
    nodes.push_back( FarmableNode( 1,"Fuyuki","Unknown Coordinates X-A",3 ) );
    nodes.push_back( FarmableNode( 2,"Fuyuki","Unknown Coordinates X-B",3 ) );
    nodes.push_back( FarmableNode( 2,"Fuyuki","Unknown Coordinates X-C",4 ) );
    nodes.push_back( FarmableNode( 4,"Fuyuki","Unknown Coordinates X-D",5 ) );
    nodes.push_back( FarmableNode( 6,"Fuyuki","Unknown Coordinates X-E",5 ) );
    nodes.push_back( FarmableNode( 8,"Fuyuki","Unknown Coordinates X-F",6 ) );
    nodes.push_back( FarmableNode( 40,"Fuyuki","Unknown Coordinates X-G",15 ) );
    nodes.push_back( FarmableNode( 10,"Fuyuki","Mobile Coordinate No.0",7 ) );

    // Orleans Quests
    nodes.push_back( FarmableNode( 10,"Orleans","Domremy",3 ) );
    nodes.push_back( FarmableNode( 10,"Orleans","Vaucouleurs",7 ) );
    nodes.push_back( FarmableNode( 10,"Orleans","La Charite",7 ) );
    nodes.push_back( FarmableNode( 12,"Orleans","Jura",7 ) );
    nodes.push_back( FarmableNode( 12,"Orleans","Lyon",7 ) );
    nodes.push_back( FarmableNode( 12,"Orleans","Marseilles",7 ) );
    nodes.push_back( FarmableNode( 12,"Orleans","Thiers",7 ) );
    nodes.push_back( FarmableNode( 12,"Orleans","Bordeaux",7 ) );
    nodes.push_back( FarmableNode( 14,"Orleans","Orleans",8 ) );
    nodes.push_back( FarmableNode( 30,"Orleans","Paris",13 ) );

    // Septem Quests
    nodes.push_back( FarmableNode( 16,"Septem","Appia Road",9 ) );
    nodes.push_back( FarmableNode( 16,"Septem","Rome",9 ) );
    nodes.push_back( FarmableNode( 16,"Septem","Mt. Etna",9 ) );
    nodes.push_back( FarmableNode( 16,"Septem","Florence",9 ) );
    nodes.push_back( FarmableNode( 16,"Septem","Mediolanum",9 ) );
    nodes.push_back( FarmableNode( 40,"Septem","Germania",15 ) );
    nodes.push_back( FarmableNode( 16,"Septem","Massilia",9 ) );
    nodes.push_back( FarmableNode( 18,"Septem","Gaul",9 ) );
    nodes.push_back( FarmableNode( 20,"Septem","Britannia",10 ) );
    nodes.push_back( FarmableNode( 18,"Septem","Shaped Isle",9 ) );
    nodes.push_back( FarmableNode( 20,"Septem","Alliance Capital",10 ) );

    // Okeanos Quests
    nodes.push_back( FarmableNode( 28,"Okeanos","Pirate Ship",12 ) );
    nodes.push_back( FarmableNode( 30,"Okeanos","Pirate Island",13 ) );
    nodes.push_back( FarmableNode( 32,"Okeanos","King's' Abode Island",13 ) );
    nodes.push_back( FarmableNode( 32,"Okeanos","Mapped Island",13 ) );
    nodes.push_back( FarmableNode( 50,"Okeanos","Sunken Rock Seas",17 ) );
    nodes.push_back( FarmableNode( 36,"Okeanos","Two-Current Sea",14 ) );
    nodes.push_back( FarmableNode( 38,"Okeanos","Island of Wyverns",14 ) );
    nodes.push_back( FarmableNode( 54,"Okeanos","Caldera Island",17 ) );
    nodes.push_back( FarmableNode( 40,"Okeanos","Stormy Seas",15 ) );
    nodes.push_back( FarmableNode( 42,"Okeanos","Archipelago",15 ) );
    nodes.push_back( FarmableNode( 46,"Okeanos","Hidden Island",16 ) );
    nodes.push_back( FarmableNode( 60,"Okeanos","Bountiful Sea",18 ) );

    // London Quests
    nodes.push_back( FarmableNode( 42,"London","Old Street",15 ) );
    nodes.push_back( FarmableNode( 42,"London","White Chapel",15 ) );
    nodes.push_back( FarmableNode( 42,"London","City of London",15 ) );
    nodes.push_back( FarmableNode( 44,"London","Soho",16 ) );
    nodes.push_back( FarmableNode( 44,"London","Westminster",16 ) );
    nodes.push_back( FarmableNode( 44,"London","Regent Park",16 ) );
    nodes.push_back( FarmableNode( 60,"London","Clerkenwell",18 ) );
    nodes.push_back( FarmableNode( 64,"London","Southwark",18 ) );
    nodes.push_back( FarmableNode( 68,"London","Hyde Park",20 ) );

    // America Quests
    nodes.push_back( FarmableNode( 52,"America","Black Hills",17 ) );
    nodes.push_back( FarmableNode( 52,"America","Riverton",17 ) );
    nodes.push_back( FarmableNode( 52,"America","Denver",17 ) );
    nodes.push_back( FarmableNode( 54,"America","Deming",17 ) );
    nodes.push_back( FarmableNode( 60,"America","Lubbock",18 ) );
    nodes.push_back( FarmableNode( 54,"America","Dalas",17 ) );
    nodes.push_back( FarmableNode( 60,"America","Alexandria",18 ) );
    nodes.push_back( FarmableNode( 56,"America","Alcatraz",18 ) );
    nodes.push_back( FarmableNode( 56,"America","Des Moines",18 ) );
    nodes.push_back( FarmableNode( 60,"America","Kearney",18 ) );
    nodes.push_back( FarmableNode( 58,"America","Montgomery",18 ) );
    nodes.push_back( FarmableNode( 70,"America","Charlotte",20 ) );
    nodes.push_back( FarmableNode( 73,"America","Washington",20 ) );
    nodes.push_back( FarmableNode( 76,"America","Chicago",21 ) );
}

void MainWindow::initializeEvents()
{
    events.push_back( Event( "Da Vinci Event",{
                                 Material( "Proof of Hero",0 ),
                                 Material( "Dragon Fang",0 ),
                                 Material( "Eternal Gear",0 ),
                                 Material( "Claw of Chaos",0 ),
                                 Material( "Octuplet Crystals",0 ),
                                 Material( "Meteor Horseshoe",0 ),
                                 Material( "Dragon's Reverse Scale",0 ),
                                 Material( "Forbidden Page",0 ),
                                 Material( "Heart of the Foreign God",0 ),
                                 Material( "Warhorse's Immature Horn",0 ),
                                 Material( "Evil Bone",0 ),
                                 Material( "Ghost Lantern",0 ),
                                 Material( "Black Tallow",0 ),
                                 Material( "Void's Dust",0 ),
                                 Material( "Bloodstone Tear",0 ),
                                 Material( "Seed of Yggdrasil",0 ),
                                 Material( "Spirit Root",0 )
                             },{
                                 Material( "Heart of the Foreign God",20 ),
                                 Material( "Spirit Root",20 ),
                                 Material( "Bloodstone Tear",20 ),
                                 Material( "Black Tallow",20 ),
                                 Material( "Claw of Chaos",20 ),
                                 Material( "Phoenix Feather",20 ),
                                 Material( "Warhorse's Immature Horn",20 ),
                                 Material( "Ghost Lantern",20 ),
                                 Material( "Homunculus Baby",20 )
                             },{
                                 Material( "Evil Bone",4 ),
                                 Material( "Void's Dust",4),
                                 Material( "Serpent Jewel",4 ),
                                 Material( "Forbidden Page",4 ),
                                 Material( "Proof of Hero",4 ),
                                 Material( "Dragon Fang",4 ),
                                 Material( "Octuplet Crystals",2 ),
                                 Material( "Meteor Horseshoe",2 )
                             } ) );
}
#endif // INITIALIZING_H
