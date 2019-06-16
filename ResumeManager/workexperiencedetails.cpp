#include "workexperiencedetails.h"
#include "ui_workexperiencedetails.h"
#include <windows.h>
#include <shlobj.h>
#include <QtGui>
#include <QObject>
#include <vector>
#include <algorithm>
#include <QtWidgets/QMessageBox>

workExperienceDetails::workExperienceDetails( std::string functionality,QDialog *parent) :
    QDialog(parent),
    ui(new Ui::workExperienceDetails)
{
    ui->setupUi(this);
    function = functionality;

    connect(ui->pushButtonWorkExOK, SIGNAL(clicked()), this, SLOT(OnButtonAccepted()));
    connect(ui->pushButtonWorkExCancel, SIGNAL(clicked()), this, SLOT(OnButtonRejected()));
}

workExperienceDetails::~workExperienceDetails()
{
    delete ui;
}
QString workExperienceDetails::getCompanyName()
{
    return ui->companyLineEdit->text();
}

QString workExperienceDetails::getFromDate()
{
    return ui->FromWorkExLineEdit->text();
}

QString workExperienceDetails::getToDate()
{
    return ui->toWorkExLineEdit->text();
}

int workExperienceDetails::getCurrentJob()
{
    if(ui->checkBoxCurrentlyWorking->isChecked())
        return 1;
    else
        return 0;
}

QString workExperienceDetails::getTitle()
{
    return ui->titleLineEdit->text();
}

QString workExperienceDetails::getJobDescription()
{
    return ui->jobDescriptionTextEdit->toPlainText();
}

void workExperienceDetails::OnButtonAccepted()
{
    accept();
}

void workExperienceDetails::OnButtonRejected()
{
    reject();
}
