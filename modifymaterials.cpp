#include "modifymaterials.h"
#include "ui_modifymaterials.h"

ModifyMaterials::ModifyMaterials(Material &in_material, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyMaterials),
    material( in_material )
{
    ui->setupUi(this);

    ui->materialName->setText( material.getName() );
    QPixmap MaterialImage( ":/FGO_Mats/" + material.getName() + ".png" );
    ui->Material_Icon->setScaledContents( true );
    ui->Material_Icon->setPixmap( MaterialImage );
}

ModifyMaterials::~ModifyMaterials()
{
    delete ui;
}

void ModifyMaterials::on_confirmChanges_clicked()
{
    material.totalMatsNeeded = ui->howManyMaterials->text().toInt();

    ModifyMaterials::done( 0 );
}

void ModifyMaterials::on_discardChanges_clicked()
{
    ModifyMaterials::done( 0 );
}
