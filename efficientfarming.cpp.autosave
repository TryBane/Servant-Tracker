#include "efficientfarming.h"
#include <QDebug>
#include <QRegularExpression>

std::vector< QString > EfficientFarming::calculateFarmingNode( std::vector<FarmableNode> nodes, std::vector<QString> & canBeFarmed )
{
    std::vector< std::vector< FarmableNode > > materialNodes;
    bestNodes.clear();

    std::vector< QString > cantFarm;

    // Get nodes that contain needed materials
    for( auto thisMaterial : materials )
    {
        std::vector< FarmableNode > thisMaterialNodes;

        for( auto allNodes : nodes )
        {
            if( allNodes.checkForMaterial( thisMaterial ) )
            {
                thisMaterialNodes.push_back( allNodes );
            }
        }

        materialNodes.push_back( thisMaterialNodes );
    }

    std::vector< int > indices( materials.size(),-1 );
    std::vector< int > standinIndices( materials.size(),-1 );
    for( auto i = 0; i < standinIndices.size(); i++ )
    {
        standinIndices[ i ] = i;
    }

    // Get the order to prioritize the materials needed
    for( auto i = 0; i < indices.size(); i++ )
    {
        int lowestIndex = 0;
        int k = 0;

        for( auto j = 0; j < materialNodes.size(); j++ )
        {
            bool indexZeroIsPresent = false;
            for( auto l = 0; l < standinIndices.size(); l++ )
            {

                if( standinIndices[ l ] == 0 )
                {
                    indexZeroIsPresent = true;
                }
                if( lowestIndex == 0 && !indexZeroIsPresent )
                {
                    lowestIndex = standinIndices[ l ];
                }

                if( standinIndices[ l ] == j )
                {
                    if( materialNodes[ j ].size() < materialNodes[ lowestIndex ].size() )
                    {
                        lowestIndex = j;
                        k = l;
                    }
                }
            }
        }

        indices[ i ] = lowestIndex;
        standinIndices[ k ] = std::move( standinIndices.back() );
        standinIndices.pop_back();
    }

    std::vector< float > farmed( materials.size(),0 );

    // Calculate the Order to farm the nodes
    for( auto index : indices )
    {
        std::vector< float > needed( materials.size(),0 );

        for( auto i = 0; i < farmed.size(); i++ )
        {
            needed[ i ] = materialsNeeded[ i ] - farmed[ i ];
        }

        FarmableNode oneOfBestNodes;
        float drops = 10000;

        for( auto farmingNodes : materialNodes[ index ] )
        {
            for( auto i = 0; i < farmingNodes.getfarmableMaterials().size(); i++ )
            {
                if( farmingNodes.getfarmableMaterials()[i].first == materials[ index ] )
                {
                    if( drops > farmingNodes.getfarmableMaterials()[ i ].second )
                    {
                        drops = farmingNodes.getfarmableMaterials()[ i ].second;
                        oneOfBestNodes = farmingNodes;
                    }
                }
            }
        }

        drops = ( needed[ index ] * drops );
        farmed[ index ] += needed[ index ];

        for( auto checking : indices )
        {
            if( checking == index )
            {
                continue;
            }

            if( oneOfBestNodes.checkForMaterial( materials[ checking ] ) )
            {
                for( auto allMats : oneOfBestNodes.getfarmableMaterials() )
                {
                    if( allMats.first == materials[ checking ] && allMats.first != materials[ index ] )
                    {
                        farmed[ checking ] += ( drops / allMats.second );
                        break;
                    }
                }
            }
        }

        if( oneOfBestNodes.getAPCost() < 9999 )
        {
            bestNodes.push_back( oneOfBestNodes );
            canBeFarmed.push_back( materials[index] );
        }
        else
        {
            cantFarm.push_back( materials[ index ] );
        }
    }

    return cantFarm;
}
