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
   // function = functionality;

    connect(ui->pushButtonWorkExOK, SIGNAL(clicked()), this, SLOT(OnButtonWAccepted()));
    connect(ui->pushButtonWorkExCancel, SIGNAL(clicked()), this, SLOT(OnButtonWRejected()));

    //setWindowOpacity(0.9);
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

void workExperienceDetails::setCompanyName(QString companyName)
{
    ui->companyLineEdit->setText(companyName);
}

void workExperienceDetails::setFromDate(QString fromDate)
{
    ui->FromWorkExLineEdit->setText(fromDate);
}

void workExperienceDetails::setToDate(QString toDate)
{
    ui->toWorkExLineEdit->setText(toDate);
}

void workExperienceDetails::setCurrentJob(int isCurrent)
{
    if(isCurrent)
        ui->checkBoxCurrentlyWorking->setChecked(true);
    else
        ui->checkBoxCurrentlyWorking->setChecked(false);
}

void workExperienceDetails::setTitle(QString title)
{
    ui->titleLineEdit->setText(title);
}

void workExperienceDetails::setJobDescription(QString jobDescription)
{
    ui->jobDescriptionTextEdit->setPlainText(jobDescription);
}

void workExperienceDetails::OnButtonWAccepted()
{
    qDebug()<<"testing ";
   if(!checkInputFields())
        return;

    accept();
}
 bool workExperienceDetails::checkInputFields()
 {
     if(ui->companyLineEdit->text().toStdString().empty())
     {
         QMessageBox::critical(NULL, tr("Work Experience"), tr("Company Name is not filled, it is a mandatory field"));
         return false;
     }
     else if (ui->FromWorkExLineEdit->text().toStdString().empty())
     {
         QMessageBox::critical(NULL, tr("Work Experience"), tr("From date is not filled, it is a mandatory field"));
         return false;
     }
     else if(!ui->checkBoxCurrentlyWorking->isChecked())
     {
         if (ui->toWorkExLineEdit->text().toStdString().empty())
         {
              QMessageBox::critical(NULL, tr("Work Experience"), tr("To Date is not filled, fill this field if it is not a current job"));
              return false;
         }
     }
     else if (ui->titleLineEdit->text().toStdString().empty())
     {
         QMessageBox::critical(NULL, tr("Work Experience"), tr("Title is not filled, it is a mandatory field"));
         return false;
     }
     else if (ui->jobDescriptionTextEdit->toPlainText().toStdString().empty())
     {
         QMessageBox::critical(NULL, tr("Work Experience"), tr("Job Description is not filled, it is a mandatory field"));
         return false;
     }

     QString date_string_from = ui->FromWorkExLineEdit->text();
     QDate DateFrom = QDate::fromString(date_string_from,"dd/MM/yyyy");

     if(!DateFrom.isValid())
     {
         QMessageBox::critical(NULL, tr("From Date Details"), tr("From date entered is not a valid date, please enter the valid date in format dd/MM/yyyy"));
         return false;
     }

     QString date_string_to = ui->toWorkExLineEdit->text();
     QDate DateTo = QDate::fromString(date_string_to,"dd/MM/yyyy");

     if(!ui->checkBoxCurrentlyWorking->isChecked())
     {
         if((!DateTo.isValid()) || (date_string_to.toStdString().empty()))
         {
             QMessageBox::critical(NULL, tr("To Date Details"), tr("To date entered is not a valid date, please enter the valid date in format dd/MM/yyyy"));
             return false;
         }
     }

     return true;
 }

void workExperienceDetails::OnButtonWRejected()
{
    reject();
}
