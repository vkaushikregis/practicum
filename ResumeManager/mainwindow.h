#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSql>
#include <QSqlDatabase>

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
    void connectToDatabase();

private slots:
    void setTabWidgetIndex();
    void addDeleteSkills();
    void validateFirstTabInputs();
    void validateSecondTabInputs();
    void exportAsPDF();
};

#endif // MAINWINDOW_H
