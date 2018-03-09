#include "servant.h"

void Servant::SetSkillLevel(int skill, int level )
{
    if( skill == 1 )
    {
        skill1 = level;
    }
    else if( skill == 2 )
    {
        skill2 = level;
    }
    else if (skill == 3 )
    {
        skill3 = level;
    }
}

void Servant::SetNPLevel( int level )
{
    npLevel = level;
}

void Servant::resetMatsUsed()
{
    for( auto & mats : MaterialList )
    {
        mats.resetMatsUsed();
    }
}

std::vector< Material > Servant::getMaterialsList()
{
    return MaterialList;
}

void Servant::determineAscensionLevel()
{
    if( level > ascension4 )
    {
        ascension = 4;
    }
    else if( level == ascension4 )
    {
        ascension = std::max( ascension, 3 );
    }
    else if( level > ascension3 )
    {
        ascension = 3;
    }
    else if( level == ascension3 )
    {
        ascension =  std::max( std::min( ascension,3 ), 2 );
    }
    else if( level > ascension2 )
    {
        ascension = 2;
    }
    else if( level == ascension2 )
    {
        ascension = std::max( std::min( ascension,2 ), 1 );
    }
    else if( level > ascension1 )
    {
        ascension = 1;
    }
    else if( level == ascension1 )
    {
        ascension = std::max( std::min( ascension,1 ), 0 );
    }
    else
    {
        ascension = 0;
    }
}
