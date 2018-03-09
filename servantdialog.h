#ifndef SERVANTDIALOG_H
#define SERVANTDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ServantDialog;
}

class ServantDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ServantDialog(QString & DebugInfo, Servant & servantData, QWidget *parent = 0);
    ~ServantDialog();

private slots:
    void on_Confirm_clicked();

    void on_Discard_clicked();

    void on_Level_valueChanged(qint32 arg1);

private:
    Ui::ServantDialog *ui;

    QString & DebugInfo;
    Servant & servantToBeModified;
};

#endif // SERVANTDIALOG_H
