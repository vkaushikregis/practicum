#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <QtWidgets/QMessageBox>
#include <stdio.h>
#include <string.h>
#include <QPaintDevice>
#include <QPdfWriter>
#include <QPainter>
#include <QApplication>
#include <QtCore>
#include <QPdfWriter>
#include <QtPrintSupport>
#include "databasecommunicator.h"
#include "globalproductdata.h"
#include "workexperiencedetails.h"
#include "educationdetails.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidgetMain->setCurrentIndex(0);

    ui->zipLineEdit->setValidator( new QIntValidator(this));

    QRegExp rx("regex");
    QValidator *validator = new QRegExpValidator(rx, this);

    ui->cityLineEdit->setValidator(validator);
    //Navigating tab widgets signal connection
    connect(ui->pushButtonBackPersonal,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackWork,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonAdditionalSkils,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));

    //adding/deleting skill's table rows
    connect(ui->pushButtonAddSkill,SIGNAL(clicked(bool)),this,SLOT(addDeleteSkills()));
    connect(ui->pushButtonDeleteSkill,SIGNAL(clicked(bool)),this,SLOT(addDeleteSkills()));

    //validate first tab inputs
     connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(validateFirstTabInputs()));
     connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(validateSecondTabInputs()));
     connect(ui->pushButtonExportAsPDF,SIGNAL(clicked(bool)),this,SLOT(exportAsPDF()));
     connect(ui->listWidgetResumeNames, SIGNAL(itemSelectionChanged()), this, SLOT(getSelectedResumeDataFromDB()));

     //open ediot widnows for Work experience
     connect(ui->pushButtonAddWorkEx, SIGNAL(clicked()),this, SLOT(addNewWorkExClicked()));
     connect(ui->pushButtonEditWorkEx, SIGNAL(clicked()),this, SLOT(addNewWorkExClicked()));
     connect(ui->pushButtonDeleteWorkEx, SIGNAL(clicked()),this, SLOT(deleteWorkExOnDeleteClicked()));

     //open ediot widnows for Work experience
     connect(ui->pushButtonAddEducation, SIGNAL(clicked()),this, SLOT(addNewCollegeClicked()));
     connect(ui->pushButtonEditEducation, SIGNAL(clicked()),this, SLOT(addNewCollegeClicked()));
     connect(ui->pushButtonDeleteEducation, SIGNAL(clicked()),this, SLOT(deleteCollegeOnDeleteClicked()));

     ui->tableWidgetWorkEx->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidgetWorkEx->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

     ui->tableWidgetEducation->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidgetEducation->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

     connect(ui->pushButtonSaveInDB,SIGNAL(clicked(bool)),this,SLOT(saveResumeDetailsInDB()));

     //connectToDatabase();
     displayExistingResumesInDB();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectToDatabase()
{
    DatabaseCommunicator::Instance();
    if(!isDatabaseConnected)
    {
        QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
        return;
    }
}
void MainWindow::displayExistingResumesInDB()
{
    std::string message;
    bool status = DatabaseCommunicator::Instance()->getExistingResumesFromDB(message);
    qDebug()<<gResumeNamesList.size();
    if(status)
    {
       ui->listWidgetResumeNames->clear();
       for(int count =0; count <gResumeNamesList.size(); count++)
            ui->listWidgetResumeNames->addItem(QString::fromUtf8(gResumeNamesList[count].mResume_name.c_str()));
    }
    else
    {
        QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
    }
}

void MainWindow::getSelectedResumeDataFromDB()
{
    std::string message;
    mResumeManagerBaseObj = {};//resetting structure

    ResumeNames resuObj =findResumePK();
    mResumeManagerBaseObj.mResume_pk = resuObj.mResume_pk;
    mResumeManagerBaseObj.mResume_name = resuObj.mResume_name;

    if(resuObj.mResume_pk !=-1)
    {
        bool status = DatabaseCommunicator::Instance()->getPersonalDetailFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);

        if(status)
        {
            qDebug()<<"first name:" << mResumeManagerBaseObj.mPersonalDetails.mFirst_name.c_str();
        }
    }
}

ResumeNames MainWindow::findResumePK()
{
    ResumeNames obj ={};
    if(ui->listWidgetResumeNames->currentItem())
    {
        std::string selecteResume = ui->listWidgetResumeNames->currentItem()->text().toStdString();
        for(int count =0; count <gResumeNamesList.size(); count++)
        {
            if(gResumeNamesList[count].mResume_name == selecteResume)
            {
                obj.mResume_pk = gResumeNamesList[count].mResume_pk;
                obj.mResume_name = selecteResume;
                break;
            }
        }
    }

    return obj;
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
    if ((sender()->objectName() == "pushButtonAddSkill"))
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

    else if((sender()->objectName() == "pushButtonDeleteSkill"))
    {
        if(ui->tableWidgetSkills->selectedItems().size()<=0)
        {
            QMessageBox::critical(NULL, tr("Skills Table"), tr("Select a skill row to delete"));
            return;
        }

        int row = ui->tableWidgetSkills->selectedItems().at(0)->row();
        ui->tableWidgetSkills->removeRow(row);
    }
}
void MainWindow::validateFirstTabInputs()
{

    if(ui->firstNameLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("First Name is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->lastNameLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Last Name is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->addressLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Address is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->cityLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("City is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->stateLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("State is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->zipLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Zip is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->mobileLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Mobile is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->emailLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Email is not filled, it is a mandatory field"));
        return;
    }
    setTabWidgetIndex();
}

void MainWindow::validateSecondTabInputs()
{
    setTabWidgetIndex();
}

void MainWindow::addNewWorkExClicked()
{
    if (sender()->objectName() == "pushButtonAddWorkEx")
    {
        workExperienceDetails workExWindow("Add");
        workExWindow.setWindowTitle("Enter Work Experience");

        //WORK_EX_PK,COMPANY_NAME,FROM_DATE_W,TO_DATE_W,IS_CURR_W,TITLE,JD
        //workExWindow("-1");
        workExWindow.setCompanyName("");
        workExWindow.setFromDate("");
        workExWindow.setToDate("");
        workExWindow.setTitle("");
        workExWindow.setCurrentJob(0);
        workExWindow.setJobDescription("");

        int res = workExWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetWorkEx->insertRow( ui->tableWidgetWorkEx->rowCount());
        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, WORK_EX_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, COMPANY_NAME, new QTableWidgetItem((workExWindow.getCompanyName())));
        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, FROM_DATE_W, new QTableWidgetItem((workExWindow.getFromDate())));
        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, TO_DATE_W, new QTableWidgetItem((workExWindow.getToDate())));
        if(workExWindow.getCurrentJob())
            ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, IS_CURR_W, new QTableWidgetItem(("Yes")));
        else
            ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, IS_CURR_W, new QTableWidgetItem(("No")));

        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, TITLE, new QTableWidgetItem((workExWindow.getTitle())));
        ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, JD, new QTableWidgetItem((workExWindow.getJobDescription())));

        for (int count = 0; count <  ui->tableWidgetWorkEx->columnCount(); count++)
        {
            if ( ui->tableWidgetWorkEx->item( ui->tableWidgetWorkEx->rowCount() -1, count))
                ui->tableWidgetWorkEx->item( ui->tableWidgetWorkEx->rowCount()-1 , count)->setBackgroundColor(QColor(255, 170, 127));
        }

        ui->tableWidgetWorkEx->scrollToBottom();
    }

    if (sender()->objectName() == "pushButtonEditWorkEx")
    {
        if (ui->tableWidgetWorkEx->selectedItems().size() <= 0)
        {
            QMessageBox::warning(NULL, tr("Edit Work Experience"), tr("Select a row to edit."));
            return;
        }
        int row = ui->tableWidgetWorkEx->selectedItems().at(0)->row();
        if (row < 0)
            return;

        workExperienceDetails workExWindow("Edit");
        workExWindow.setWindowTitle("Edit Work Experience for row:" + QString::number(ui->tableWidgetWorkEx->currentRow() + 1));

       // if (ui->tableWidgetWorkEx->item(row, STACKS_PK))
           // workExWindow.setStackPk(ui->tableWidgetWorkEx->item(row, STACKS_PK)->text());

        if (ui->tableWidgetWorkEx->item(row, COMPANY_NAME))
            workExWindow.setCompanyName( ui->tableWidgetWorkEx->item(row, COMPANY_NAME)->text());

        if (ui->tableWidgetWorkEx->item(row, FROM_DATE_W))
            workExWindow.setFromDate( ui->tableWidgetWorkEx->item(row, FROM_DATE_W)->text());

        if (ui->tableWidgetWorkEx->item(row, TO_DATE_W))
            workExWindow.setToDate( ui->tableWidgetWorkEx->item(row, TO_DATE_W)->text());

        if (ui->tableWidgetWorkEx->item(row, IS_CURR_W))
            workExWindow.setCurrentJob( ui->tableWidgetEducation->item(row, IS_CURR_W)->text().toInt());

        if (ui->tableWidgetWorkEx->item(row, TITLE))
            workExWindow.setTitle( ui->tableWidgetWorkEx->item(row, TITLE)->text());

        if (ui->tableWidgetWorkEx->item(row, JD))
            workExWindow.setJobDescription( ui->tableWidgetWorkEx->item(row, JD)->text());

        int res = workExWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetWorkEx->setItem(row, WORK_EX_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetWorkEx->setItem( row, COMPANY_NAME, new QTableWidgetItem((workExWindow.getCompanyName())));
        ui->tableWidgetWorkEx->setItem( row, FROM_DATE_W, new QTableWidgetItem((workExWindow.getFromDate())));
        ui->tableWidgetWorkEx->setItem( row, TO_DATE_W, new QTableWidgetItem((workExWindow.getToDate())));
        if(workExWindow.getCurrentJob())
            ui->tableWidgetWorkEx->setItem(row, IS_CURR_W, new QTableWidgetItem(("Yes")));
        else
            ui->tableWidgetWorkEx->setItem( row, IS_CURR_W, new QTableWidgetItem(("No")));

        ui->tableWidgetWorkEx->setItem( row, TITLE, new QTableWidgetItem((workExWindow.getTitle())));
        ui->tableWidgetWorkEx->setItem( row, JD, new QTableWidgetItem((workExWindow.getJobDescription())));

        for (int count = 0; count <ui->tableWidgetWorkEx->columnCount(); count++)
        {
            if (ui->tableWidgetWorkEx->item(row, count))
                ui->tableWidgetWorkEx->item(row, count)->setBackgroundColor(QColor(255, 170, 127));
        }
    }

}

void MainWindow::deleteWorkExOnDeleteClicked()
{
    QString msg = "";
    if (ui->tableWidgetWorkEx->selectedItems().size() <= 0)
    {
        QMessageBox::warning(NULL, tr("Delete Work Experience"), tr("Select a job to be deleted"));
        return;
    }

    QMessageBox::StandardButton reply;
    //QString msg = "Are you sure, you want to delete this row?";
    reply = QMessageBox::question(this, "Delete Row Table", msg + "\nDo you want to continue?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QModelIndexList indexList = ui->tableWidgetWorkEx->selectionModel()->selectedRows();

        QList<int> rows;
        for (auto listIndex : indexList)
            rows.append(listIndex.row());

        qSort(rows);

        int prev = -1;
        for (int i = rows.count() - 1; i >= 0; i -= 1) {
            int current = rows[i];
            if (current != prev) {
                qDebug() << "row deleted from work experience table " << current << " data :" << ui->tableWidgetWorkEx->item(current, WORK_EX_PK)->text().toStdString().c_str();
                ui->tableWidgetWorkEx->removeRow(current);
                prev = current;
            }
        }
    }
    else
    {
        return;
    }
}

void MainWindow::addNewCollegeClicked()
{
    if (sender()->objectName() == "pushButtonAddEducation")
    {
        educationDetails educationWindow("Add");
        educationWindow.setWindowTitle("Enter Education Details");

        educationWindow.setCollegeName("");
        educationWindow.setFromDate("");
        educationWindow.setToDate("");
        educationWindow.setField("");
        educationWindow.setCurrentCollege(0);
        educationWindow.setGPA("");

        int res = educationWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetEducation->insertRow( ui->tableWidgetEducation->rowCount());
        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, EDU_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, COLLEGE_NAME, new QTableWidgetItem((educationWindow.getCollegeName())));
        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, FROM_DATE_C, new QTableWidgetItem((educationWindow.getFromDate())));
        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, TO_DATE_C, new QTableWidgetItem((educationWindow.getToDate())));
        if(educationWindow.getCurrentCollege())
            ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, IS_CURR_C, new QTableWidgetItem(("Yes")));
        else
            ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, IS_CURR_C, new QTableWidgetItem(("No")));

        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, FIELD, new QTableWidgetItem((educationWindow.getField())));
        ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, GPA, new QTableWidgetItem((educationWindow.getGPA())));

        for (int count = 0; count <  ui->tableWidgetEducation->columnCount(); count++)
        {
            if ( ui->tableWidgetEducation->item( ui->tableWidgetEducation->rowCount() -1, count))
                ui->tableWidgetEducation->item( ui->tableWidgetEducation->rowCount()-1 , count)->setBackgroundColor(QColor(255, 170, 127));
        }

        ui->tableWidgetEducation->scrollToBottom();
    }

    if (sender()->objectName() == "pushButtonEditEducation")
    {
        if (ui->tableWidgetEducation->selectedItems().size() <= 0)
        {
            QMessageBox::warning(NULL, tr("Edit Education details"), tr("Select a row to edit."));
            return;
        }
        int row = ui->tableWidgetEducation->selectedItems().at(0)->row();
        if (row < 0)
            return;

        //EDU_PK,COLLEGE_NAME,FROM_DATE_W,TO_DATE_W,IS_CURR_W,FIELD,GPA
        educationDetails educationWindow("Edit");
        educationWindow.setWindowTitle("Edit Education details for row:" + QString::number(ui->tableWidgetEducation->currentRow() + 1));

        if (ui->tableWidgetEducation->item(row, COLLEGE_NAME))
            educationWindow.setCollegeName( ui->tableWidgetEducation->item(row, COLLEGE_NAME)->text());

        if (ui->tableWidgetEducation->item(row, FROM_DATE_C))
            educationWindow.setFromDate( ui->tableWidgetEducation->item(row, FROM_DATE_C)->text());

        if (ui->tableWidgetEducation->item(row, TO_DATE_C))
            educationWindow.setToDate( ui->tableWidgetEducation->item(row, TO_DATE_C)->text());

        if (ui->tableWidgetEducation->item(row, IS_CURR_C))
            educationWindow.setCurrentCollege( ui->tableWidgetEducation->item(row, IS_CURR_C)->text().toInt());

        if (ui->tableWidgetEducation->item(row, FIELD))
            educationWindow.setField( ui->tableWidgetEducation->item(row, FIELD)->text());

        if (ui->tableWidgetEducation->item(row, GPA))
            educationWindow.setGPA( ui->tableWidgetEducation->item(row, GPA)->text());

        int res = educationWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetEducation->setItem(row, EDU_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetEducation->setItem( row, COLLEGE_NAME, new QTableWidgetItem((educationWindow.getCollegeName())));
        ui->tableWidgetEducation->setItem( row, FROM_DATE_C, new QTableWidgetItem((educationWindow.getFromDate())));
        ui->tableWidgetEducation->setItem( row, TO_DATE_C, new QTableWidgetItem((educationWindow.getToDate())));
        if(educationWindow.getCurrentCollege())
            ui->tableWidgetEducation->setItem(row, IS_CURR_C, new QTableWidgetItem(("Yes")));
        else
            ui->tableWidgetEducation->setItem( row, IS_CURR_C, new QTableWidgetItem(("No")));

        ui->tableWidgetEducation->setItem( row, FIELD, new QTableWidgetItem((educationWindow.getField())));
        ui->tableWidgetEducation->setItem( row, GPA, new QTableWidgetItem((educationWindow.getGPA())));

        for (int count = 0; count <ui->tableWidgetEducation->columnCount(); count++)
        {
            if (ui->tableWidgetEducation->item(row, count))
                ui->tableWidgetEducation->item(row, count)->setBackgroundColor(QColor(255, 170, 127));
        }
    }
}

void MainWindow::deleteCollegeOnDeleteClicked()
{
    QString msg = "";
    if (ui->tableWidgetEducation->selectedItems().size() <= 0)
    {
        QMessageBox::warning(NULL, tr("Delete College"), tr("Select a College information to be deleted"));
        return;
    }

    QMessageBox::StandardButton reply;
    //QString msg = "Are you sure, you want to delete this row?";
    reply = QMessageBox::question(this, "Delete Row Table", msg + "\nDo you want to continue?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QModelIndexList indexList = ui->tableWidgetEducation->selectionModel()->selectedRows();

        QList<int> rows;
        for (auto listIndex : indexList)
            rows.append(listIndex.row());

        qSort(rows);

        int prev = -1;
        for (int i = rows.count() - 1; i >= 0; i -= 1) {
            int current = rows[i];
            if (current != prev) {
                qDebug() << "row deleted from education table " << current << " data :" << ui->tableWidgetEducation->item(current, WORK_EX_PK)->text().toStdString().c_str();
                ui->tableWidgetEducation->removeRow(current);
                prev = current;
            }
        }
    }
    else
    {
        return;
    }
}

void MainWindow::saveResumeDetailsInDB()
{

}

void MainWindow::exportAsPDF()
{

    QString html =
    "<div align=right>"
       "City, 11/11/2015"
    "</div>"
    "<div align=left>"
       "Sender Name<br>"
       "street 34/56A<br>"
       "121-43 city"
    "</div>"
    "<h1 align=center>DOCUMENT TITLE</h1>"
    "<p align=justify>"
       "document content document content document content document content document content document content document content document content document content document content "
       "document content document content document content document content document content document content document content document content document content document content "
    "</p>"
    "<div align=right>sincerly</div>";

    QString html2 =



            "<head>"

            "<meta http-equiv="//Content-Type" content="//text/html; charset=iso-8859-1" />"

            "<title>Resume | First Last</title>"

            "<meta name="//robots" content="//noindex, nofollow" />"

            "style type="//text/css" media="//all">"

            "html{"

            "background-color:#444;"

            "background: url(/posts/backgrounds/images/20.gif);"

            "padding:0 1em;"

            "}"

            "body { "

            "background-color:#FFF;"

            "font-family:Arial, Helvetica, sans-serif;"

            "padding:2em;"

            "margin:1em auto;"

            "border:2px solid #000;"

            "max-width: 50em;"

            "}"

            "#address{"

            "float:right;"

            "padding-top:2.5em;"

            "}"

            "#contact{"

            "text-align:right;"

            "}"

            ".date {"

            "float:left;"

            "font-size:1em;"

            "margin:0 0 0 -16em;"

            "text-align:right;"

            "}"

            "abbr, acronym{"

            "border-bottom:1px dotted #333;"

            "cursor:help;"

            "}"

            "address{"

            "font-style:italic;"

            "color:#333;"

            "font-size:.9em;"

            "}"

            ".content{"

            "width:32em;"

            "margin:0 0 0 16em;"

            "}"

            ".section{"

            "margin: 0;"

            "padding:1em 0;"

            "}"

            "ul{"

            "padding-left:.5em;"

            "margin-left:.5em;"

            "}"

            "h1{"

           " margin:0 0 .1em 0;"

            "padding:1em 0 0 0;"

            "font-size:1.75em;"

            "border-bottom:3px double #000;"

            "}"

            "h2 {"

            "font-size:1.3em;"

            "font-variant: small-caps;"

            "letter-spacing: .06em;"

            "border-bottom:1px solid #000;"

            "}"

            ".section h3 {"

            "font-size:1em;"

            "font-variant: small-caps;"

            "margin-bottom:0;"

            "width:14em;"

            "}"

           "</style>"

            "<style type="//text/css" media="//print">"

            "body {"

            "background-color:#FFF;"

            "border-width:0 0 0 0;"

            "margin:0;"

            "width:100%"

            "}"

            "</style> "
            "</head>"
            "<body>"
            "<div id="//address">335 Name Street, Unit #, Town, Province, N2H 3Y6</div>"
            "<h1>First Last</h1>"
            "<div id="//contact">3A, Your Major, <abbr title="University of Waterloo">UW</abbr>, 1-519-500-8252, <a href="mailto:YOUREMAILADDRESS@uwaterloo.ca">emailaddress@uwaterloo.ca</a></div>"
            "<div class="//section">"
           " <h2>Summary of Qualifications</h2>"
            "<ul>"
            "<li>Bullet one Bullet one</li>"
           " <li>Bullet two Bullet two</li>"

            "</ul>"
           " </div>"
            "<div class="//section">"
            "<h2>Work Experience</h2>"
            "<div class="//content">"
            "<span class="//date">Start &raquo; End Year</span>"
            "<h3>Job Title One</h3>"
            "<address>Company Name, Address, City Province</address>"
            "<ul>"
            "<li>Bullet one Bullet one</li>"

            "</ul>"
            "<span class="//date">Start &raquo; End Year</span>"
            "<h3>Job Title Two</h3>"
            "<address>Company Name, Address, City Province</address>"
            "<ul>"
            "<li>Bullet one Bullet one</li>"

            "</ul>"
            "<span class="//date">Start &raquo; End Year</span>"
            "<h3>Job Title Three</h3>"
           " <address>Company Name, Address, City Province</address>"
            "</div>"
            "</div>"
            "<div class="//section">"
            "<h2>Volunteer Experience</h2>"
            "<div class="//content">"
            "<span class="//date">Start &raquo; End Year</span>"
            "<h3>Volunteer Job Title</h3>"
            "<address>Company Name, Address, City Province</address>"
            "<ul>"
            "<li>Bullet one Bullet one</li>"

            "</ul>"
            "</div>"
            "</div>"
            "<div class="//section">"
            "<h2>Education</h2>"
            "<ul>"
            "<li>Candidate for Bachelor of Major, University, Province, StartYear - Present</li>"
            "<li>OSSD, Highschool, Town, Province, StartYear-EndYear</li>"
            "</ul>"
            "</div>"
            "<div class="//section">"
            "<h2>Academic Awards</h2>"
            "<ul>"
           " <li>Year, Year, Name of award/Scholarship</li>"
            "</ul>"
            "</div>"
            "</body>"
            "</html>";




    QTextDocument document;
    document.setHtml(html2);
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("test.pdf");
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));
    document.print(&printer);
}
