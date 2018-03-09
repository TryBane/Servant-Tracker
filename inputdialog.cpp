#include "inputdialog.h"
#include "ui_inputdialog.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include "overload.h"

InputDialog::InputDialog(std::vector<Servant> & servants,Profile & userProfile,QDir saveFolder,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputDialog),
    tempUserProfile( userProfile ),
    tempSaveFolder( saveFolder ),
    tempServants( servants )
{
    ui->setupUi(this);
}

InputDialog::~InputDialog()
{
    delete ui;
}

void InputDialog::on_loadButton_clicked()
{
    if( ui->loadButton->text() == "Load Profile" )
    {
        QString filter = "Servant Info File (*.svi)";
        QString file_name = QFileDialog::getOpenFileName(this,tr("Open File"),tempSaveFolder.absolutePath(),filter);
        QFile file(file_name);

        if( !file.open(QFile::ReadOnly | QFile::Text ) )
        {
            QMessageBox::warning( this,"title","file not open" );
            return;
        }

        tempUserProfile.neededMaterialList.clear();
        tempUserProfile.servants.clear();

        QDataStream loadData(&file);
        loadData.setVersion(QDataStream::Qt_5_9);

        qint32 versionType;

        loadData >> versionType;

        loadData >> tempUserProfile;

        loadData >> tempUserProfile.recommendedLevel;
        loadData >> tempUserProfile.singularityChosen;

        for( auto & userServants : tempUserProfile.servants )
        {
            loadData >> userServants.tracking;
            loadData >> userServants.favorite;
        }

        file.close();
        InputDialog::done( 0 );
    }
    else
    {
        tempUserProfile = Profile();
        tempUserProfile.profileName = ui->lineEdit->text();
        InputDialog::done( 0 );
    }
}

void InputDialog::on_lineEdit_textChanged(const QString &arg1)
{
    if( arg1 == "" )
    {
        ui->loadButton->setText( "Load Profile" );
    }
    else
    {
        ui->loadButton->setText( "Start program as " + arg1 );
    }
}
