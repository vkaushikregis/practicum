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
    ResumeNames findResumePK();

private slots:
    void setTabWidgetIndex();
    void addDeleteSkills();
    void validateFirstTabInputs();
    void validateSecondTabInputs();
    void exportAsPDF();
    void getSelectedResumeDataFromDB();
    void addNewWorkExClicked();
    void deleteWorkExOnDeleteClicked();
    void addNewCollegeClicked();
    void deleteCollegeOnDeleteClicked();
    void saveResumeDetailsInDB();
};

#endif // MAINWINDOW_H
