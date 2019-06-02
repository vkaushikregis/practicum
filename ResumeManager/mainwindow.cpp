#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidgetMain->setCurrentIndex(0);
    connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackPersonal,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackWork,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonAdditionalSkils,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));

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

}
