#include "goaldialog.h"
#include "ui_goaldialog.h"

goalDialog::goalDialog(Servant &servant, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::goalDialog),
    goalServant( servant )
{
    ui->setupUi(this);

    ui->servantName->setText( goalServant.name );
    ui->goalLevel->setValue( goalServant.goalLevel );
    ui->goalAscension->setValue( goalServant.goalAscensionLevel );
    ui->goalSkill1->setValue( goalServant.goalSkill1 );
    ui->goalSkill2->setValue( goalServant.goalSkill2 );
    ui->goalSkill3->setValue( goalServant.goalSkill3 );
    ui->trackingBool->setChecked( goalServant.tracking );

    QPixmap Servant_Image( ":/Servant_Images/" + goalServant.name + ".png" );
    ui->ServantImage->setScaledContents( true );
    ui->ServantImage->setPixmap( Servant_Image );
}

goalDialog::~goalDialog()
{
    delete ui;
}

void goalDialog::on_confirmGoals_clicked()
{
    goalServant.goalLevel = std::max( ui->goalLevel->text().toInt(),goalServant.level );
    goalServant.goalAscensionLevel = std::max( ui->goalAscension->text().toInt(),goalServant.ascension );
    goalServant.goalSkill1 = std::max( ui->goalSkill1->text().toInt(),goalServant.skill1 );
    goalServant.goalSkill2 = std::max( ui->goalSkill2->text().toInt(),goalServant.skill2 );
    goalServant.goalSkill3 = std::max( ui->goalSkill3->text().toInt(),goalServant.skill3 );

    goalServant.tracking = ui->trackingBool->isChecked();

    goalDialog::done( 0 );
}

void goalDialog::on_discardGoals_clicked()
{
    goalDialog::done( 0 );
}

void goalDialog::on_goalLevel_valueChanged(int arg1)
{


    if( arg1 > goalServant.ascension4 )
    {
        ui->goalAscension->setMinimum( 4 );
        ui->goalAscension->setValue( 4 );
    }
    else if( arg1 == goalServant.ascension4 )
    {
        ui->goalAscension->setMinimum( 3 );
        ui->goalAscension->setMaximum( 4 );
        ui->goalAscension->setValue( std::max( ui->goalAscension->value(), 3 ) );
    }
    else if( arg1 > goalServant.ascension3 )
    {
        ui->goalAscension->setMinimum( 3 );
        ui->goalAscension->setValue( 3 );
    }
    else if( arg1 == goalServant.ascension3 )
    {
        ui->goalAscension->setMinimum( 2 );
        ui->goalAscension->setMaximum( 3 );
        ui->goalAscension->setValue( std::max( std::min( ui->goalAscension->value(),3 ), 2 ) );
    }
    else if( arg1 > goalServant.ascension2 )
    {
        ui->goalAscension->setMinimum( 2 );
        ui->goalAscension->setValue( 2 );
    }
    else if( arg1 == goalServant.ascension2 )
    {
        ui->goalAscension->setMinimum( 1 );
        ui->goalAscension->setMaximum( 2 );
        ui->goalAscension->setValue( std::max( std::min( ui->goalAscension->value(),2 ), 1 ) );
    }
    else if( arg1 > goalServant.ascension1 )
    {
        ui->goalAscension->setMinimum( 1 );
        ui->goalAscension->setValue( 1 );
    }
    else if( arg1 == goalServant.ascension1 )
    {
        ui->goalAscension->setMinimum( 0 );
        ui->goalAscension->setMaximum( 1 );
        ui->goalAscension->setValue( std::max( std::min( ui->goalAscension->value(),1 ), 0 ) );
    }
    else
    {
        ui->goalAscension->setMaximum( 0 );
        ui->goalAscension->setMinimum( 0 );
        ui->goalAscension->setValue( 0 );
    }
}
