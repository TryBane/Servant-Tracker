#include "efficientfarming.h"
#include <QDebug>
#include <QRegularExpression>

std::vector< QString > EfficientFarming::calculateFarmingNode( std::vector< FarmableNode > nodes, std::vector< QString > & canBeFarmed )
{
    std::vector< float > materialsFarmed( materials.size(),0.0f );
    std::vector<FarmableNode> farmedNodes;
    int bestApCost = 99999999;
    if( farmingNodes( nodes,materials,farmedNodes,materialsFarmed,0,bestApCost ) )
    {
        std::vector< QString > none( 1,"None" );
        return none;
    }

    // Previous farming algorithm below

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

bool EfficientFarming::farmingNodes( std::vector< FarmableNode > theNodes,std::vector< QString > passingMaterials,std::vector< FarmableNode > farmedNodes,std::vector< float > farmedMaterials,int apCost,int & bestApCost )
{
    if( theNodes.size() > 0 )
    {
        auto theMaterials = passingMaterials;
        auto previousNodes = theNodes;
        int i = 0;
        for( auto each : theNodes )
        {
            for( auto j = 0; j < previousNodes.size(); j++ )
            {
                if( previousNodes[ j ].getName() == each.getName() )
                {
                    previousNodes[ j ] = std::move( previousNodes.back() );
                    previousNodes.pop_back();
                    break;
                }
            }
            // Create a temporary variables for all the passed values
            auto passingNodes = previousNodes;
            passingMaterials = theMaterials;
            auto passingFarmedNodes = farmedNodes;
            auto passingFarmedMaterials = farmedMaterials;
            auto passingApCost = apCost;

            // Ensure this node contains a material needed
            {
                bool hasAMaterial = false;
                for( auto thisMaterial : theMaterials )
                {
                    if( each.checkForMaterial( thisMaterial ) )
                    {
                        hasAMaterial = true;
                        break;
                    }
                }
                if( !hasAMaterial )
                {
                    i++;
                    continue;
                }
            }

            passingFarmedNodes.push_back( each );
            // Begin farming this node. Add for APCost for each time farmed, then recur to check if following nodes can be farmed for better efficiency
            bool allFarmed;


            // Find the cost to completely farm each material needed within the node
            std::vector< int > materialFarmingCosts;

            for( auto nodesMaterials : each.getfarmableMaterials() )
            {
                for( auto j = 0; j < passingMaterials.size(); j++ )
                {
                    if( passingMaterials[ j ] == nodesMaterials.first )
                    {
                        for( auto k = 0; k < materials.size(); k++ )
                        {
                            if( materials[ k ] == passingMaterials[ j ] )
                            {
                                materialFarmingCosts.push_back( ( materialsNeeded[ k ] - passingFarmedMaterials[ k ] ) * nodesMaterials.second );
                                if( materialFarmingCosts.back() < 0 )
                                {
                                    bool tragedy = false;
                                }
                            }
                        }
                    }
                }
            }

            for( auto j = 0; j < theMaterials.size(); j++ )
            {
                bool changed = false;
                int previousLowestCost = 999999999;
                int indexOfLowest = 0;

                for( auto k = 0; k < materialFarmingCosts.size(); k++ )
                {
                    if( previousLowestCost > materialFarmingCosts[ k ] )
                    {
                        changed = true;
                        previousLowestCost = materialFarmingCosts[ k ];
                        indexOfLowest = k;
                    }
                }

                if( changed )
                {
                    const int apUsed = ( static_cast<int>( materialFarmingCosts[ indexOfLowest ] / each.getAPCost() ) + 1 ) * each.getAPCost();
                    materialFarmingCosts[ indexOfLowest ] = std::move( materialFarmingCosts.back() );
                    materialFarmingCosts.pop_back();

                    for( auto theNodeMaterials : each.getfarmableMaterials() )
                    {
                        for( auto k = 0; k < passingMaterials.size(); k++ )
                        {
                            if( passingMaterials[ k ] == theNodeMaterials.first )
                            {
                                passingFarmedMaterials[ k ] = farmedMaterials[ k ] + static_cast<int>( apUsed / theNodeMaterials.second );
                            }
                        }
                    }

                    for( auto k = 0; k < materialsNeeded.size(); k++ )
                    {
                        for( auto & theMaterial : passingMaterials )
                        {
                            if( materials[ k ] == theMaterial )
                            {
                                if( passingFarmedMaterials[ k ] >= materialsNeeded[ k ] )
                                {
                                    std::swap( theMaterial,passingMaterials.back() );
                                    passingMaterials.pop_back();
                                    break;
                                }
                            }
                        }
                    }

                    if( passingMaterials.size() > 0 )
                    {
                        farmingNodes( passingNodes,passingMaterials,passingFarmedNodes,passingFarmedMaterials,( apCost + apUsed ),bestApCost );
                    }
                    else
                    {
                        if( ( apCost + apUsed ) < bestApCost )
                        {
                            bestNodes = passingFarmedNodes;
                            bestApCost = apCost + apUsed;
                        }
                    }
                }

            }

            i++;

            //do
            //{
            //    allFarmed = false;
            //    passingApCost += each.getAPCost();
            //
            //    // Start process of adding farmed materials to vector
            //    // Loop through all materials needed
            //    for( auto j = 0; j < materials.size(); j++ )
            //    {
            //
            //        // Check if the node contains the material needed
            //        if( each.checkForMaterial( materials[ j ] ) )
            //        {
            //
            //            // Get each material for the node
            //            for( auto theNodesMaterials : each.getfarmableMaterials() )
            //            {
            //
            //                // Check if this material is the one sought after
            //                if( theNodesMaterials.first == materials[ j ] )
            //                {
            //
            //                    // Add the farmed material
            //                    passingFarmedMaterials[ j ] += theNodesMaterials.second;
            //
            //                    // If this material has finished being farmed, remove it from the materials passed on
            //                    if( passingFarmedMaterials[ j ] > materialsNeeded[ j ] )
            //                    {
            //                        for( auto removeThisMaterial : passingMaterials )
            //                        {
            //                            if( removeThisMaterial == materials[ j ] )
            //                            {
            //                                std::swap( removeThisMaterial,passingMaterials.back() );
            //                                passingMaterials.pop_back();
            //                                break;
            //                            }
            //                        }
            //                    }
            //                }
            //            }
            //        }
            //    }
            //
            //    for( auto restOfMaterials : passingMaterials )
            //    {
            //        if( each.checkForMaterial( restOfMaterials ) )
            //        {
            //            allFarmed = false;
            //            break;
            //        }
            //    }
            //
            //}while( farmingNodes( passingNodes,passingMaterials,passingFarmedNodes,passingFarmedMaterials,passingApCost,bestApCost ) && !allFarmed );

            // Compare previous best ap cost to current ap cost (after all items are farmed) and then set it if true
        }
        // Return if all items are done being farmed
        return passingMaterials.size() > 0;
    }

    return false;
}
