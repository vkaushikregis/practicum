#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidgetMain->setCurrentIndex(0);

    //Navigating tab widgets signal connection
    connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackPersonal,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackWork,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonAdditionalSkils,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));

    //adding/deleting skill's table rows
    connect(ui->pushButtonAddSkill,SIGNAL(clicked(bool)),this,SLOT(addDeleteSkills()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTabWidgetIndex()
{
   if ((sender()->objectName() == "pushButtonWorkEx"))
         ui->tabWidgetMain->setCurrentIndex(1);
   else if ((sender()->objectName() == "pushButtonBackPersonal"))
        ui->tabWidgetMain->setCurrentIndex(0);
   else if ((sender()->objectName() == "pushButtonEducation"))
          ui->tabWidgetMain->setCurrentIndex(2);
   else if ((sender()->objectName() == "pushButtonBackWork"))
          ui->tabWidgetMain->setCurrentIndex(1);
   else if ((sender()->objectName() == "pushButtonSkills"))
          ui->tabWidgetMain->setCurrentIndex(3);
   else if ((sender()->objectName() == "pushButtonBackEducation"))
          ui->tabWidgetMain->setCurrentIndex(2);
   else if ((sender()->objectName() == "pushButtonAdditionalSkils"))
          ui->tabWidgetMain->setCurrentIndex(4);
   else if ((sender()->objectName() == "pushButtonBackSkills"))
          ui->tabWidgetMain->setCurrentIndex(3);
}

void MainWindow::addDeleteSkills()
{
    if ((sender()->objectName() == "pushButtonWorkEx"))
    {
        ui->tableWidgetSkills->setSelectionBehavior(QAbstractItemView::SelectRows);
        int currentRow = ui->tableWidgetSkills->rowCount();
        ui->tableWidgetSkills->setRowCount(currentRow + 1);

        QHeaderView* header = ui->tableWidgetSkills->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);

        QHeaderView* vheader = ui->tableWidgetSkills->verticalHeader();
        vheader->setSectionResizeMode(QHeaderView::Stretch);

        std::stringstream temp;
        temp << currentRow;
        std::string label = "DEV" + temp.str();
        ui->tableWidgetSkills->setItem(currentRow, 0, new QTableWidgetItem(""));
        ui->tableWidgetSkills->setItem(currentRow, 1, new QTableWidgetItem(""));
        ui->tableWidgetSkills->setItem(currentRow, 2, new QTableWidgetItem(""));
        ui->tableWidgetSkills->update();
    }
}
