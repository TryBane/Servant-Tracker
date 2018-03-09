#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <servant.h>
#include "mainwindow.h"

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(std::vector<Servant> & servants,Profile & userProfile,QDir saveFolder,QWidget *parent = 0);
    ~InputDialog();

private slots:
    void on_loadButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::InputDialog *ui;
    Profile & tempUserProfile;
    std::vector<Servant> tempServants;
    QDir tempSaveFolder;
};

#endif // INPUTDIALOG_H
