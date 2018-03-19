#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QString>
#include <QDir>
#include "profile.h"
#include "farmablenode.h"
#include "event.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void initializeServants();

    void initializeNodes();

    void initializeEvents();

    void on_Servants_itemClicked(QListWidgetItem *item);

    void on_AddButton_clicked();

    void on_QuitButton_clicked();

    void on_RemoveButton_clicked();

    void on_Classes_currentTextChanged();

    void on_Save_clicked();

    void on_Load_clicked();

    void updateResources();

    void on_ModifyServant_clicked();

    void on_SetGoals_clicked();

    void on_AdjustMatsOwned_clicked();

    void on_MaterialsList_currentItemChanged();

    void calculateMaterials(Servant &servantModified);

    void updateServants(Servant & updatedServant);

    void makeSaveFolder();

    void on_MaterialsList_cellDoubleClicked(int row);

    void on_listWidget_clicked();

    void on_listWidget_doubleClicked();

    void on_Servants_doubleClicked();

    void on_userServantClasses_currentTextChanged(const QString &userClass);

    void on_chooseRecommendedLevel_valueChanged(int levelChange);

    void on_actionNew_Profile_triggered();

    void on_actionSave_Profile_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionSingularity_triggered();

    void on_CalculateFarming_clicked();

public:
    QDir SaveFolder;
    Ui::MainWindow *ui;
    std::vector<Servant> servants;
    std::vector<FarmableNode> nodes;
    QString SaveFolderString = "Servant Tracker Saves";
    QString DebugInfo = "";
    QString SecondDisplay;
    Profile userProfile;
    std::vector< Profile > pastStates;
    std::vector< Profile > futureStates;
    std::vector< Event > events;
    std::vector< QString > resources;
    std::vector< float > totalMaterials;
    bool ServantsClicked = false;
    bool ChangesAvailable = false;
    bool MatsAdjustable = false;
    bool UserServantsSelected = false;
};

#endif // MAINWINDOW_H
