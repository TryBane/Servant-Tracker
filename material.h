#ifndef MATERIAL_H
#define MATERIAL_H
#include "QString"

enum MaterialName{
    Bone,
    Dust,
    Proof,
    Fang,
    Lantern,
    Seed,
    Crystals,
    Feather,
    Jewel,
    Baby,
    Horseshoe,
    Page,
    Gear,
    Scale,
    Claw,
    Heart,
    Tear,
    Tallow,
    Root,
    Horn,
    Chains,
    Medal,
    Lamp,
    Scarab,
    Seashell,
    Stinger,
    Lanugo,
    Cholecyst,
    Fluid,
    Wine,
    Kotan,
    Stake
};

class Material
{
public:
    Material() = default;
    Material( QString name, qint32 numberNeeded )
        :
    name( name ),
    totalMatsNeeded( numberNeeded )
    {}

    Material( QString name, QString skill, qint32 level, qint32 numberNeeded )
        :
    name( name ),
    skillLevel( level ),
    totalMatsNeeded( numberNeeded )
    {}

    Material( QString name, qint32 ascensionLevel, qint32 numberNeeded )
        :
    name( name ),
    totalMatsNeeded( numberNeeded ),
    ascensionLevel( ascensionLevel )
    {}

    qint32 totalNeeded();
    void add( qint32 adjustment );
    void subtract( qint32 adjustment );
    void resetMatsUsed();
    void resetMatsNeeded();
    QString getName();
    int getTotalMatsUsed();

    static QString TotalMaterialList( MaterialName slot )
    {
        switch( slot )
        {
        case MaterialName::Bone:
            return "Evil Bone";
        case MaterialName::Dust:
            return "Void's Dust";
        case MaterialName::Proof:
            return "Proof of Hero";
        case MaterialName::Fang:
            return "Dragon Fang";
        case MaterialName::Lantern:
            return "Ghost Lantern";
        case MaterialName::Seed:
            return "Seed of Yggdrasil";
        case MaterialName::Crystals:
            return "Octuplet Crystals";
        case MaterialName::Feather:
            return "Phoenix Feather";
        case MaterialName::Jewel:
            return "Serpent Jewel";
        case MaterialName::Baby:
            return "Homunculus Baby";
        case MaterialName::Horseshoe:
            return "Meteor Horseshoe";
        case MaterialName::Page:
            return "Forbidden Page";
        case MaterialName::Gear:
            return "Eternal Gear";
        case MaterialName::Scale:
            return "Dragon's Reverse Scale";
        case MaterialName::Claw:
            return "Claw of Chaos";
        case MaterialName::Heart:
            return "Heart of the Foreign God";
        case MaterialName::Tear:
            return "Bloodstone Tear";
        case MaterialName::Tallow:
            return "Black Tallow";
        case MaterialName::Root:
            return "Spirit Root";
        case MaterialName::Horn:
            return "Warhorse's Immature Horn";
        case MaterialName::Chains:
            return "Chains of the Fool";
        case MaterialName::Medal:
            return "Medal of Great Knight";
        case MaterialName::Lamp:
            return "Lamp of Demon Sealing";
        case MaterialName::Scarab:
            return "Scarab of Wisdom";
        case MaterialName::Seashell:
            return "Seashell of Reminiscence";
        case MaterialName::Stinger:
            return "Stinger of Certain Death";
        case MaterialName::Lanugo:
            return "Primordial Lanugo";
        case MaterialName::Cholecyst:
            return "Cursed Beast Cholecyst";
        case MaterialName::Fluid:
            return "Magical Cerebrospinal Fluid";
        case MaterialName::Wine:
            return "Bizarre Godly Wine";
        case MaterialName::Kotan:
            return "Kotan Magatama";
        case MaterialName::Stake:
            return "Night-Weeping Iron Stake";
        default:
            return "Done";
        }
    }

    bool operator ==( Material & rhs )
    {
        return (
                    this->name == rhs.name &&
                    this->ascensionLevel == rhs.ascensionLevel &&
                    this->totalMatsNeeded == rhs.totalMatsNeeded &&
                    this->totalMatsUsed == rhs.totalMatsUsed
                    );
    }
public:
    static const qint32 TotalAmountOfMaterials = 32;

public:
    QString name;
    qint32 ascensionLevel = -1;
    qint32 skillLevel = -1;
    qint32 totalMatsNeeded = 0, totalMatsUsed = 0;
};
#endif // MATERIAL_H
