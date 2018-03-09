#ifndef MATERIAL_H
#define MATERIAL_H
#include "QString"


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

    static QString TotalMaterialList( qint32 slot )
    {
        switch( slot )
        {
        case 1:
            return "Evil Bone";
        case 2:
            return "Void's Dust";
        case 3:
            return "Proof of Hero";
        case 4:
            return "Dragon Fang";
        case 5:
            return "Ghost Lantern";
        case 6:
            return "Seed of Yggdrasil";
        case 7:
            return "Octuplet Crystals";
        case 8:
            return "Phoenix Feather";
        case 9:
            return "Serpent Jewel";
        case 10:
            return "Homunculus Baby";
        case 11:
            return "Meteor Horseshoe";
        case 12:
            return "Forbidden Page";
        case 13:
            return "Eternal Gear";
        case 14:
            return "Dragon's Reverse Scale";
        case 15:
            return "Claw of Chaos";
        case 16:
            return "Heart of the Foreign God";
        case 17:
            return "Bloodstone Tear";
        case 18:
            return "Black Tallow";
        case 19:
            return "Spirit Root";
        case 20:
            return "Warhorse's Immature Horn";
        case 21:
            return "Chains of the Fool";
        case 22:
            return "Medal of Great Knight";
        case 23:
            return "Lamp of Demon Sealing";
        case 24:
            return "Scarab of Wisdom";
        case 25:
            return "Seashell of Reminiscence";
        case 26:
            return "Stinger of Certain Death";
        case 27:
            return "Primordial Lanugo";
        case 28:
            return "Cursed Beast Cholecyst";
        case 29:
            return "Magical Cerebrospinal Fluid";
        case 30:
            return "Bizarre Godly Wine";
        case 31:
            return "Kotan Magatama";
        case 32:
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
