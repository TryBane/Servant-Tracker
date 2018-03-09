#ifndef EFFICIENTFARMING_H
#define EFFICIENTFARMING_H
#include <vector>
#include <QString>
#include "material.h"
#include "farmablenode.h"

class EfficientFarming
{
public:
    EfficientFarming( std::vector< QString > farmingMat,std::vector< float > totalMaterials )
        :
    materials( farmingMat ),
    materialsNeeded( totalMaterials )
    {}
    std::vector< FarmableNode > whatNode()
    {
        return bestNodes;
    }
    std::vector<QString> calculateFarmingNode(std::vector<FarmableNode> nodes , std::vector<QString> & canBeFarmed);
    bool sortingNodes( std::pair< Material,float > node1,std::pair< Material,float > node2 )
    {
        return ( node1.second < node2.second );
    }
private:
    std::vector< FarmableNode > bestNodes;
    std::vector< QString > materials;
    std::vector< float > materialsNeeded;
};

#endif // EFFICIENTFARMING_H
