#ifndef FARMABLENODE_H
#define FARMABLENODE_H
#include <vector>
#include <QString>
#include "material.h"

class FarmableNode{
public:
    FarmableNode( QString singularityName = "None", QString name = "Not Farmable",int cost = 10000 )
        :
    FarmableNode( 0,singularityName,name,cost )
    {}
    FarmableNode( int level,QString singularityName = "None", QString name = "Not Farmable",int cost = 10000 )
        :
    singularity( singularityName ),
    nameOfNode( name ),
    APCost( cost ),
    recommendedLevel( level )
    {}
    QString getName();
    QString getSingularity();
    int getRecommendedLevel();
    int getAPCost();
    void addMaterial( QString, float );
    bool checkForMaterial( QString );
    std::vector< std::pair< QString,float > > getfarmableMaterials();
    int convertSingularityToInt( QString checkSingularity );
private:
    QString nameOfNode;
    QString singularity;
    int APCost;
    int recommendedLevel;
    std::vector< std::pair< QString,float > > farmableMaterials;
};

#endif // FARMABLENODE_H
