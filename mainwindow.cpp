#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QColor>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QDataStream>
#include "initializing.h"
#include "servantdialog.h"
#include "overload.h"
#include "inputdialog.h"
#include "modifymaterials.h"
#include "goaldialog.h"
#include "singularity_chooser.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    makeSaveFolder();

    initializeServants();
    initializeNodes();
    initializeEvents();

    // Add Bronze Materials
    {
        // Add Proof of Hero to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Proof of Hero",204.7f );
            nodes[1].addMaterial( "Proof of Hero",212.7f );
            nodes[2].addMaterial( "Proof of Hero",193.3f );
            nodes[3].addMaterial( "Proof of Hero",89.2f );
            nodes[4].addMaterial( "Proof of Hero",224.3f );
            nodes[5].addMaterial( "Proof of Hero",282.6f );
            nodes[6].addMaterial( "Proof of Hero",265.0f );
            nodes[7].addMaterial( "Proof of Hero",90.1f );
            nodes[8].addMaterial( "Proof of Hero",204.6f );
            nodes[9].addMaterial( "Proof of Hero",185.0f );
            nodes[10].addMaterial( "Proof of Hero",187.3f );
            nodes[11].addMaterial( "Proof of Hero",83.6f );
            nodes[12].addMaterial( "Proof of Hero",168.3f );
            nodes[13].addMaterial( "Proof of Hero",223.3f );
            nodes[14].addMaterial( "Proof of Hero",313.7f );
            nodes[15].addMaterial( "Proof of Hero",84.3f );

            // Add to Orleans
            nodes[36].addMaterial( "Proof of Hero",39.4f );
            nodes[38].addMaterial( "Proof of Hero",130.0f );
            nodes[40].addMaterial( "Proof of Hero",33.7f );
            nodes[41].addMaterial( "Proof of Hero",23.7f );

            // Add to Septem
            nodes[46].addMaterial( "Proof of Hero",28.2f );
            nodes[47].addMaterial( "Proof of Hero",42.9f );
            nodes[49].addMaterial( "Proof of Hero",30.5f );
            nodes[50].addMaterial( "Proof of Hero",30.4f );
            nodes[52].addMaterial( "Proof of Hero",64.3f );
            nodes[53].addMaterial( "Proof of Hero",57.7f );
            nodes[56].addMaterial( "Proof of Hero",75.2f );

            // Add to Okeanos
            nodes[57].addMaterial( "Proof of Hero",20.1f );
            nodes[58].addMaterial( "Proof of Hero",24.8f );
            nodes[59].addMaterial( "Proof of Hero",37.6f );
            nodes[62].addMaterial( "Proof of Hero",56.0f );
            nodes[66].addMaterial( "Proof of Hero",84.0f );

            // Add to America
            nodes[79].addMaterial( "Proof of Hero",44.1f );
            nodes[82].addMaterial( "Proof of Hero",25.1f );
            nodes[83].addMaterial( "Proof of Hero",37.6f );
            nodes[85].addMaterial( "Proof of Hero",28.8f );
            nodes[86].addMaterial( "Proof of Hero",29.6f );
            nodes[87].addMaterial( "Proof of Hero",39.3f );
            nodes[88].addMaterial( "Proof of Hero",35.5f );
            nodes[89].addMaterial( "Proof of Hero",41.7f );
            nodes[90].addMaterial( "Proof of Hero",46.2f );
        }

        // Add Evil Bone to nodes
        {
            // Add to Dailies
            nodes[3].addMaterial( "Evil Bone",41.5f );
            nodes[6].addMaterial( "Evil Bone",67.2f );
            nodes[7].addMaterial( "Evil Bone",40.9f);
            nodes[10].addMaterial( "Evil Bone",121.2f );
            nodes[11].addMaterial( "Evil Bone",37.6f );

            // Add to Fuyuki
            nodes[28].addMaterial( "Evil Bone",39.5f );
            nodes[29].addMaterial( "Evil Bone",32.5f );
            nodes[30].addMaterial( "Evil Bone",21.9f );
            nodes[31].addMaterial( "Evil Bone",24.4f );
            nodes[32].addMaterial( "Evil Bone",25.9f );
            nodes[33].addMaterial( "Evil Bone",34.9f );
            nodes[34].addMaterial( "Evil Bone",23.4f );

            // Add to Orleans
            nodes[37].addMaterial( "Evil Bone",186.7f );
            nodes[44].addMaterial( "Evil Bone",50.5f );
            nodes[45].addMaterial( "Evil Bone",79.6f );

            // Add to Septem
            nodes[51].addMaterial( "Evil Bone",27.9f );
            nodes[55].addMaterial( "Evil Bone",43.7f );

            // Add to Okeanos
            nodes[61].addMaterial( "Evil Bone",47.0f );

            // Add to London
            nodes[75].addMaterial( "Evil Bone",47.1f );
            nodes[76].addMaterial( "Evil Bone",68.5f );
            nodes[77].addMaterial( "Evil Bone",56.0f );
        }

        // Add Dragon Fang to nodes
        {
            // Add to Dailies
            nodes[3].addMaterial( "Dragon Fang",264.8f );
            nodes[6].addMaterial( "Dragon Fang",1550.0f );
            nodes[7].addMaterial( "Dragon Fang",264.3f );
            nodes[16].addMaterial( "Dragon Fang",85.7f );
            nodes[17].addMaterial( "Dragon Fang",67.9f );
            nodes[18].addMaterial( "Dragon Fang",78.5f );
            nodes[19].addMaterial( "Dragon Fang",61.1f );
            nodes[24].addMaterial( "Dragon Fang",274.8f );
            nodes[25].addMaterial( "Dragon Fang",335.2f );
            nodes[26].addMaterial( "Dragon Fang",107.4f );
            nodes[27].addMaterial( "Dragon Fang",86.3f );

            // Add to Fuyuki
            nodes[35].addMaterial( "Dragon Fang",76.2f );

            // Add to Septem
            nodes[37].addMaterial( "Dragon Fang",70.0f );
            nodes[38].addMaterial( "Dragon Fang",56.9f );
            nodes[39].addMaterial( "Dragon Fang",94.5f );
            nodes[42].addMaterial( "Dragon Fang",42.0f );
            nodes[44].addMaterial( "Dragon Fang",78.7f );
            nodes[45].addMaterial( "Dragon Fang",90.4f );

            // Add to Okeanos
            nodes[60].addMaterial( "Dragon Fang",34.5f );
            nodes[63].addMaterial( "Dragon Fang",27.9f );
            nodes[66].addMaterial( "Dragon Fang",126.0f );

            // Add to America
            nodes[81].addMaterial( "Dragon Fang",27.1f );
        }

        // Add Void's Dust to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Void's Dust",174.2f );
            nodes[1].addMaterial( "Void's Dust",152.7f );
            nodes[2].addMaterial( "Void's Dust",126.1f );
            nodes[3].addMaterial( "Void's Dust",238.3f );
            nodes[4].addMaterial( "Void's Dust",164.6f );
            nodes[5].addMaterial( "Void's Dust",139.4f );
            nodes[6].addMaterial( "Void's Dust",142.4f );
            nodes[7].addMaterial( "Void's Dust",191.8f );
            nodes[8].addMaterial( "Void's Dust",171.0f );
            nodes[9].addMaterial( "Void's Dust",146.0f );
            nodes[10].addMaterial( "Void's Dust",147.1f );
            nodes[11].addMaterial( "Void's Dust",155.4f );
            nodes[12].addMaterial( "Void's Dust",169.8f );
            nodes[13].addMaterial( "Void's Dust",163.6f );
            nodes[14].addMaterial( "Void's Dust",107.6f );
            nodes[15].addMaterial( "Void's Dust",255.0f );
            nodes[16].addMaterial( "Void's Dust",237.4f );
            nodes[17].addMaterial( "Void's Dust",239.3f );
            nodes[18].addMaterial( "Void's Dust",135.3f );
            nodes[19].addMaterial( "Void's Dust",327.0f );
            nodes[20].addMaterial( "Void's Dust",162.4f );
            nodes[21].addMaterial( "Void's Dust",135.1f );
            nodes[22].addMaterial( "Void's Dust",92.6f );
            nodes[23].addMaterial( "Void's Dust",68.4f );
            nodes[24].addMaterial( "Void's Dust",207.1f );
            nodes[25].addMaterial( "Void's Dust",212.4f );
            nodes[26].addMaterial( "Void's Dust",107.4f );
            nodes[27].addMaterial( "Void's Dust",90.7f );

            // Add to Fuyuki
            nodes[32].addMaterial( "Void's Dust",118.4f );
            nodes[33].addMaterial( "Void's Dust",72.2f );
            nodes[35].addMaterial( "Void's Dust",92.5f );

            // Add to Orleans
            nodes[39].addMaterial( "Void's Dust",72.7f );
            nodes[40].addMaterial( "Void's Dust",122.1f );
            nodes[42].addMaterial( "Void's Dust",73.8f );
            nodes[44].addMaterial( "Void's Dust",85.6f );
            nodes[45].addMaterial( "Void's Dust",110.5f );

            // Add to Septem
            nodes[46].addMaterial( "Void's Dust",174.6f );
            nodes[52].addMaterial( "Void's Dust",48.2f );
            nodes[53].addMaterial( "Void's Dust",108.7f );
            nodes[55].addMaterial( "Void's Dust",153.0f );
            nodes[56].addMaterial( "Void's Dust",131.7f );

            // Add to Okeanos
            nodes[58].addMaterial( "Void's Dust",114.5f );
            nodes[59].addMaterial( "Void's Dust",143.0f );
            nodes[60].addMaterial( "Void's Dust",81.2f );
            nodes[66].addMaterial( "Void's Dust",66.3f );

            // Add to London
            nodes[70].addMaterial( "Void's Dust",210.0f );
            nodes[72].addMaterial( "Void's Dust",121.8f );
            nodes[73].addMaterial( "Void's Dust",100.0f );

            // Add to America
            nodes[79].addMaterial( "Dragon Fang",51.9f );
            nodes[80].addMaterial( "Dragon Fang",124.4f );
            nodes[83].addMaterial( "Dragon Fang",130.7f );
            nodes[84].addMaterial( "Dragon Fang",128.3f );
            nodes[85].addMaterial( "Dragon Fang",121.0f );
            nodes[89].addMaterial( "Dragon Fang",31.2f );
        }
    }

    // Add Silver Materials
    {
        // Add Seed of Yggdrasil to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Seed of Yggdrasil",153.5f );
            nodes[1].addMaterial( "Seed of Yggdrasil",125.2f );
            nodes[2].addMaterial( "Seed of Yggdrasil",176.5f );
            nodes[4].addMaterial( "Seed of Yggdrasil",213.1f );
            nodes[5].addMaterial( "Seed of Yggdrasil",197.3f );
            nodes[6].addMaterial( "Seed of Yggdrasil",144.5f );
            nodes[8].addMaterial( "Seed of Yggdrasil",160.6f );
            nodes[9].addMaterial( "Seed of Yggdrasil",152.0f );
            nodes[10].addMaterial( "Seed of Yggdrasil",162.6f );
            nodes[24].addMaterial( "Seed of Yggdrasil",129.5f );
            nodes[25].addMaterial( "Seed of Yggdrasil",157.7f );
            nodes[26].addMaterial( "Seed of Yggdrasil",254.7f );

            // Add to Orleans
            nodes[39].addMaterial( "Seed of Yggdrasil",157.5f );
            nodes[43].addMaterial( "Seed of Yggdrasil",69.4f );

            // Add to Septem
            nodes[54].addMaterial( "Seed of Yggdrasil",103.3f );

            // Add to Okeanos
            nodes[64].addMaterial( "Seed of Yggdrasil",104.5f );
            nodes[68].addMaterial( "Seed of Yggdrasil",58.4f );

            // Add to America
            nodes[85].addMaterial( "Seed of Yggdrasil",203.1f );
        }

        // Add Ghost Lantern to nodes
        {
            // Add to Dailies
            nodes[24].addMaterial( "Ghost Lantern",210.8f );
            nodes[25].addMaterial( "Ghost Lantern",188.2f );
            nodes[26].addMaterial( "Ghost Lantern",982.9f );
            nodes[27].addMaterial( "Ghost Lantern",345.4f );

            // Add to Septem
            nodes[48].addMaterial( "Ghost Lantern",87.1f );
            nodes[65].addMaterial( "Ghost Lantern",67.3f );
        }

        // Add Octuplet Crystals to nodes
        {
            // Add to Dailies
            nodes[12].addMaterial( "Octuplet Crystals",254.7f );
            nodes[13].addMaterial( "Octuplet Crystals",230.7f );
            nodes[14].addMaterial( "Octuplet Crystals",156.9f );
            nodes[15].addMaterial( "Octuplet Crystals",183.2f );

            // Add to Septem
            nodes[52].addMaterial( "Octuplet Crystals",131.4f );
            nodes[55].addMaterial( "Octuplet Crystals",526.7f );

            // Add to Okeanos
            nodes[61].addMaterial( "Octuplet Crystals",125.6f );
        }

        // Add Serpent Jewel to nodes
        {
            // Add to Dailies
            nodes[16].addMaterial( "Serpent Jewel",160.7f );
            nodes[17].addMaterial( "Serpent Jewel",135.8f );
            nodes[18].addMaterial( "Serpent Jewel",138.3f );
            nodes[19].addMaterial( "Serpent Jewel",122.7f );

            // Add to Okeanos
            nodes[60].addMaterial( "Serpent Jewel",106.3f );
        }

        // Add Phoenix Feather to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Phoenix Feather",384.1f );
            nodes[1].addMaterial( "Phoenix Feather",176.8f );
            nodes[4].addMaterial( "Phoenix Feather",204.0f );
            nodes[5].addMaterial( "Phoenix Feather",348.5f );
            nodes[6].addMaterial( "Phoenix Feather",1908.0 );
            nodes[8].addMaterial( "Phoenix Feather",355.6f );
            nodes[9].addMaterial( "Phoenix Feather",336.8f );

            // Add to Okeanos
            nodes[68].addMaterial( "Phoenix Feather",192.8f );
        }

        // Add Eternal Gear to nodes
        {
            // Add to Dailies
            //nodes[0].addMaterial( "Eternal Gear",189.5f );
            //nodes[1].addMaterial( "Eternal Gear",209.6f );
            //nodes[2].addMaterial( "Eternal Gear",196.1f );
            //nodes[3].addMaterial( "Eternal Gear",212.1f );
            //nodes[24].addMaterial( "Eternal Gear",5610.5 );
            //nodes[25].addMaterial( "Eternal Gear",166.3f );
            //nodes[26].addMaterial( "Eternal Gear",206.3f );
            //nodes[27].addMaterial( "Eternal Gear",106.9f );

            // Add to London
            nodes[69].addMaterial( "Eternal Gear",131.3f );
            nodes[70].addMaterial( "Eternal Gear",113.5f );
            nodes[72].addMaterial( "Eternal Gear",226.3f );
            nodes[74].addMaterial( "Eternal Gear",173.5f );
            nodes[75].addMaterial( "Eternal Gear",67.6f );

            // Add to America
            nodes[78].addMaterial( "Eternal Gear",105.6f );
            nodes[80].addMaterial( "Eternal Gear",112.5f );
            nodes[91].addMaterial( "Eternal Gear",51.4f );
        }

        // Add Forbidden Page to nodes
        {
            // Add to Dailies
            //nodes[16].addMaterial( "Forbidden Page",193.4f );
            //nodes[17].addMaterial( "Forbidden Page",193.7f );
            //nodes[18].addMaterial( "Forbidden Page",207.9f );
            //nodes[19].addMaterial( "Forbidden Page",208.7f );

            // Add to London
            nodes[74].addMaterial( "Forbidden Page",451.2f );
            nodes[77].addMaterial( "Forbidden Page",72.8f );
        }

        // Add Homunculus Baby to nodes
        {
            // Add to Dailies
            //nodes[8].addMaterial( "Homunculus Baby",186.7f );
            //nodes[9].addMaterial( "Homunculus Baby",166.5f );
            //nodes[10].addMaterial( "Homunculus Baby",228.9f );
            //nodes[11].addMaterial( "Homunculus Baby",237.6f );

            // Add to London
            nodes[71].addMaterial( "Homunculus Baby",127.1f );
            nodes[72].addMaterial( "Homunculus Baby",144.0f );
            nodes[73].addMaterial( "Homunculus Baby",123.1f );
            nodes[76].addMaterial( "Homunculus Baby",61.4f );
        }

        // Add Meteor Horseshoe to nodes
        {
            // Add to Dailies
            //nodes[4].addMaterial( "Meteor Horseshoe",198.9f );
            //nodes[5].addMaterial( "Meteor Horseshoe",224.8f );
            //nodes[6].addMaterial( "Meteor Horseshoe",194.7f );
            //nodes[7].addMaterial( "Meteor Horseshoe",197.7f );
            //nodes[16].addMaterial( "Meteor Horseshoe",193.4f );
            //nodes[17].addMaterial( "Meteor Horseshoe",198.5f );
            //nodes[18].addMaterial( "Meteor Horseshoe",180.0f );
            //nodes[19].addMaterial( "Meteor Horseshoe",197.9f );

            // Add to Okeanos
            nodes[64].addMaterial( "Meteor Horseshoe",134.8f );
        }

        // Add Seashell of Reminiscence to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Seashell of Reminiscence",190.2f );
            nodes[1].addMaterial( "Seashell of Reminiscence",195.5f );
            nodes[2].addMaterial( "Seashell of Reminiscence",185.8f );
            nodes[3].addMaterial( "Seashell of Reminiscence",211.9f );
        }
    }

    // Add Gold Materials
    {
        // Add Claw of Chaos to nodes
        {
            // Add to Dailies
            nodes[12].addMaterial( "Claw of Chaos",483.5f );
            nodes[13].addMaterial( "Claw of Chaos",335.0f );
            nodes[14].addMaterial( "Claw of Chaos",577.9f );

            // Add to Septem
            nodes[51].addMaterial( "Claw of Chaos",575.3f );

            // Add to America
            nodes[85].addMaterial( "Claw of Chaos",88.5f );
        }

        // Add Heart of the Foreign God to nodes
        {
            // Add to Dailies
            nodes[20].addMaterial( "Heart of the Foreign God",631.0f );
            nodes[21].addMaterial( "Heart of the Foreign God",788.0f );
        }

        // Add Dragon's Reverse Scale to nodes
        {
            // Add to Dailies
            nodes[16].addMaterial( "Dragon's Reverse Scale",531.8f );
            nodes[17].addMaterial( "Dragon's Reverse Scale",885.0f );
        }

        // Add Spirit Root to nodes
        {
            // Add to Dailies
            nodes[0].addMaterial( "Spirit Root",501.5f );
            nodes[1].addMaterial( "Spirit Root",813.4f );

            // Add to America
            nodes[90].addMaterial( "Spirit Root",281.7f );
        }

        // Add Warhorse's Immature Horn to nodes
        {
            // Add to Dailies
            nodes[8].addMaterial( "Warhorse's Immature Horn",310.8f );
            nodes[9].addMaterial( "Warhorse's Immature Horn",511.0f );

            // Add to America
            nodes[88].addMaterial( "Warhorse's Immature Horn",141.9f );
        }

        // Add Bloodstone Tear to nodes
        {
            // Add to Dailies
            nodes[4].addMaterial( "Bloodstone Tear",306.1f );
            nodes[5].addMaterial( "Bloodstone Tear",496.4f );

            // Add to America
            nodes[87].addMaterial( "Bloodstone Tear",176.0f );
        }

        // Add Black Tallow to nodes
        {
            // Add to Dailies
            nodes[24].addMaterial( "Black Tallow",331.2f );
            nodes[25].addMaterial( "Black Tallow",510.7f );

            // Add to America
            nodes[86].addMaterial( "Black Tallow",146.7f );
        }
    }

    ui->setupUi(this);

    setCentralWidget( ui->scrollArea );

    ui->MaterialsList->clear();
    QStringList labels;
    QStringList materials;

    ui->MaterialsList->setColumnCount( 3 );
    ui->MaterialsList->setRowCount( 32 );

    std::vector<QTableWidgetItem *> items;
    for( auto i = 1; i < 33; i++ )
    {
        ui->MaterialsList->setIconSize( QSize( 100,100 ) );
        items.push_back( new QTableWidgetItem() );
        items[ i - 1 ]->setIcon( ( QIcon( ":/FGO_Mats/" + Material::TotalMaterialList( i ) + ".png" ) ) );
        ui->MaterialsList->setVerticalHeaderItem( i - 1,items[ i - 1 ] );
    }

    labels << "Owned" << "Needed" << "Total";
    for( auto i = 1; i < 33; i++ )
    {
        materials << Material::TotalMaterialList( i );
        ui->MaterialsList->setItem( i - 1,0, new QTableWidgetItem( "0" ) );
        ui->MaterialsList->setItem( i - 1,1, new QTableWidgetItem( "0" ) );
        ui->MaterialsList->setItem( i - 1,2, new QTableWidgetItem( "0" ) );
    }

    ui->MaterialsList->setHorizontalHeaderLabels( labels );



    ui->MaterialsList->verticalHeader()->width();
    ui->MaterialsList->horizontalHeader()->width();

    for( auto i = 0; i < servants.size(); i++ )
    {
        ui->Servants->addItem( servants[i].name );
        bool alreadyThere = false;
        for( auto j = 0; j < ui->Classes->count(); j++ )
        {
            if( servants[i].servantClass == ui->Classes->itemText(j) )
            {
                alreadyThere = true;
                break;
            }
        }
        if( !alreadyThere )
        {
            ui->Classes->addItem(servants[i].servantClass);
        }
    }

    for( auto i = 0; i < servants.size(); i++ )
    {
        for( auto j = 0; j < ui->Servants->count(); j++ )
            if( servants[i].name == ui->Servants->item(j)->text() )
            {
                if( servants[i].servantClass != ui->Classes->currentText() )
                {

                    ui->Servants->setRowHidden(i,true);
                }
                else
                {
                    ui->Servants->setRowHidden(i,false);
                }
            }
    }

    ui->userServantClasses->addItem( QString( "Favorites" ) );

    for( auto allServants : servants )
    {
        bool alreadyThere = false;
        for( auto i = 0; i < ui->userServantClasses->count(); i++ )
        {
            if( allServants.servantClass == ui->userServantClasses->itemText( i ) )
            {
                alreadyThere = true;
                break;
            }
        }
        if( !alreadyThere )
        {
            ui->userServantClasses->addItem(allServants.servantClass);
        }
    }

    InputDialog StartingDialog( servants,userProfile,SaveFolder );
    StartingDialog.setModal( true );
    StartingDialog.exec();

    ui->profileName->setText( userProfile.profileName );
    ui->chooseRecommendedLevel->setValue( userProfile.recommendedLevel );

    updateResources();
}

MainWindow::~MainWindow()
{
    for( auto i = 0; i < 32; i++ )
    {
        delete ui->MaterialsList->item( i,2 );
        delete ui->MaterialsList->item( i,1 );
        delete ui->MaterialsList->item( i,0 );
    }

    for( auto i = 0; i < 32; i++ )
    {
        delete ui->MaterialsList->verticalHeaderItem( i );
    }

    delete ui;
}

void MainWindow::on_Servants_itemClicked(QListWidgetItem *item)
{
    ServantsClicked = true;
    UserServantsSelected = false;
    for( auto allServants : servants )
    {
        if( allServants.name == item->text() )
        {
            for( auto userServants : userProfile.servants )
            {
                if( allServants.name == userServants.name )
                {
                    ChangesAvailable = true;
                    break;
                }
                else
                {
                    ChangesAvailable = false;
                }
            }
            std::vector<QString> Materials;
            for( auto servantMats : allServants.MaterialList )
            {
                bool alreadyPresent = false;
                for( auto ServantMaterials : Materials )
                {
                    if( servantMats.getName() == ServantMaterials )
                    {
                        alreadyPresent = true;
                        break;
                    }
                }
                if( !alreadyPresent )
                {
                    Materials.push_back(servantMats.getName());
                }
            }
            QString DisplayText = "Servant: " + allServants.name;
            for( auto ServantMaterials : Materials )
            {
                DisplayText += "\n" + ServantMaterials;
            }
            ui->Display->setText( DisplayText );
            break;
        }
        else
        {
            ui->Display->setText( "Servant is not in the database." );
        }
    }
}

void MainWindow::on_AddButton_clicked()
{
    if( !ServantsClicked )
    {
        return;
    }

    QString currentItem = ui->Servants->currentItem()->text();

    for( auto userServants : userProfile.servants )
    {
        if( userServants.name == currentItem )
        {
            QMessageBox::information(this,"Adding Servant","You already added this Servant");
            return;
        }
    }

    futureStates.clear();
    pastStates.push_back( userProfile );

    for( auto listedServants : servants )
    {
        if( listedServants.name == currentItem )
        {
            userProfile.addServant( listedServants );
            calculateMaterials( userProfile.servants.back() );
        }
    }

    updateResources();

    ChangesAvailable = true;
}

void MainWindow::on_QuitButton_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,
                                                               "Confirm",
                                                               "Are you sure you want to quit? All unsaved progress will be lost.",
                                                               QMessageBox::Yes | QMessageBox::No );

    if( answer == QMessageBox::Yes )
    {
        QApplication::exit();
    }
    else
    {
        return;
    }
}

void MainWindow::on_RemoveButton_clicked()
{
    if( !UserServantsSelected )
    {
        return;
    }

    bool wasRemoved = false;
    QString currentItem = ui->listWidget->currentItem()->text();

    // Loop to find servant to be removed
    for( auto & userServants : userProfile.servants )
    {
        if( userServants.name == currentItem )
        {
            futureStates.clear();
            pastStates.push_back( userProfile );

            // Remove Servant from User Profile Servants
            userServants = std::move( userProfile.servants.back() );
            userProfile.servants.pop_back();

            wasRemoved = true;
            break;

        }
    }

    updateResources();

    if( wasRemoved )
    {
        UserServantsSelected = false;
        return;
    }
    else
    {
        QMessageBox::information(this,"Removing Servant","You haven't added this Servant");
        return;
    }

}

void MainWindow::on_Classes_currentTextChanged()
{
    updateResources();
}

void MainWindow::on_Save_clicked()
{
    makeSaveFolder();

    QString filter = "Servant Info File (*.svi)";
    QString file_name = QFileDialog::getSaveFileName(this,"Choose your location and filename",SaveFolder.absolutePath(),filter);
    QFile file(file_name);
    file.setPermissions(QFile::ExeGroup | QFile::ExeOwner | QFile::ExeOther | QFile::ExeUser );

    if( file_name.isEmpty() )
    {
        return;
    }
    file.open(QIODevice::WriteOnly );
    if( !file.isOpen() )
    {
        QMessageBox::warning(this,"Error","File not open:\n" + file.errorString() );
        return;
    }

    QDataStream saveData(&file);
    saveData.setVersion(QDataStream::Qt_5_9);

    saveData << (qint32)8;

    saveData << userProfile;

    saveData << userProfile.recommendedLevel;
    saveData << userProfile.singularityChosen;

    for( auto userServants : userProfile.servants )
    {
        saveData << userServants.tracking;
        saveData << userServants.favorite;
    }



    file.flush();
    file.close();
}

void MainWindow::on_Load_clicked()
{
    QString filter = "Servant Info File (*.svi)";
    QString file_name = QFileDialog::getOpenFileName(this,tr("Open File"),SaveFolder.absolutePath(),filter);
    QFile file(file_name);

    if( !file.open(QFile::ReadOnly | QFile::Text ) )
    {
        QMessageBox::warning( this,"title","Didn't open a file" );
        return;
    }

    userProfile.neededMaterialList.clear();
    userProfile.servants.clear();

    QDataStream loadData(&file);
    loadData.setVersion(QDataStream::Qt_5_9);

    qint32 versionType;

    loadData >> versionType;
    qDebug() << versionType;

    loadData >> userProfile;
    if( versionType >= (qint32)6 && versionType != (qint32)69 )
    {
        for( auto & userServants : userProfile.servants )
        {
            loadData >> userServants.tracking;
            if( versionType >= (qint32)7 && versionType != (qint32)69 )
            {
                loadData >> userServants.favorite;
            }
        }
        if( versionType >= (qint32)8 )
        {
            loadData >> userProfile.recommendedLevel;
            loadData >> userProfile.singularityChosen;
        }
    }

    ui->profileName->setText( userProfile.profileName );
    ui->chooseRecommendedLevel->setValue( userProfile.recommendedLevel );

    updateResources();


    file.close();
}

void MainWindow::on_ModifyServant_clicked()
{
    if( !UserServantsSelected )
    {
        return;
    }

    pastStates.push_back( userProfile );

    QString currentServant = ui->listWidget->currentItem()->text();
    bool haveSelected = false;
    qint32 servantIndex = 0;
    for( auto userServants : userProfile.servants )
    {
        if( currentServant == userServants.name )
        {
            haveSelected = true;
            break;
        }
        servantIndex++;
    }

    Servant & servantData = userProfile.servants[ servantIndex ];
    if( haveSelected )
    {
        ServantDialog ModifyDialog( DebugInfo,servantData );
        ModifyDialog.setModal( true );
        ModifyDialog.exec();
    }

    updateResources();

    UserServantsSelected = false;

    if( pastStates.back() == userProfile )
    {
        pastStates.pop_back();
    }
    else
    {
        futureStates.clear();
    }
}

void MainWindow::on_SetGoals_clicked()
{
    if( !UserServantsSelected )
    {
        return;
    }

    pastStates.push_back( userProfile );

    QString currentServant = ui->listWidget->currentItem()->text();
    bool haveSelected = false;
    qint32 servantIndex = 0;
    for( auto userServants : userProfile.servants )
    {
        if( currentServant == userServants.name )
        {
            haveSelected = true;
            break;
        }
        servantIndex++;
    }

    Servant & servantData = userProfile.servants[ servantIndex ];

    if( haveSelected )
    {
        goalDialog GoalDialog( servantData );
        GoalDialog.setModal( true );
        GoalDialog.exec();
    }

    calculateMaterials( userProfile.servants[ servantIndex ] );
    updateResources();

    UserServantsSelected = false;

    if( pastStates.back() == userProfile )
    {
        pastStates.pop_back();
    }
    else
    {
        futureStates.clear();
    }
}

void MainWindow::on_AdjustMatsOwned_clicked()
{
    if( !MatsAdjustable )
    {
        return;
    }

    pastStates.push_back( userProfile );

    bool ownsMats = false;
    auto i = 0;
    for( ; i < userProfile.ownedMaterialList.size(); i++ )
    {
        if( userProfile.ownedMaterialList[i].getName() == Material::TotalMaterialList( i + 1 ) )
        {
            ownsMats = true;
            break;
        }
    }

    if( !ownsMats )
    {
        userProfile.ownedMaterialList.push_back( Material{ Material::TotalMaterialList( ui->MaterialsList->currentRow() + 1 ),0,0 } );
    }

    ModifyMaterials ModifyDialog( userProfile.ownedMaterialList[ i ] );
    ModifyDialog.setModal( true );
    ModifyDialog.exec();

    updateResources();

    if( pastStates.back() == userProfile )
    {
        pastStates.pop_back();
    }
    else
    {
        futureStates.clear();
    }
}

void MainWindow::on_MaterialsList_currentItemChanged()
{
    MatsAdjustable = true;
}

void MainWindow::on_MaterialsList_cellDoubleClicked(int row)
{
    pastStates.push_back( userProfile );

    bool ownsMats = false;
    auto i = 0;
    for( ; i < userProfile.ownedMaterialList.size(); i++ )
    {
        if( userProfile.ownedMaterialList[i].getName() == Material::TotalMaterialList( row + 1 ) )
        {
            ownsMats = true;
            break;
        }
    }

    if( !ownsMats )
    {
        userProfile.ownedMaterialList.push_back( Material{ Material::TotalMaterialList( row + 1 ),0,0 } );
    }

    ModifyMaterials ModifyDialog( userProfile.ownedMaterialList[ i ] );
    ModifyDialog.setModal( true );
    ModifyDialog.exec();

    updateResources();

    if( pastStates.back() == userProfile )
    {
        pastStates.pop_back();
    }
    else
    {
        futureStates.clear();
    }
}

void MainWindow::on_listWidget_clicked()
{
    UserServantsSelected = true;
}

void MainWindow::on_listWidget_doubleClicked()
{
    pastStates.push_back( userProfile );

    QString currentServant = ui->listWidget->currentItem()->text();
    bool haveSelected = false;
    qint32 servantIndex = 0;
    for( auto userServants : userProfile.servants )
    {
        if( currentServant == userServants.name )
        {
            haveSelected = true;
            break;
        }
        servantIndex++;
    }

    Servant & servantData = userProfile.servants[ servantIndex ];
    if( haveSelected )
    {
        ServantDialog ModifyDialog( DebugInfo,servantData );
        ModifyDialog.setModal( true );
        ModifyDialog.exec();
    }

    calculateMaterials( userProfile.servants[ servantIndex ] );
    updateResources();

    UserServantsSelected = false;

    if( pastStates.back() == userProfile )
    {
        pastStates.pop_back();
    }
    else
    {
        futureStates.clear();
    }
}

void MainWindow::on_Servants_doubleClicked()
{
    futureStates.clear();
    pastStates.push_back( userProfile );

    QString currentItem = ui->Servants->currentItem()->text();

    for( auto listedServants : servants )
    {
        if( listedServants.name == currentItem )
        {
            userProfile.addServant( listedServants );
            calculateMaterials( userProfile.servants.back() );
        }
    }

    ui->Servants->currentItem()->setHidden( true );

    ui->listWidget->clear();

    for( auto userServants : userProfile.servants )
    {
        ui->listWidget->addItem( userServants.name );
    }

    userProfile.servants.shrink_to_fit();

    if( ui->userServantClasses->currentText() == "Favorites" )
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( !userServants.favorite )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }
    else
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( userServants.servantClass != ui->userServantClasses->currentText() )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }

    updateResources();

    userProfile.servants.shrink_to_fit();
}

void MainWindow::updateResources()
{
    // Reset Materials
    for( auto & neededMats : userProfile.neededMaterialList )
    {
        neededMats.resetMatsUsed();
        neededMats.resetMatsNeeded();
    }

    // Calculate Materials
    for( auto & servants : userProfile.servants )
    {
        calculateMaterials( servants );
    }

    // Set the materials for the Users Servants
    for( auto userServants : userProfile.servants )
    {
        if( userServants.tracking )
        {
            for( auto mats : userServants.getMaterialsList() )
            {
                bool needsMat = true;
                for( auto & userMats : userProfile.neededMaterialList )
                {
                    if( userMats.getName() == mats.getName() )
                    {
                        needsMat = false;

                        if( mats.ascensionLevel > 0 )
                        {
                            if( userServants.ascension < mats.ascensionLevel && userServants.goalAscensionLevel >= mats.ascensionLevel )
                            {
                                userMats.totalMatsNeeded += mats.totalMatsNeeded;
                            }
                        }
                        else
                        {
                            if( userServants.skill1 < mats.skillLevel && userServants.goalSkill1 >= mats.skillLevel )
                            {
                                userMats.totalMatsNeeded += mats.totalMatsNeeded;
                            }

                            if( userServants.skill2 < mats.skillLevel && userServants.goalSkill2 >= mats.skillLevel )
                            {
                                userMats.totalMatsNeeded += mats.totalMatsNeeded;
                            }

                            if( userServants.skill3 < mats.skillLevel && userServants.goalSkill3 >= mats.skillLevel )
                            {
                                userMats.totalMatsNeeded += mats.totalMatsNeeded;
                            }
                        }
                        break;
                    }
                }
                if( needsMat )
                {
                    userProfile.neededMaterialList.push_back( mats );
                    userProfile.neededMaterialList.back().totalMatsNeeded = 0;

                    if( mats.ascensionLevel > 0 )
                    {
                        if( userServants.ascension < mats.ascensionLevel && userServants.goalAscensionLevel > userServants.ascension )
                        {
                            userProfile.neededMaterialList.back().totalMatsNeeded += mats.totalMatsNeeded;
                        }
                    }
                    else
                    {
                        if( userServants.skill1 < mats.skillLevel && userServants.goalSkill1 > userServants.skill1 )
                        {
                            userProfile.neededMaterialList.back().totalMatsNeeded += mats.totalMatsNeeded;
                        }

                        if( userServants.skill2 < mats.skillLevel && userServants.goalSkill2 > userServants.skill2 )
                        {
                            userProfile.neededMaterialList.back().totalMatsNeeded += mats.totalMatsNeeded;
                        }

                        if( userServants.skill3 < mats.skillLevel && userServants.goalSkill3 > userServants.skill3 )
                        {
                            userProfile.neededMaterialList.back().totalMatsNeeded += mats.totalMatsNeeded;
                        }
                    }
                }
            }
        }
    }

    // List All Servants
    for( auto i = 0; i < servants.size(); i++ )
    {
        for( auto j = 0; j < ui->Servants->count(); j++ )
        {
            if( servants[i].name == ui->Servants->item(j)->text())
            {
                if( servants[i].servantClass != ui->Classes->currentText() )
                {
                    ui->Servants->item( i )->setHidden( true );
                }
                else
                {
                    ui->Servants->item( i )->setHidden( false );
                }
            }
        }
    }

    for( auto userServants : userProfile.servants )
    {
        for( auto j = 0; j < ui->Servants->count(); j++ )
        {
            if( userServants.name == ui->Servants->item(j)->text())
            {
                ui->Servants->item( j )->setHidden( true );
            }
        }
    }

    // List Current Servants
    ui->listWidget->clear();

    for( auto databaseServants : servants )
    {
        for( auto userServants : userProfile.servants )
        {
            if( databaseServants.name == userServants.name )
            {
                ui->listWidget->addItem( userServants.name );
            }
        }
    }

    userProfile.servants.shrink_to_fit();

    if( ui->userServantClasses->currentText() == "Favorites" )
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( !userServants.favorite )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }
    else
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( userServants.servantClass != ui->userServantClasses->currentText() )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }
    userProfile.updateProfile( servants );

    // Set the display for the materials
    for( auto i = 1; i < 33; i++ )
    {
        bool setValue = false;

        for( auto materials : userProfile.neededMaterialList )
        {
            if( Material::TotalMaterialList( i ) == materials.getName() )
            {
                QTableWidgetItem * needed = ui->MaterialsList->item( i - 1,1 );
                needed->setText( QString::number( std::max( materials.totalMatsNeeded - materials.totalMatsUsed,0 ) ) );

                QTableWidgetItem * total = ui->MaterialsList->item( i - 1,2 );
                total->setText( QString::number( std::max( materials.totalMatsNeeded,0 ) ) );

                setValue = true;
            }
        }

        if( !setValue )
        {
            QTableWidgetItem * needed = ui->MaterialsList->item( i - 1,1 );
            needed->setText( QString::number( 0 ) );

            QTableWidgetItem * total = ui->MaterialsList->item( i - 1,2 );
            total->setText( QString::number( 0 ) );
        }

        for( auto materials : userProfile.ownedMaterialList )
        {
            if( Material::TotalMaterialList( i ) == materials.getName() )
            {
                QTableWidgetItem * owned = ui->MaterialsList->item( i - 1,0 );
                owned->setText( QString::number( std::max( materials.totalMatsNeeded,0 ) ) );

                QTableWidgetItem * needed = ui->MaterialsList->item( i - 1,1 );
                needed->setText( QString::number( std::max( needed->text().toInt() - owned->text().toInt(),0 ) ) );
            }
        }
    }

    resources.clear();
    totalMaterials.clear();

    // Set resources and totalMaterials to reflect the materials in the list
    for( auto i = 1; i < 33; i++ )
    {
        if( ui->MaterialsList->item( i - 1,1 )->text().toInt() > 0 )
        {
            resources.push_back( Material::TotalMaterialList( i ) );
            totalMaterials.push_back( ui->MaterialsList->item( i - 1,1 )->text().toFloat() );
        }
    }

}

void MainWindow::calculateMaterials( Servant & servantModified )
{
    servantModified.resetMatsUsed();
    updateServants(servantModified);

    for( auto allServants : servants )
    {
        if( allServants.name == servantModified.name )
        {
            servantModified.MaterialList = allServants.MaterialList;
        }
    }

    for( auto & mats : servantModified.MaterialList )
    {
        if( mats.ascensionLevel > 0 )
        {
            if( servantModified.ascension >= mats.ascensionLevel )
            {
                mats.totalMatsUsed = mats.totalMatsNeeded;
            }
        }
        else
        {
            if( servantModified.skill1 >= mats.skillLevel )
            {
                mats.subtract( mats.totalMatsNeeded );
            }

            if( servantModified.skill2 >= mats.skillLevel )
            {
                mats.subtract( mats.totalMatsNeeded );
            }

            if( servantModified.skill3 >= mats.skillLevel )
            {
                mats.subtract( mats.totalMatsNeeded );
            }
        }

    }
}

void MainWindow::updateServants(Servant & updatedServant)
{
    if( updatedServant.stars == 2 || updatedServant.stars == 0 )
    {
        updatedServant.ascension1 = 25;
        updatedServant.ascension2 = 35;
        updatedServant.ascension3 = 45;
        updatedServant.ascension4 = 55;
    }
    else if( updatedServant.stars == 3 )
    {
        updatedServant.ascension1 = 30;
        updatedServant.ascension2 = 40;
        updatedServant.ascension3 = 50;
        updatedServant.ascension4 = 60;
    }
    else if( updatedServant.stars == 4 )
    {
        updatedServant.ascension1 = 40;
        updatedServant.ascension2 = 50;
        updatedServant.ascension3 = 60;
        updatedServant.ascension4 = 70;
    }
    else if( updatedServant.stars == 5 )
    {
        updatedServant.ascension1 = 50;
        updatedServant.ascension2 = 60;
        updatedServant.ascension3 = 70;
        updatedServant.ascension4 = 80;
    }

    updatedServant.determineAscensionLevel();
}

void MainWindow::makeSaveFolder()
{
    QDir tempDirPath = QDir::currentPath();

    for( tempDirPath.cdUp();!tempDirPath.mkdir( SaveFolderString ); tempDirPath.cdUp() )
    {
        if( tempDirPath.cd( SaveFolderString ) )
        {
            break;
        }
    }
    SaveFolder = tempDirPath;
}

void MainWindow::on_userServantClasses_currentTextChanged(const QString &userClass)
{
    if( userClass == QString("Favorites") )
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( !userServants.favorite )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }
    else
    {
        for( auto userServants : userProfile.servants )
        {
            for( auto i = 0; i < ui->listWidget->count(); i++ )
            {
                if( userServants.name == ui->listWidget->item(i)->text() )
                {
                    if( userServants.servantClass != userClass )
                    {
                        ui->listWidget->setRowHidden(i,true);
                    }
                    else
                    {
                        ui->listWidget->setRowHidden(i,false);
                    }
                }
            }
        }
    }
}

void MainWindow::on_chooseRecommendedLevel_valueChanged(int levelChange)
{
    futureStates.clear();
    pastStates.push_back( userProfile );

    userProfile.recommendedLevel = levelChange;

    updateResources();
}

void MainWindow::on_actionNew_Profile_triggered()
{
    QMessageBox::StandardButton answer = QMessageBox::question( this,
                                         "Warning: Potential loss of data",
                                         "All unsaved progress will be lost. Do you wish to save before continuing?",
                                         QMessageBox::Yes | QMessageBox::No );

    if( answer == QMessageBox::Yes )
    {
        on_Save_clicked();
    }
    else
    {
        answer = QMessageBox::question( this,
                                        "Continue?",
                                        "Do you wish to continue without saving?",
                                        QMessageBox::Yes | QMessageBox::No );
        if( answer != QMessageBox::Yes )
        {
            return;
        }
    }

    InputDialog StartingDialog( servants,userProfile,SaveFolder );
    StartingDialog.setModal( true );
    StartingDialog.exec();

    ui->profileName->setText( userProfile.profileName );
    ui->chooseRecommendedLevel->setValue( userProfile.recommendedLevel );

    updateResources();
}

void MainWindow::on_actionSave_Profile_triggered()
{
    on_Save_clicked();
}

void MainWindow::on_actionUndo_triggered()
{
    if( pastStates.size() < 1 )
    {
        return;
    }
    futureStates.push_back( userProfile );

    userProfile = pastStates.back();

    pastStates.pop_back();

    updateResources();
}

void MainWindow::on_actionRedo_triggered()
{
    if( futureStates.size() < 1 )
    {
        return;
    }
    pastStates.push_back( userProfile );

    userProfile = futureStates.back();

    futureStates.pop_back();

    updateResources();
}

void MainWindow::on_actionSingularity_triggered()
{
    Singularity_Chooser ModifyDialog( userProfile,nodes );
    ModifyDialog.setModal( true );
    ModifyDialog.exec();

    updateResources();
}

void MainWindow::on_CalculateFarming_clicked()
{
    std::vector< FarmableNode > farmableNodes;

    // Set farmableNodes to the series of nodes which meet the recommended level requirement
    QStringList singularityList;

    for( auto theNodes : nodes )
    {
        if( !singularityList.contains( theNodes.getSingularity() ) )
        {
            singularityList << theNodes.getSingularity();
        }
    }

    for( auto allNodes : nodes )
    {
        if( allNodes.getRecommendedLevel() <= userProfile.recommendedLevel &&
            singularityList.indexOf( userProfile.singularityChosen ) >= singularityList.indexOf( allNodes.getSingularity() ) )
        {
            farmableNodes.push_back( allNodes );
        }
    }

    EfficientFarming farmingResources( resources,totalMaterials );
    std::vector< QString > resourcesCanBeFarmed;
    std::vector< QString > resourcesCantBeFarmed;

    resourcesCantBeFarmed = farmingResources.calculateFarmingNode( farmableNodes,resourcesCanBeFarmed );

    // Set up and display Farming Instructions
    QString FarmingInstructions = "Farming Instructions: \n";

    for( auto i = 0; i < farmingResources.whatNode().size(); i++ )
    {
        if( farmingResources.whatNode().size() == 1 )
        {
            FarmingInstructions += "Just farm " + farmingResources.whatNode()[ i ].getSingularity() + ": " + farmingResources.whatNode()[ i ].getName() + " (" + farmingResources.whatNode()[ i ].getAPCost() + ") for all your resources and you'll be good.";
        }
        else if( i == 0 )
        {
            FarmingInstructions += "Farm these locations in this order for maximum efficiency:\n";
            FarmingInstructions += farmingResources.whatNode()[ i ].getSingularity() + ": " + farmingResources.whatNode()[ i ].getName() + " (" + farmingResources.whatNode()[ i ].getAPCost() + ") for " + resourcesCanBeFarmed[ i ] + "\n";
        }
        else if( i == farmingResources.whatNode().size() - 1 )
        {
            FarmingInstructions += farmingResources.whatNode()[ i ].getSingularity() + ": " + farmingResources.whatNode()[ i ].getName() + " (" + farmingResources.whatNode()[ i ].getAPCost() + ") for the remainder of your resources. \n";
        }
        else
        {
            FarmingInstructions += farmingResources.whatNode()[ i ].getSingularity() + ": " + farmingResources.whatNode()[ i ].getName() + " (" + farmingResources.whatNode()[ i ].getAPCost() + ") for " + resourcesCanBeFarmed[ i ] + "\n";
        }
    }

    if( resourcesCantBeFarmed.size() > 0 )
    {
        FarmingInstructions += "Now unfortunately, based on your current restrictions or the availability of the materials\nthere aren't any nodes we could find to farm the following resources:\n";

        for( auto cantFarm : resourcesCantBeFarmed )
        {
            FarmingInstructions += cantFarm + "\n";
        }
    }

    //Set up and display Events in the Farming Instructions
    if( events.size() > 0 )
    {
        for( auto theEvent : events )
        {
            FarmingInstructions += "\nThere is an event where you can farm some materials as well. \nThis event is: " + theEvent.getEventName() + "\nAnd you can farm: \n";

            for( auto i = 1; i < 33; i++ )
            {
                if( theEvent.isFarmable( Material::TotalMaterialList( i ) ) )
                {
                    FarmingInstructions += Material::TotalMaterialList( i ) + "\n";
                }
            }

            bool cantBeBought = true;

            for( auto i = 1; i < 33; i++ )
            {
                if( ui->MaterialsList->item( i - 1,1 )->text() > 0 )
                {
                    Material checkMaterial( Material::TotalMaterialList( i ),-1 );
                    if( checkMaterial.totalNeeded() != theEvent.isInTheShop( checkMaterial ).totalNeeded() )
                    {
                        if( cantBeBought )
                        {
                            cantBeBought = false;
                            FarmingInstructions += "\nYou will also be able to buy some materials from the shop: \n";
                        }
                        FarmingInstructions += theEvent.isInTheShop( checkMaterial ).getName() + " for " + QString::number( theEvent.isInTheShop( checkMaterial ).totalMatsNeeded ) + " in all.\n";
                    }
                }
            }

            if( theEvent.doesItHaveLottery() )
            {
                FarmingInstructions += "\nThis event also has a lottery, which can be considered the best way to farm materials. Here are the materials: \n";

                std::vector< Material > lotteryMaterials = theEvent.getLotteryMaterials();

                for( auto theMaterials : lotteryMaterials )
                {
                    FarmingInstructions += theMaterials.getName() + " for " + QString::number( theMaterials.totalNeeded() ) + " each box\n";
                }
            }
        }
    }

    ui->FarmingInstructions->setText( FarmingInstructions );
}
