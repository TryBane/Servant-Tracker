#include "servantdialog.h"
#include "ui_servantdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

ServantDialog::ServantDialog(QString &DebugInfo, Servant & servantData, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServantDialog),
    servantToBeModified( servantData ),
    DebugInfo(DebugInfo)
{
    ui->setupUi(this);

    ui->servantName->setText( servantToBeModified.name );
    ui->Ascension->setValue( servantToBeModified.ascension );
    ui->Level->setValue( servantToBeModified.level );
    ui->attackFou->setValue( servantToBeModified.hpFou );
    ui->hpFou->setValue( servantToBeModified.attackFou );
    ui->npLevel->setValue( servantToBeModified.npLevel );
    ui->Skill1Edit->setValue( servantToBeModified.skill1 );
    ui->Skill2Edit->setValue( servantToBeModified.skill2 );
    ui->Skill3Edit->setValue( servantToBeModified.skill3 );

    ui->favoriteServant->setChecked( servantToBeModified.favorite );

    QPixmap Servant_Image( ":/Servant_Images/" + servantToBeModified.name + ".png" );
    ui->ServantImage->setScaledContents( true );
    ui->ServantImage->setPixmap( Servant_Image );
}

ServantDialog::~ServantDialog()
{
    delete ui;
}

void ServantDialog::on_Confirm_clicked()
{
    servantToBeModified.name = ui->servantName->text();
    servantToBeModified.level = ui->Level->value();
    servantToBeModified.ascension = ui->Ascension->value();
    servantToBeModified.attackFou = ui->attackFou->value();
    servantToBeModified.hpFou = ui->hpFou->value();
    servantToBeModified.npLevel = ui->npLevel->value();
    servantToBeModified.skill1 = ui->Skill1Edit->value();
    servantToBeModified.skill2 = ui->Skill2Edit->value();
    servantToBeModified.skill3 = ui->Skill3Edit->value();

    servantToBeModified.determineAscensionLevel();

    servantToBeModified.favorite = ui->favoriteServant->isChecked();

    ServantDialog::done( 0 );
}

void ServantDialog::on_Discard_clicked()
{
    ui->servantName->setText( servantToBeModified.name );
    ui->Level->setValue( servantToBeModified.level );
    ui->Ascension->setValue( servantToBeModified.ascension );
    ui->attackFou->setValue( servantToBeModified.attackFou );
    ui->hpFou->setValue( servantToBeModified.hpFou );
    ui->npLevel->setValue( servantToBeModified.npLevel );
    ui->Skill1Edit->setValue( servantToBeModified.skill1 );
    ui->Skill2Edit->setValue( servantToBeModified.skill2 );
    ui->Skill3Edit->setValue( servantToBeModified.skill3 );

    ServantDialog::done( 0 );
}

void ServantDialog::on_Level_valueChanged(qint32 arg1)
{

    if( arg1 > servantToBeModified.ascension4 )
    {
        ui->Ascension->setMinimum( 4 );
        ui->Ascension->setValue( 4 );
    }
    else if( arg1 == servantToBeModified.ascension4 )
    {
        ui->Ascension->setMinimum( 3 );
        ui->Ascension->setMaximum( 4 );
        ui->Ascension->setValue( std::max( ui->Ascension->value(), 3 ) );
    }
    else if( arg1 > servantToBeModified.ascension3 )
    {
        ui->Ascension->setMinimum( 3 );
        ui->Ascension->setValue( 3 );
    }
    else if( arg1 == servantToBeModified.ascension3 )
    {
        ui->Ascension->setMinimum( 2 );
        ui->Ascension->setMaximum( 3 );
        ui->Ascension->setValue( std::max( std::min( ui->Ascension->value(),3 ), 2 ) );
    }
    else if( arg1 > servantToBeModified.ascension2 )
    {
        ui->Ascension->setMinimum( 2 );
        ui->Ascension->setValue( 2 );
    }
    else if( arg1 == servantToBeModified.ascension2 )
    {
        ui->Ascension->setMinimum( 1 );
        ui->Ascension->setMaximum( 2 );
        ui->Ascension->setValue( std::max( std::min( ui->Ascension->value(),2 ), 1 ) );
    }
    else if( arg1 > servantToBeModified.ascension1 )
    {
        ui->Ascension->setMinimum( 1 );
        ui->Ascension->setValue( 1 );
    }
    else if( arg1 == servantToBeModified.ascension1 )
    {
        ui->Ascension->setMinimum( 0 );
        ui->Ascension->setMaximum( 1 );
        ui->Ascension->setValue( std::max( std::min( ui->Ascension->value(),1 ), 0 ) );
    }
    else
    {
        ui->Ascension->setMaximum( 0 );
        ui->Ascension->setMinimum( 0 );
        ui->Ascension->setValue( 0 );
    }
}
