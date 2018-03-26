
#ifndef SERVANT_H
#define SERVANT_H
#include <QString>
#include <vector>
#include <map>
#include "material.h"

enum ServantClass{
    Saber,
    Archer,
    Lancer,
    Rider,
    Caster,
    Assassin,
    Berserker,
    Shielder,
    Ruler,
    Avenger
};

class Servant
{
public:
    Servant() = default;
    Servant(std::vector<Material> List,int Rank)
        :
    MaterialList(List),
    stars(Rank)
    {
        if( stars == 2 || stars == 0 )
        {
            ascension1 += 5;
            ascension2 += 5;
            ascension3 += 5;
            ascension4 += 5;
        }
        else if( stars == 3 )
        {
            ascension1 += 10;
            ascension2 += 10;
            ascension3 += 10;
            ascension4 += 10;
        }
        else if( stars == 4 )
        {
            ascension1 += 20;
            ascension2 += 20;
            ascension3 += 20;
            ascension4 += 20;
        }
        else if( stars == 5 )
        {
            ascension1 += 30;
            ascension2 += 30;
            ascension3 += 30;
            ascension4 += 30;
        }

        goalLevel = ascension4 + 10;
        goalAscensionLevel = 4;
        goalSkill1 = 10;
        goalSkill2 = 10;
        goalSkill3 = 10;
    }

    void SetSkillLevel( qint32 skill, qint32 level );
    void SetNPLevel(qint32 level );
    void resetMatsUsed();
    void determineAscensionLevel();

    std::vector<Material> getMaterialsList();
    std::vector<Material> getMaterialsUsed();

    static QString getServantClass( ServantClass i )
    {
        switch( i )
        {
        case ServantClass::Saber:
            return QString("Saber");
        case ServantClass::Archer:
            return QString("Archer");
        case ServantClass::Lancer:
            return QString("Lancer");
        case ServantClass::Rider:
            return QString("Rider");
        case ServantClass::Caster:
            return QString("Caster");
        case ServantClass::Assassin:
            return QString("Assassin");
        case ServantClass::Berserker:
            return QString("Berserker");
        case ServantClass::Shielder:
            return QString("Shielder");
        case ServantClass::Ruler:
            return QString("Ruler");
        case ServantClass::Avenger:
            return QString("Avenger");
        default:
            return QString("None");
        }
    }

    bool operator ==( Servant & rhs )
    {
        return this->MaterialList == rhs.MaterialList;
    }

    qint32 stars = 0;
    qint32 npLevel = 1;
    qint32 level = 1;
    qint32 ascension = 0;
    qint32 hpFou = 0;
    qint32 attackFou = 0;

    std::vector<Material> MaterialList;

    int ascension1 = 20, ascension2 = 30, ascension3 = 40, ascension4 = 50;
    int skill1 = 1, skill2 = 1, skill3 = 1;

    bool tracking = true;
    bool favorite = false;

    int goalLevel, goalAscensionLevel, goalSkill1, goalSkill2, goalSkill3;

private:

};

#endif // SERVANT_H
