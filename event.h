#ifndef EVENT_H
#define EVENT_H
#include <QString>
#include <vector>
#include "material.h"

class Event
{
public:
    Event( QString theName,std::vector< Material > theFarmableMaterials,std::vector< Material > theShopMaterials )
        :
    eventName( theName ),
    farmableMaterials( theFarmableMaterials ),
    shopMaterials( theShopMaterials )
    {}
    Event( QString theName,std::vector< Material > theFarmableMaterials,std::vector< Material > theShopMaterials,std::vector< Material > theLotteryMaterials )
        :
    eventName( theName ),
    farmableMaterials( theFarmableMaterials ),
    shopMaterials( theShopMaterials ),
    lotteryMaterials( theLotteryMaterials ),
    hasLottery( true )
    {}
    QString getEventName();
    bool isFarmable(QString theMaterialToCheck );
    bool doesItHaveLottery();
    Material isInTheShop( Material theMaterialToCheck );
    std::vector< Material > getLotteryMaterials();
private:
    QString eventName;
    std::vector< Material > farmableMaterials;
    std::vector< Material > shopMaterials;
    std::vector< Material > lotteryMaterials;
    bool hasLottery = false;
};

#endif // EVENT_H
