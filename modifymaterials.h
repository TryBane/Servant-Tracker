#ifndef MODIFYMATERIALS_H
#define MODIFYMATERIALS_H

#include <QDialog>
#include "material.h"

namespace Ui {
class ModifyMaterials;
}

class ModifyMaterials : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyMaterials(Material & in_material,QWidget *parent = 0);
    ~ModifyMaterials();

private slots:
    void on_confirmChanges_clicked();

    void on_discardChanges_clicked();

private:
    Ui::ModifyMaterials *ui;
    Material & material;
};

#endif // MODIFYMATERIALS_H
