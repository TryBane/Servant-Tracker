#include "event.h"

QString Event::getEventName()
{
    return eventName;
}

bool Event::isFarmable(QString theMaterialToCheck)
{
    for( auto checking : farmableMaterials )
    {
        if( theMaterialToCheck == checking.getName() )
        {
            return true;
        }
    }
    return false;
}

bool Event::doesItHaveLottery()
{
    return hasLottery;
}

Material Event::isInTheShop(Material theMaterialToCheck)
{
    for( auto checking : shopMaterials )
    {
        if( theMaterialToCheck.getName() == checking.getName() )
        {
            return checking;
        }
    }
    return theMaterialToCheck;
}

std::vector<Material> Event::getLotteryMaterials()
{
    return lotteryMaterials;
}
