#ifndef INITIALIZING_H
#define INITIALIZING_H
#include "mainwindow.h"

void MainWindow::initializeServants()
{
    servants.reserve(65);

    // Initialize Saber Servants
    {
        std::unordered_map< std::string,Servant > saberServants;
        saberServants.emplace( ("Artoria Pendragon",Servant({
                                   Material("Dragon Fang",2,18),
                                   Material("Hero Proof",3,29),
                                   Material("Phoenix Feather",3,4),
                                   Material("Phoenix Feather",4,8),
                                   Material("Dragon's Reverse Scale",4,5),
                                   Material("Proof of Hero","Skill",5,15),
                                   Material("Proof of Hero","Skill",6,29),
                                   Material("Dragon Fang","Skill",7,12),
                                   Material("Dragon Fang","Skill",8,24),
                                   Material("Claw of Chaos","Skill",8,4),
                                   Material("Claw of Chaos","Skill",9,11),
                                   Material("Dragon's Reverse Scale","Skill",9,10)
                                                                      },5) ) );

        saberServants.emplace( ("Artoria Pendragon (Alter)",Servant({
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
                                   4 ) ) );

        saberServants.emplace( ("Artoria Pendragon (Lily)",Servant({
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
                                   4 ) ) );

        saberServants.emplace( ("Nero Claudius",Servant({
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
                                   4 ) ) );

        saberServants.emplace( ("Siegfried",Servant({
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
                                   4 ) ) );

        saberServants.emplace( ("Gaius Julius Caesar",Servant({
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
                                   3 ) ) );

        saberServants.emplace( ("Altera",Servant({
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
                                   5 ) ) );

        saberServants.emplace( ("Gilles de Rais",Servant({
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
                                   3 ) ) );

        saberServants.emplace( ("Chevalier d'Eon",Servant({
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
                                   4 ) ) );

        saberServants.emplace( ("Okita Souji",Servant({
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
                                   5 ) ) );

        saberServants.emplace( ("Fergus mac Roich",Servant({
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
                                   3 ) ) );

        saberServants.emplace( ("Mordred",Servant({
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
                                   5 ) ) );

        saberServants.emplace( ("Nero Claudius (Bride)",Servant({
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
                                   5 ) ) );

        saberServants.emplace( ("Ryougi Shiki (Saber)",Servant({
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
                                   5 ) ) );

        saberServants.emplace( ("Rama",Servant({
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
                                   4 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Saber ),
                             saberServants ) );
    }
    // Initialize Archer Servants
    {
        std::unordered_map< std::string,Servant > archerServants;
        archerServants.emplace( ("Emiya",Servant({
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
                                   4 ) ) );

        archerServants.emplace( ("Gilgamesh",Servant({
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
                                   5 ) ) );

        archerServants.emplace( ("Robin Hood",Servant({
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
                                   3 ) ) );

        archerServants.emplace( ("Atalanta",Servant({
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
                                   4 ) ) );

        archerServants.emplace( ("Euryale",Servant({
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
                                   3 ) ) );

        archerServants.emplace( ("Arash",Servant({
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
                                   1 ) ) );

        archerServants.emplace( ("Orion",Servant({
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
                                   5 ) ) );

        archerServants.emplace( ("David",Servant({
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
                                   3 ) ) );

        archerServants.emplace( ("Oda Nobunaga",Servant({
                                       Material{"Evil Bone","Skill",5,12},
                                       Material{"Evil Bone","Skill",6,24},
                                       Material{"Octuplet Crystals","Skill",7,4},
                                       Material{"Octuplet Crystals","Skill",8,8},
                                       Material{"Claw of Chaos","Skill",8,3},
                                       Material{"Claw of Chaos","Skill",9,9},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) ) );

        archerServants.emplace( ("Nikola Tesla",Servant({
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
                                   5 ) ) );

        archerServants.emplace( ("Arjuna",Servant({
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
                                   5 ) ) );

        archerServants.emplace( ("Gilgamesh (Child)",Servant({
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
                                   3 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Archer ),
                             archerServants ) );
    }
    // Initialize Lancer Servants
    {
        std::unordered_map< std::string,Servant > lancerServants;
        lancerServants.emplace( ("Cu Chulainn",Servant({
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
                                   3 ) ) );

        lancerServants.emplace( ("Elizabeth Bathory",Servant({
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
                                   4 ) ) );

        lancerServants.emplace( ("Musashibou Benkei",Servant({
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
                                   2 ) ) );

        lancerServants.emplace( ("Cu Chulainn (Prototype)",Servant({
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
                                   3 ) ) );

        lancerServants.emplace( ("Leonidas",Servant({
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
                                   2 ) ) );

        lancerServants.emplace( ("Romulus",Servant({
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
                                   3 ) ) );

        lancerServants.emplace( ("Hector",Servant({
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
                                   3 ) ) );

        lancerServants.emplace( ("Scathach",Servant({
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
                                   5 ) ) );

        lancerServants.emplace( ("Diarmuid Ua Duibhne",Servant({
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
                                   3 ) ) );

        lancerServants.emplace( ("Artoria Pendragon (Lancer Alter)",Servant({
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
                                   4 ) ) );

        lancerServants.emplace( ("Karna",Servant({
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
                                   5 ) ) );

        lancerServants.emplace( ("Fionn mac Cumhaill",Servant({
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
                                   4 ) ) );

        lancerServants.emplace( ("Brynhildr",Servant({
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
                                   5 ) ) );

        lancerServants.emplace( ("Li Shuwen (Lancer)",Servant({
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
                                   4 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Lancer ),
                             lancerServants ) );
    }
    // Initialize Rider Servants
    {
        std::unordered_map< std::string,Servant > riderServants;
        riderServants.emplace( ("Medusa",Servant({
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
                                   3 ) ) );

        riderServants.emplace( ("Saint George",Servant({
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
                                   2 ) ) );

        riderServants.emplace( ("Edward Teach",Servant({
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
                                   2 ) ) );

        riderServants.emplace( ("Boudica",Servant({
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
                                   3 ) ) );

        riderServants.emplace( ("Ushiwakamaru",Servant({
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
                                   3 ) ) );

        riderServants.emplace( ("Alexander",Servant({
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
                                   3 ) ) );

        riderServants.emplace( ("Marie Antoinette",Servant({
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
                                   4 ) ) );

        riderServants.emplace( ("Saint Martha",Servant({
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
                                   4 ) ) );

        riderServants.emplace( ("Francis Drake",Servant({
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
                                   5 ) ) );

        riderServants.emplace( ("Anne Bonny & Mary Read",Servant({
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
                                   4 ) ) );

        riderServants.emplace( ("Altoria Pendragon (Santa Alter)",Servant({
                                       Material{"Dragon Fang","Skill",5,10},
                                       Material{"Dragon Fang","Skill",6,20},
                                       Material{"Meteor Horseshoe","Skill",7,4},
                                       Material{"Meteor Horseshoe","Skill",8,8},
                                       Material{"Dragon's Reverse Scale","Skill",8,2},
                                       Material{"Dragon's Reverse Scale","Skill",9,6},
                                       Material{"Heart of the Foreign God","Skill",9,8}
                                   },
                                   4 ) ) );

        riderServants.emplace( ("Astolfo",Servant({
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
                                   4 ) ) );

        riderServants.emplace( ("Medb",Servant({
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
                                   5 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Rider ),
                             riderServants ) );
    }
    // Initialize Caster Servants
    {
        std::unordered_map< std::string,Servant > casterServants;
        casterServants.emplace( ("Medea",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Gilles de Rais (Caster)",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Hans Christian Andersen",Servant({
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
                                   2 ) ) );

        casterServants.emplace( ("William Shakespeare",Servant({
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
                                   2 ) ) );

        casterServants.emplace( ("Mephistopheles",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Wolfgang Amadeus Mozart",Servant({
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
                                   1 ) ) );

        casterServants.emplace( ("Zhuge Liang (Lord El-Melloi II)",Servant({
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
                                   5 ) ) );

        casterServants.emplace( ("Cu Chulainn (Caster)",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Elizabeth Bathory (Halloween)",Servant({
                                       Material{"Ghost Lantern","Skill",5,4},
                                       Material{"Ghost Lantern","Skill",6,8},
                                       Material{"Evil Bone","Skill",7,12},
                                       Material{"Evil Bone","Skill",8,24},
                                       Material{"Dragon Fang","Skill",8,12},
                                       Material{"Dragon Fang","Skill",9,36},
                                       Material{"Dragon's Reverse Scale","Skill",9,8}
                                   },
                                   4 ) ) );

        casterServants.emplace( ("Tamamo no Mae",Servant({
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
                                   5 ) ) );

        casterServants.emplace( ("Medea (Lily)",Servant({
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
                                   4 ) ) );

        casterServants.emplace( ("Nursery Rhyme",Servant({
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
                                   4 ) ) );

        casterServants.emplace( ("Paracelsus von Hohenheim",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Charles Babbage",Servant({
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
                                   3 ) ) );

        casterServants.emplace( ("Helena Blavatsky",Servant({
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
                                   4 ) ) );

        casterServants.emplace( ("Thomas Edison",Servant({
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
                                   4 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Caster ),
                             casterServants ) );
    }
    // Initialize Assassin Servants
    {
        std::unordered_map< std::string,Servant > assassinServants;
        assassinServants.emplace( ("Sasaki Kojiro",Servant({
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
                                   1 ) ) );

        assassinServants.emplace( ("Cursed Arm Hassan",Servant({
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
                                   2 ) ) );

        assassinServants.emplace( ("Stheno",Servant({
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
                                   4 ) ) );

        assassinServants.emplace( ("Jing Ke",Servant({
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
                                   3 ) ) );

        assassinServants.emplace( ("Chares-Henri Sanson",Servant({
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
                                   2 ) ) );

        assassinServants.emplace( ("The Phantom of the Opera",Servant({
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
                                   2 ) ) );

        assassinServants.emplace( ("Mata Hari",Servant({
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
                                   1 ) ) );

        assassinServants.emplace( ("Carmilla",Servant({
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
                                   4 ) ) );

        assassinServants.emplace( ("Jack the Ripper",Servant({
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
                                   5 ) ) );

        assassinServants.emplace( ("Henry Jekyll & Hyde",Servant({
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
                                   3 ) ) );

        assassinServants.emplace( ("Mysterious Heroine X",Servant({
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
                                   5 ) ) );

        assassinServants.emplace( ("Ryougi Shiki",Servant({
                                       Material{"Evil Bone","Skill",5,12},
                                       Material{"Evil Bone","Skill",6,24},
                                       Material{"Claw of Chaos","Skill",7,3},
                                       Material{"Claw of Chaos","Skill",8,5},
                                       Material{"Eternal Gear","Skill",8,5},
                                       Material{"Eternal Gear","Skill",9,15},
                                       Material{"Homunculus Baby","Skill",9,20}
                                   },
                                   4 ) ) );

        assassinServants.emplace( ("Emiya (Assassin)",Servant({
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
                                   4 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Assassin ),
                             assassinServants ) );
    }
    // Initialize Berserker Servants
    {
        std::unordered_map< std::string,Servant > berserkerServants;
        berserkerServants.emplace( ("Heracles",Servant({
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
                                   4 ) ) );

        berserkerServants.emplace( ("Lancelot",Servant({
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
                                   4 ) ) );

        berserkerServants.emplace( ("Lu Bu",Servant({
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
                                   3 ) ) );

        berserkerServants.emplace( ("Spartacus",Servant({
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
                                   1 ) ) );

        berserkerServants.emplace( ("Sakata Kintoki",Servant({
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
                                   5 ) ) );

        berserkerServants.emplace( ("Vlad III",Servant({
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
                                   5 ) ) );

        berserkerServants.emplace( ("Asterios",Servant({
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
                                   1 ) ) );

        berserkerServants.emplace( ("Caligula",Servant({
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
                                   2 ) ) );

        berserkerServants.emplace( ("Darius III",Servant({
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
                                   3 ) ) );

        berserkerServants.emplace( ("Kiyohime",Servant({
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
                                   3 ) ) );

        berserkerServants.emplace( ("Eric Bloodaxe",Servant({
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
                                   2 ) ) );

        berserkerServants.emplace( ("Tamamo Cat",Servant({
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
                                   4 ) ) );

        berserkerServants.emplace( ("Frankenstein",Servant({
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
                                   4 ) ) );

        berserkerServants.emplace( ("Beowulf",Servant({
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
                                   4 ) ) );

        berserkerServants.emplace( ("Nightingale",Servant({
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
                                   5 ) ) );

        berserkerServants.emplace( ("Cu Chulainn (Alter)",Servant({
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
                                   5 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Berserker ),
                             berserkerServants ) );
    }
    // Initialize Extra Servants
    {
        std::unordered_map< std::string,Servant > shielderServants;
        shielderServants.emplace( ("Mashu Kyrielight",Servant({
                                       Material{"Proof of Hero","Skill",2,5},
                                       Material{"Dragon Fang","Skill",3,5},
                                       Material{"Seed of Yggdrasil","Skill",4,5},
                                       Material{"Octuplet Crystals","Skill",5,5},
                                       Material{"Void's Dust","Skill",6,5},
                                       Material{"Eternal Gear","Skill",7,5},
                                       Material{"Phoenix Feather","Skill",8,5},
                                       Material{"Dragon's Reverse Scale","Skill",9,5}
                                   },
                                   3 ) ) );

        std::unordered_map< std::string,Servant > rulerServants;
        rulerServants.emplace( ("Jeanne d'Arc",Servant({
                                       Material{"Heart of the Foreign God","Skill",8,5},
                                       Material{"Heart of the Foreign God","Skill",9,15}
                                   },
                                   5 ) ) );

        rulerServants.emplace( ("Amakusa Shirou",Servant({
                                       Material{"Heart of the Foreign God",8,5},
                                       Material{"Heart of the Foreign God",9,15}
                                   },
                                   5 ) ) );

        std::unordered_map< std::string,Servant > avengerServants;
        avengerServants.emplace( ("Edmond Dantes",Servant({
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
                                   5 ) ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Shielder ),
                             shielderServants ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Ruler ),
                             rulerServants ) );

        theServants.emplace( ( Servant::getServantClass( ServantClass::Avenger ),
                             avengerServants ) );
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
