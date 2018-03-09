#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <QVariant>
#include <vector>
#include "servant.h"
#include "efficientfarming.h"

class Profile
{
public:
    Profile();
    void addServant( Servant newServant );
    void removeServant( Servant removedServant );
    Servant getLastServant();
    QString getServantList();
    void updateProfile( std::vector<Servant> servantDatabase );
    bool operator ==( Profile & rhs )
    {
        if(     this->servants.size() != rhs.servants.size() ||
                this->ownedMaterialList.size() != rhs.ownedMaterialList.size() ||
                this->neededMaterialList.size() != rhs.neededMaterialList.size() ||
                this->setMatGoals.size() != rhs.neededMaterialList.size() )
        {
            return false;
        }
        for( auto theseServants : this->servants )
        {
            for( auto thoseServants : rhs.servants )
            {
                if( theseServants.name == thoseServants.name )
                {
                    if( !( theseServants == thoseServants ) )
                    {
                            return false;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

        for( auto theseMaterials : this->ownedMaterialList )
        {
            for( auto thoseMaterials : rhs.ownedMaterialList )
            {
                if( theseMaterials.getName() == thoseMaterials.getName() )
                {
                    if( !( theseMaterials == thoseMaterials ) )
                    {
                        return false;
                    }
                }
            }
        }

        for( auto theseMaterials : this->neededMaterialList )
        {
            for( auto thoseMaterials : rhs.neededMaterialList )
            {
                if( theseMaterials.getName() == thoseMaterials.getName() )
                {
                    if( !( theseMaterials == thoseMaterials ) )
                    {
                        return false;
                    }
                }
            }
        }

        for( auto theseMatGoals : this->setMatGoals )
        {
            for( auto thoseMatGoals : rhs.setMatGoals )
            {
                if( theseMatGoals.getName() == thoseMatGoals.getName() )
                {
                    if( !( theseMatGoals == thoseMatGoals ) )
                    {
                        return false;
                    }
                }
            }
        }

        return (this->servantList == rhs.servantList &&
                this->recommendedLevel == rhs.recommendedLevel
               );
    }
private:
    void checkMaterials(std::vector<Servant> servantDatabase);
public:
    QString servantList;
    QString profileName;
    QString singularityChosen = "Fuyuki";
    std::vector<Servant> servants;
    std::vector<Material> ownedMaterialList;
    std::vector<Material> neededMaterialList;
    std::vector<Material> setMatGoals;
    int recommendedLevel = 100;
};

#endif // PROFILE_H
