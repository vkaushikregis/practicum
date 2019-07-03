#include "workexperiencedetails.h"
#include "ui_workexperiencedetails.h"
#include <windows.h>
#include <shlobj.h>
#include <QtGui>
#include <QObject>
#include <vector>
#include <algorithm>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QDateEdit>

workExperienceDetails::workExperienceDetails( std::string functionality,QDialog *parent) :
    QDialog(parent),
    ui(new Ui::workExperienceDetails)
{
    ui->setupUi(this);
    function = functionality;

    connect(ui->pushButtonWorkExOK, SIGNAL(clicked()), this, SLOT(OnButtonAccepted()));
    connect(ui->pushButtonWorkExCancel, SIGNAL(clicked()), this, SLOT(OnButtonRejected()));    
}
bool workExperienceDetails::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        if (object == ui->FromWorkExLineEdit)
        {
            de = new QDateEdit(this);
            de->setCalendarPopup(true);
            de->show();
        }
    }
    return false;
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

void workExperienceDetails::OnButtonAccepted()
{
    if(ui->companyLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Work Experience"), tr("Company Name is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->FromWorkExLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Work Experience"), tr("From date is not filled, it is a mandatory field"));
        return;
    }
    else if(!ui->checkBoxCurrentlyWorking->isChecked())
    {
        if (ui->toWorkExLineEdit->text().toStdString().empty())
        {
             QMessageBox::critical(NULL, tr("Work Experience"), tr("To Date is not filled, fill this field if it is not a current job"));
             return;
        }
    }
    else if (ui->titleLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Work Experience"), tr("Title is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->jobDescriptionTextEdit->toPlainText().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Work Experience"), tr("Job Description is not filled, it is a mandatory field"));
        return;
    }

    accept();
}

void workExperienceDetails::OnButtonRejected()
{
    reject();
}
