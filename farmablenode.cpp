#include "farmablenode.h"

QString FarmableNode::getName()
{
    return nameOfNode;
}

QString FarmableNode::getSingularity()
{
    return singularity;
}

int FarmableNode::getRecommendedLevel()
{
    return recommendedLevel;
}

int FarmableNode::getAPCost()
{
    return APCost;
}

void FarmableNode::addMaterial(QString material, float ap)
{
    farmableMaterials.push_back( { material,ap } );
}

bool FarmableNode::checkForMaterial(QString material )
{
    for( auto materials : farmableMaterials )
    {
        if( material == materials.first )
        {
            return true;
        }
    }

    return false;
}

std::vector<std::pair<QString, float> > FarmableNode::getfarmableMaterials()
{
    return farmableMaterials;
}
