#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSql>
#include <QSqlDatabase>
#include "globalproductdata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ResumeManagerBase mResumeManagerBaseObj;

    void connectToDatabase();
    void displayExistingResumesInDB();
    bool validatePersonalDetailsAndAddress();
    ResumeNames findResumePK();
    void fillWorkExDetailsList(std::vector<WorkExperience> &tempWorkExList);
    void fillEducationDetailsList(std::vector<EducationDetails> &tempEducationDetailsList);
    void fillTechSkillsList(std::vector<TechnicalSkills> &tempTechSkillsList);
    void fillProficiencyList();

private slots:
    void setTabWidgetIndex();    
    void validateFirstTabInputs();
    void validateSecondTabInputs();
    void browseSlot();
    void exportAsPDF();
    void getSelectedResumeDataFromDB();
    void addNewWorkExClicked();
    void deleteWorkExOnDeleteClicked();
    void addNewCollegeClicked();
    void deleteCollegeOnDeleteClicked();
    void addNewTechSkillsClicked();
    void deleteTechSkillsDeleteClicked();
    void saveResumeDetailsInDB();
    void filterReumeInListWidget();
};

#endif // MAINWINDOW_H
