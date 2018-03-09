#include "profile.h"

Profile::Profile()
{

}

void Profile::addServant( Servant servant )
{
    servants.push_back(servant);
}

void Profile::removeServant( Servant removedServant )
{

}

Servant Profile::getLastServant()
{
    return servants.back();
}

QString Profile::getServantList()
{
    return servantList;
}

void Profile::updateProfile( std::vector<Servant> servantDatabase )
{
    checkMaterials( servantDatabase );
}

void Profile::checkMaterials( std::vector<Servant> servantDatabase )
{
    servantList = "";

    for( auto Database : servantDatabase )
    {
        for( auto userServants : servants )
        {
            if( userServants.name == Database.name )
            {
                servantList += userServants.name + ": Level "+ QVariant( userServants.level ).toString() + "\n";
                break;
            }
        }
    }

}
