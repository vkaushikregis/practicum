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
    //connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
   // connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackPersonal,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackWork,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonAdditionalSkils,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));

    //adding/deleting skill's table rows
    connect(ui->pushButtonAddSkill,SIGNAL(clicked(bool)),this,SLOT(addDeleteSkills()));
    connect(ui->pushButtonDeleteSkill,SIGNAL(clicked(bool)),this,SLOT(addDeleteSkills()));
    /*std::string latex =
            "\\documentclass{article}"
            "\\begin{document}"
            "Hello world!"
            "\\end{document}";
        try {
            std::string pdf;
            std::string info;
            texcaller::convert(pdf, info, latex, "LaTeX", "PDF", 5);
           // std::cout << "Generated PDF of " << pdf.size() << " bytes.";
            //std::cout << " Details:" << std::endl << std::endl << info;
        } catch (std::domain_error &e) {
           // std::cout << "Error: " << e.what() << std::endl;
        }*/
    /*std::string latex =
                "\\documentclass{article}"
                "\\begin{document}"
                "Hello world!"
                "\\end{document}";
    std::string pdf;
    std::string info;
    ::texcaller::convert(pdf, info, latex, "LaTeX", "PDF", 5);*/
    //::texcaller::

    //validate first tab inputs
     connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(validateFirstTabInputs()));
     connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(validateSecondTabInputs()));
     connect(ui->pushButtonExportAsPDF,SIGNAL(clicked(bool)),this,SLOT(exportAsPDF()));

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

    if(status)
    {
        qDebug()<<"gResumeNamesList .size " <<gResumeNamesList.size();
        for(int count =0; count <gResumeNamesList.size(); count++)
            qDebug()<<"existing reumes name" <<gResumeNamesList[count].mResume_name.c_str();
    }
    else
    {
        QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
    }
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
    setTabWidgetIndex();
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
