#include "educationdetails.h"
#include "ui_educationdetails.h"

educationDetails::educationDetails(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::educationDetails)
{
    ui->setupUi(this);
}

educationDetails::~educationDetails()
{
    delete ui;
}
