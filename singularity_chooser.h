#ifndef SINGULARITY_CHOOSER_H
#define SINGULARITY_CHOOSER_H

#include <QDialog>
#include "farmablenode.h"
#include "profile.h"

namespace Ui {
class Singularity_Chooser;
}

class Singularity_Chooser : public QDialog
{
    Q_OBJECT

public:
    explicit Singularity_Chooser( Profile & in_profile,std::vector< FarmableNode > nodes,QWidget *parent = 0 );
    ~Singularity_Chooser();

private slots:
    void on_singularityList_currentIndexChanged( const QString &string );

    void on_confirm_clicked();

    void on_discard_clicked();

private:
    Ui::Singularity_Chooser *ui;
    Profile & tempProfile;
    std::vector< FarmableNode > allNodes;
};

#endif // SINGULARITY_CHOOSER_H
