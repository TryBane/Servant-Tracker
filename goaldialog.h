#ifndef GOALDIALOG_H
#define GOALDIALOG_H

#include <QDialog>
#include "servant.h"

namespace Ui {
class goalDialog;
}

class goalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit goalDialog(Servant & servant,QWidget *parent = 0);
    ~goalDialog();

private slots:
    void on_confirmGoals_clicked();

    void on_discardGoals_clicked();

    void on_goalLevel_valueChanged(int arg1);

private:
    Ui::goalDialog *ui;
    Servant & goalServant;
};

#endif // GOALDIALOG_H
