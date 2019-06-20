#include "educationdetails.h"
#include "ui_educationdetails.h"

educationDetails::educationDetails(std::string functionality,QDialog *parent) :
    QDialog(parent),
    ui(new Ui::educationDetails)
{
    ui->setupUi(this);
    connect(ui->pushButtonOK, SIGNAL(clicked()), this, SLOT(OnButtonAccepted()));
    connect(ui->pushButtonCancel, SIGNAL(clicked()), this, SLOT(OnButtonRejected()));
}

educationDetails::~educationDetails()
{
    delete ui;
}

QString educationDetails::getCollegeName()
{
    return ui->lineEditCollegeName->text();
}

QString educationDetails::getFromDate()
{
    return ui->lineEditFromDateCol->text();
}

QString educationDetails::getToDate()
{
    return ui->lineEditToDateColl->text();
}

int educationDetails::getCurrentCollege()
{
   if(ui->checkBoxCurrPursuing->isChecked())
       return 1;
   else
       return 0;
}

QString educationDetails::getField()
{
    return ui->lineEditCollegeField->text();
}

QString educationDetails::getGPA()
{
    return ui->lineEditGPA->text();
}

void educationDetails::setCollegeName(QString collegeName)
{
    ui->lineEditCollegeName->setText(collegeName);
}

void educationDetails::setFromDate(QString fromDate)
{
    ui->lineEditFromDateCol->setText(fromDate);
}

void educationDetails::setToDate(QString toDate)
{
    ui->lineEditToDateColl->setText(toDate);
}

void educationDetails::setCurrentCollege(int isCurrent)
{
    if(isCurrent)
        ui->checkBoxCurrPursuing->setChecked(true);
    else
        ui->checkBoxCurrPursuing->setChecked(false);
}

void educationDetails::setField(QString field)
{
    ui->lineEditCollegeField->setText(field);
}

void educationDetails::setGPA(QString gpa)
{
    ui->lineEditGPA->setText(gpa);
}

void educationDetails::OnButtonAccepted()
{
    accept();
}

void educationDetails::OnButtonRejected()
{
    reject();
}
