#include "singularity_chooser.h"
#include "ui_singularity_chooser.h"

Singularity_Chooser::Singularity_Chooser( Profile &in_profile, std::vector<FarmableNode> nodes, QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::Singularity_Chooser),
    tempProfile( in_profile ),
    allNodes( nodes )
{
    ui->setupUi(this);

    for( auto theNodes : allNodes )
    {
        bool alreadyThere = false;
        for( auto i = 0; i < ui->singularityList->count(); i++ )
        {
            if( theNodes.getSingularity() == ui->singularityList->itemText( i ) )
            {
                alreadyThere = true;
            }
        }

        if( !alreadyThere && theNodes.getSingularity() != "Daily" )
        {
            ui->singularityList->addItem( theNodes.getSingularity() );
        }
    }

    for( auto i = 0; i < ui->singularityList->count(); i++ )
    {
        if( ui->singularityList->itemText( i ) == tempProfile.singularityChosen )
        {
            ui->singularityList->setCurrentIndex( i );
            break;
        }
    }

    QPixmap SingularityImage( ":/Singularity_Images/" + ui->singularityList->currentText() + "_Ascension_Item_Map.png" );
    ui->SingularityPicture->setScaledContents( true );
    ui->SingularityPicture->setPixmap( SingularityImage );
}

Singularity_Chooser::~Singularity_Chooser()
{
    delete ui;
}

void Singularity_Chooser::on_singularityList_currentIndexChanged( const QString &string )
{
    QPixmap SingularityImage( ":/Singularity_Images/" + string + "_Ascension_Item_Map.png" );
    ui->SingularityPicture->setPixmap( SingularityImage );
}

void Singularity_Chooser::on_confirm_clicked()
{
    tempProfile.singularityChosen = ui->singularityList->currentText();

    Singularity_Chooser::done( 0 );
}

void Singularity_Chooser::on_discard_clicked()
{
    Singularity_Chooser::done( 0 );
}
