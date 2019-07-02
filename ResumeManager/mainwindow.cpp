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
#include "technicalskills.h"
#include <windows.h>
#include <shlobj.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidgetMain->setCurrentIndex(0);

    ui->zipLineEdit->setValidator( new QIntValidator(this));

    connect(ui->pushButtonCreateNewResume,SIGNAL(clicked(bool)),this,SLOT(createNewResume()));
    connect(ui->pushButtonEditResume,SIGNAL(clicked(bool)),this,SLOT(EditCurrentResume()));


    //Navigating tab widgets signal connection
    connect(ui->pushButtonBackPersonal,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackWork,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackEducation,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonAdditionalSkils,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));
    connect(ui->pushButtonBackSkills,SIGNAL(clicked(bool)),this,SLOT(setTabWidgetIndex()));

    //validate first tab inputs
     connect(ui->pushButtonWorkEx,SIGNAL(clicked(bool)),this,SLOT(validateFirstTabInputs()));
     connect(ui->pushButtonEducation,SIGNAL(clicked(bool)),this,SLOT(validateSecondTabInputs()));

     connect(ui->listWidgetResumeNames, SIGNAL(itemSelectionChanged()), this, SLOT(getSelectedResumeDataFromDB()));

     //open ediot widnows for Work experience
     connect(ui->pushButtonAddWorkEx, SIGNAL(clicked()),this, SLOT(addNewWorkExClicked()));
     connect(ui->pushButtonEditWorkEx, SIGNAL(clicked()),this, SLOT(addNewWorkExClicked()));
     connect(ui->pushButtonDeleteWorkEx, SIGNAL(clicked()),this, SLOT(deleteWorkExOnDeleteClicked()));

     //open ediot widnows for Education
     connect(ui->pushButtonAddEducation, SIGNAL(clicked()),this, SLOT(addNewCollegeClicked()));
     connect(ui->pushButtonEditEducation, SIGNAL(clicked()),this, SLOT(addNewCollegeClicked()));
     connect(ui->pushButtonDeleteEducation, SIGNAL(clicked()),this, SLOT(deleteCollegeOnDeleteClicked()));

     //open ediot widnows for Tech skills
     connect(ui->pushButtonAddSkill, SIGNAL(clicked()),this, SLOT(addNewTechSkillsClicked()));
     connect(ui->pushButtonEditSkill, SIGNAL(clicked()),this, SLOT(addNewTechSkillsClicked()));
     connect(ui->pushButtonDeleteSkill, SIGNAL(clicked()),this, SLOT(deleteTechSkillsDeleteClicked()));

     ui->tableWidgetWorkEx->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidgetWorkEx->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

     ui->tableWidgetEducation->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidgetEducation->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

     ui->tableWidgetSkills->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidgetSkills->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

     connect(ui->pushButtonSaveInDB,SIGNAL(clicked(bool)),this,SLOT(saveResumeDetailsInDB()));

     connect(ui->lineEditSearchResume,SIGNAL(textChanged(QString)),this,SLOT(filterReumeInListWidget()));

     connect(ui->pushButtonExportAsPDF,SIGNAL(clicked(bool)),this,SLOT(exportAsPDF()));
     connect(ui->pushButtonBrowse, SIGNAL(clicked()), this, SLOT(browseSlot()));

     connect(ui->pushButtonDeleteResume,SIGNAL(clicked()), this, SLOT(deleteExistingResume()));
     connect(ui->radioButtonTemp1, SIGNAL(clicked(bool)), this, SLOT(setResumeTemplate()));
     connect(ui->radioButtonTemp2, SIGNAL(clicked(bool)), this, SLOT(setResumeTemplate()));

     //connectToDatabase();
     fillProficiencyList();
     displayExistingResumesInDB();
     //ui->groupBoxResumeDetails->setEnabled(false);
     enableDisableGroupbBox(false);
     isInEditModeFlag = false;
     ui->radioButtonTemp1->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enableDisableGroupbBox(bool flag)
{
    ui->groupBoxPersonalDetails->setEnabled(flag);
    ui->groupBoxWorkEx->setEnabled(flag);
    ui->groupBoxEducation->setEnabled(flag);
    ui->groupBoxTechSkills->setEnabled(flag);
    ui->groupBoxAddDetails->setEnabled(flag);

    isInEditModeFlag = flag;
}

void MainWindow::EditCurrentResume()
{
    std::string selecteResume;
    if(ui->listWidgetResumeNames->currentItem())
    {
        selecteResume = ui->listWidgetResumeNames->currentItem()->text().toStdString();
    }
    currentResume = selecteResume;
    enableDisableGroupbBox(true);
}

void MainWindow::createNewResume()
{
     ui->listWidgetResumeNames->clearSelection();

     ui->firstNameLineEdit->setText("");
     ui->lastNameLineEdit->setText("");
     ui->addressLineEdit->setText("");
     ui->cityLineEdit->setText("");
     ui->stateLineEdit->setText("");
     ui->zipLineEdit->setText("");
     ui->mobileLineEdit->setText("");
     ui->emailLineEdit->setText("");

     while (ui->tableWidgetWorkEx->rowCount() > 0)
          ui->tableWidgetWorkEx->removeRow(0);

     while (ui->tableWidgetEducation->rowCount() > 0)
          ui->tableWidgetEducation->removeRow(0);

     while (ui->tableWidgetSkills->rowCount() > 0)
          ui->tableWidgetSkills->removeRow(0);

     ui->textEditAdditionalSkills->setPlainText("");
     ui->lineEditResumeName->setText("");


      enableDisableGroupbBox(true);

      //ui->lineEditResumeName->setText("new_resume");
}

void MainWindow::fillProficiencyList()
{
    gProficiencyLevelList.push_back("No Experience");
    gProficiencyLevelList.push_back("Beginner");
    gProficiencyLevelList.push_back("Intermediate");
    gProficiencyLevelList.push_back("Expert");
}

void MainWindow::filterReumeInListWidget()
{
    int cursorPosition = ui->lineEditSearchResume->cursorPosition();
    ui->lineEditSearchResume->setText(ui->lineEditSearchResume->text().toUpper());  /*===setting the text to Uppercase*/
    ui->lineEditSearchResume->setCursorPosition(cursorPosition);

    std::string text = ui->lineEditSearchResume->text().toStdString();

    /*else -- if search by number directly use below-- note removed ^ sign from %1 */
    QRegExp regExp(QString("%1").arg(ui->lineEditSearchResume->text().replace(QRegExp("\\$(?!\\])"), tr("[\\$]"))).replace(QChar('~'), tr("$")));
    regExp.setCaseSensitivity(Qt::CaseInsensitive);

    QList<QListWidgetItem*> listItem;
    for(int index =0; index<ui->listWidgetResumeNames->count(); index++)
     listItem.append(ui->listWidgetResumeNames->item(index));

    if(!text.empty())
    {
       for(int i=0; i <listItem.size(); i++ )
       {
           QString s = listItem[i]->text();

          if(s.contains(regExp))
          {
             listItem[i]->setHidden(false);
          }
          else
          {
              listItem[i]->setHidden(true);
          }
       }
    }
    else
    {
       /*this loop is for diplaying all the items when lineedit text is emptied*/
       for (int i = 0; i<listItem.size(); i++)
       {
           listItem[i]->setHidden(false);
       }
    }

}

void MainWindow::deleteExistingResume()
{

    ResumeNames obj =  findResumePK();
    //obj.mResume_pk delete this primary key from the database
    std::string msg;
    bool status =DatabaseCommunicator::Instance()->deleteResumeFromDB(obj.mResume_pk,msg);
    if(status)
    {
        QMessageBox::information(NULL, QObject::tr("Delete Resume"), tr(msg.c_str()));

    }
    else
    {
        QMessageBox::critical(NULL, QObject::tr("Delete Resume"), tr(msg.c_str()));
        return;
    }

    displayExistingResumesInDB();
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

       if(gResumeNamesList.size() >0)
              enableDisableGroupbBox(false);
       else
              enableDisableGroupbBox(true);
    }
    else
    {
        QMessageBox::critical(NULL, QObject::tr("Database Connection"), tr("Database not connected"));
    }
}

void MainWindow::getSelectedResumeDataFromDB()
{
    if(isInEditModeFlag)
    {
        QMessageBox::critical(NULL, tr("Resume Switch"), tr("Resume : %1 is in edit mode, save it first before switching.").arg(currentResume.c_str()));
        return;
    }
    std::string message;
    mResumeManagerBaseObj = {};//resetting structure

    ResumeNames resuObj =findResumePK();
    mResumeManagerBaseObj.mResume_pk = resuObj.mResume_pk;
    mResumeManagerBaseObj.mResume_name = resuObj.mResume_name;

    ui->lineEditResumeName->setText(QString::fromUtf8(mResumeManagerBaseObj.mResume_name.c_str()));

    if(resuObj.mResume_pk !=-1)
    {
        bool status = DatabaseCommunicator::Instance()->getPersonalDetailFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);

        if(status)
        {
            qDebug()<<"first name:" << mResumeManagerBaseObj.mPersonalDetails.mFirst_name.c_str();
            ui->firstNameLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mPersonalDetails.mFirst_name.c_str()));
            ui->lastNameLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mPersonalDetails.mLast_name.c_str()));
            ui->mobileLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mPersonalDetails.mMobile.c_str()));
            ui->emailLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mPersonalDetails.mEmail.c_str()));
            ui->textEditAdditionalSkills->setPlainText(QString::fromUtf8(mResumeManagerBaseObj.mPersonalDetails.mAdditional_information.c_str()));
        }

        bool statusAddres = DatabaseCommunicator::Instance()->getAddressFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);
        if(statusAddres)
        {
            ui->addressLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mAddress.mStreet_address.c_str()));
            ui->cityLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mAddress.mCity.c_str()));
            ui->stateLineEdit->setText(QString::fromUtf8(mResumeManagerBaseObj.mAddress.mState.c_str()));
            ui->zipLineEdit->setText(QString::number(mResumeManagerBaseObj.mAddress.mZip));
        }

        bool statusWorkex = DatabaseCommunicator::Instance()->getWorkExDetailsFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);
        if(statusWorkex)
        {
            while (ui->tableWidgetWorkEx->rowCount() > 0)
                 ui->tableWidgetWorkEx->removeRow(0);

            for(int count = 0; count <mResumeManagerBaseObj.mWorkExList.size(); count++)
            {
                ui->tableWidgetWorkEx->insertRow( ui->tableWidgetWorkEx->rowCount());
                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, WORK_EX_PK, new QTableWidgetItem((QString::number(mResumeManagerBaseObj.mWorkExList[count].mWork_experience_pk))));
                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, COMPANY_NAME, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mWorkExList[count].mCompany_name.c_str())));
                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, FROM_DATE_W, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mWorkExList[count].mFrom_date.c_str())));
                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, TO_DATE_W, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mWorkExList[count].mTo_date.c_str())));
                if(mResumeManagerBaseObj.mWorkExList[count].mCurrent)
                    ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, IS_CURR_W, new QTableWidgetItem(("Yes")));
                else
                    ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, IS_CURR_W, new QTableWidgetItem(("No")));

                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, TITLE, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mWorkExList[count].mTitle.c_str())));
                ui->tableWidgetWorkEx->setItem( ui->tableWidgetWorkEx->rowCount() - 1, JD, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mWorkExList[count].mJob_description.c_str())));

            }
        }

        bool statusEdu = DatabaseCommunicator::Instance()->getEducationDetailsFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);
        if(statusEdu)
        {
            while (ui->tableWidgetEducation->rowCount() > 0)
                 ui->tableWidgetEducation->removeRow(0);

           for(int count = 0; count <mResumeManagerBaseObj.mEducationDetailsList.size(); count++)
           {
               ui->tableWidgetEducation->insertRow( ui->tableWidgetEducation->rowCount());
               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, EDU_PK, new QTableWidgetItem((QString::number(mResumeManagerBaseObj.mEducationDetailsList[count].mEducation_details_pk))));
               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, COLLEGE_NAME, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mEducationDetailsList[count].mCollege_name.c_str())));
               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, FROM_DATE_C, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mEducationDetailsList[count].mFrom_date.c_str())));
               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, TO_DATE_C, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mEducationDetailsList[count].mTo_date.c_str())));
               if(mResumeManagerBaseObj.mEducationDetailsList[count].mStill_pursuing)
                   ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, IS_CURR_C, new QTableWidgetItem(("Yes")));
               else
                   ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, IS_CURR_C, new QTableWidgetItem(("No")));

               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, FIELD, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mEducationDetailsList[count].mField.c_str())));
               ui->tableWidgetEducation->setItem( ui->tableWidgetEducation->rowCount() - 1, GPA, new QTableWidgetItem((QString::number(mResumeManagerBaseObj.mEducationDetailsList[count].mGPA))));


           }
        }

        bool statusTechSkills = DatabaseCommunicator::Instance()->getTechnicalSkillsFromDB(resuObj.mResume_pk,mResumeManagerBaseObj,message);
        if(statusTechSkills)
        {
            while (ui->tableWidgetSkills->rowCount() > 0)
                 ui->tableWidgetSkills->removeRow(0);

            for(int count = 0; count <mResumeManagerBaseObj.mTechSkillsList.size(); count++)
            {
                ui->tableWidgetSkills->insertRow( ui->tableWidgetSkills->rowCount());
                ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, TECH_PK, new QTableWidgetItem((QString::number(mResumeManagerBaseObj.mTechSkillsList[count].mTech_skills_pk))));
                ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, SKILL_NAME, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mTechSkillsList[count].mSkill_name.c_str())));
                ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, PROFICIENCY, new QTableWidgetItem(QString::fromUtf8(mResumeManagerBaseObj.mTechSkillsList[count].mProficiency.c_str())));
                ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, YEARS_USED, new QTableWidgetItem((QString::number(mResumeManagerBaseObj.mTechSkillsList[count].mYears_used))));

            }
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


bool MainWindow::validatePersonalDetailsAndAddress()
{
    if(ui->firstNameLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("First Name is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->lastNameLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Last Name is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->addressLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Address is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->cityLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("City is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->stateLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("State is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->zipLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Zip is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->mobileLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Mobile is not filled, it is a mandatory field"));
        return false;
    }
    else if (ui->emailLineEdit->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Personal Details"), tr("Email is not filled, it is a mandatory field"));
        return false;
    }

    return true;
}

void MainWindow::validateFirstTabInputs()
{
    if(validatePersonalDetailsAndAddress())
        setTabWidgetIndex();
    else
        return;
}

void MainWindow::validateSecondTabInputs()
{
    setTabWidgetIndex();
}
void MainWindow::addNewTechSkillsClicked()
{
    if (sender()->objectName() == "pushButtonAddSkill")
    {
        technicalSkills techSkillsWindow("Add");
        techSkillsWindow.setWindowTitle("Enter Technical Skills");

        techSkillsWindow.setSkillName("");
        techSkillsWindow.setProficieny("");
        techSkillsWindow.setYearsUsed(0);

        int res = techSkillsWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetSkills->insertRow( ui->tableWidgetSkills->rowCount());
        ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, TECH_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, SKILL_NAME, new QTableWidgetItem((techSkillsWindow.getSkillName())));
        ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, PROFICIENCY, new QTableWidgetItem((techSkillsWindow.getProficieny())));
        ui->tableWidgetSkills->setItem( ui->tableWidgetSkills->rowCount() - 1, YEARS_USED, new QTableWidgetItem(QString::number(techSkillsWindow.getYearsUsed())));

        for (int count = 0; count <  ui->tableWidgetSkills->columnCount(); count++)
        {
            if ( ui->tableWidgetSkills->item( ui->tableWidgetSkills->rowCount() -1, count))
                ui->tableWidgetSkills->item( ui->tableWidgetSkills->rowCount()-1 , count)->setBackgroundColor(QColor(255, 170, 127));
        }

        ui->tableWidgetSkills->scrollToBottom();
    }

    if (sender()->objectName() == "pushButtonEditSkill")
    {
        if (ui->tableWidgetSkills->selectedItems().size() <= 0)
        {
            QMessageBox::warning(NULL, tr("Edit Technical Skill"), tr("Select a row to edit."));
            return;
        }
        int row = ui->tableWidgetSkills->selectedItems().at(0)->row();
        if (row < 0)
            return;

         // TECH_PK,SKILL_NAME,PROFICIENCY,YEARS_USED
        technicalSkills techSkillsWindow("Edit");
        techSkillsWindow.setWindowTitle("Edit Technical Skill for row:" + QString::number(ui->tableWidgetSkills->currentRow() + 1));

        if (ui->tableWidgetSkills->item(row, SKILL_NAME))
            techSkillsWindow.setSkillName( ui->tableWidgetSkills->item(row, SKILL_NAME)->text());

        if (ui->tableWidgetSkills->item(row, PROFICIENCY))
            techSkillsWindow.setProficieny( ui->tableWidgetSkills->item(row, PROFICIENCY)->text());

        if (ui->tableWidgetSkills->item(row, YEARS_USED))
            techSkillsWindow.setYearsUsed( ui->tableWidgetSkills->item(row, YEARS_USED)->text().toInt());

        int res = techSkillsWindow.exec();
        if (res == QDialog::Rejected)
            return;

        ui->tableWidgetSkills->setItem(row, TECH_PK, new QTableWidgetItem((QString::number(-1))));
        ui->tableWidgetSkills->setItem( row, SKILL_NAME, new QTableWidgetItem((techSkillsWindow.getSkillName())));
        ui->tableWidgetSkills->setItem( row, PROFICIENCY, new QTableWidgetItem((techSkillsWindow.getProficieny())));
        ui->tableWidgetSkills->setItem( row, YEARS_USED, new QTableWidgetItem(QString::number(techSkillsWindow.getYearsUsed())));

        for (int count = 0; count <ui->tableWidgetSkills->columnCount(); count++)
        {
            if (ui->tableWidgetSkills->item(row, count))
                ui->tableWidgetSkills->item(row, count)->setBackgroundColor(QColor(255, 170, 127));
        }
    }
}

void MainWindow::deleteTechSkillsDeleteClicked()
{
    QString msg = "";
    if (ui->tableWidgetSkills->selectedItems().size() <= 0)
    {
        QMessageBox::warning(NULL, tr("Delete Technical Skill"), tr("Select a job to be deleted"));
        return;
    }

    QMessageBox::StandardButton reply;
    //QString msg = "Are you sure, you want to delete this row?";
    reply = QMessageBox::question(this, "Delete Row Table", msg + "\nDo you want to continue?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QModelIndexList indexList = ui->tableWidgetSkills->selectionModel()->selectedRows();

        QList<int> rows;
        for (auto listIndex : indexList)
            rows.append(listIndex.row());

        qSort(rows);

        int prev = -1;
        for (int i = rows.count() - 1; i >= 0; i -= 1) {
            int current = rows[i];
            if (current != prev) {
                qDebug() << "row deleted from work experience table " << current << " data :" << ui->tableWidgetSkills->item(current, TECH_PK)->text().toStdString().c_str();
                ui->tableWidgetSkills->removeRow(current);
                prev = current;
            }
        }
    }
    else
    {
        return;
    }
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


        if (ui->tableWidgetWorkEx->item(row, COMPANY_NAME))
            workExWindow.setCompanyName( ui->tableWidgetWorkEx->item(row, COMPANY_NAME)->text());

        if (ui->tableWidgetWorkEx->item(row, FROM_DATE_W))
            workExWindow.setFromDate( ui->tableWidgetWorkEx->item(row, FROM_DATE_W)->text());

        if (ui->tableWidgetWorkEx->item(row, TO_DATE_W))
            workExWindow.setToDate( ui->tableWidgetWorkEx->item(row, TO_DATE_W)->text());

        if (ui->tableWidgetWorkEx->item(row, IS_CURR_W))
        {
            if(ui->tableWidgetWorkEx->item(row, IS_CURR_W)->text() == "Yes")
                workExWindow.setCurrentJob(1);
            else
                workExWindow.setCurrentJob(0);
        }


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
        {
            if(ui->tableWidgetEducation->item(row, IS_CURR_C)->text() == "Yes")
                educationWindow.setCurrentCollege(1);
            else
                educationWindow.setCurrentCollege(0);
        }


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
    if(validatePersonalDetailsAndAddress())
    {
        if(ui->lineEditResumeName->text().toStdString().empty())
        {
            QMessageBox::warning(NULL, tr("Fill Resume Name"), tr("Resume Name is mandatory, please fill a unique resume name."));
            return;
        }

        mResumeManagerBaseObj.mResume_name = ui->lineEditResumeName->text().toStdString();
        //filling personal details first
        mResumeManagerBaseObj.mPersonalDetails.mFirst_name = ui->firstNameLineEdit->text().toStdString();
        mResumeManagerBaseObj.mPersonalDetails.mLast_name = ui->lastNameLineEdit->text().toStdString();
        mResumeManagerBaseObj.mPersonalDetails.mMobile = ui->mobileLineEdit->text().toStdString();
        mResumeManagerBaseObj.mPersonalDetails.mEmail = ui->emailLineEdit->text().toStdString();
        mResumeManagerBaseObj.mPersonalDetails.mAdditional_information = ui->textEditAdditionalSkills->toPlainText().toStdString();

        //filling address details
        mResumeManagerBaseObj.mAddress.mStreet_address = ui->addressLineEdit->text().toStdString();
        mResumeManagerBaseObj.mAddress.mCity = ui->cityLineEdit->text().toStdString();
        mResumeManagerBaseObj.mAddress.mState = ui->stateLineEdit->text().toStdString();
        mResumeManagerBaseObj.mAddress.mZip = ui->zipLineEdit->text().toInt();

        //filling Education details
        std::vector<EducationDetails> tempEducationDetailsList;
        fillEducationDetailsList(tempEducationDetailsList);
        mResumeManagerBaseObj.mEducationDetailsList = tempEducationDetailsList;

        //filling Work experience details
        std::vector<WorkExperience> tempWorkExList;
        fillWorkExDetailsList(tempWorkExList);
        mResumeManagerBaseObj.mWorkExList = tempWorkExList;

        //filling the technical details
        std::vector<TechnicalSkills> tempTechSkillsList;
        fillTechSkillsList(tempTechSkillsList);
        mResumeManagerBaseObj.mTechSkillsList = tempTechSkillsList;

        std::string message;
        if(isInEditModeFlag)
        {
            bool status= DatabaseCommunicator::Instance()->updateResumeInDB(mResumeManagerBaseObj,message);
            if(status)
            {
                QMessageBox::information(NULL, QObject::tr("Update Resume"), tr(message.c_str()));
            }
            else
            {
                 QMessageBox::critical(NULL, QObject::tr("Update Resume"), tr(message.c_str()));
            }
        }
        else
        {
            bool status= DatabaseCommunicator::Instance()->saveResumeInformationInDB(mResumeManagerBaseObj,message);
            if(status)
            {
                QMessageBox::information(NULL, QObject::tr("Save Resume"), tr(message.c_str()));
            }
            else
            {
                 QMessageBox::critical(NULL, QObject::tr("Save Resume"), tr(message.c_str()));
            }
        }



    }

    isInEditModeFlag = false;
    displayExistingResumesInDB();


}
void MainWindow::fillEducationDetailsList(std::vector<EducationDetails> &tempEducationDetailsList)
{
    for (int rowNum = 0; rowNum < ui->tableWidgetEducation->rowCount(); rowNum++)
    {
        EducationDetails obj;
        obj.mCollege_name = ui->tableWidgetEducation->item(rowNum, COLLEGE_NAME)->text().toStdString();
        obj.mFrom_date = ui->tableWidgetEducation->item(rowNum, FROM_DATE_C)->text().toStdString();
        obj.mTo_date = ui->tableWidgetEducation->item(rowNum, TO_DATE_C)->text().toStdString();

        if (ui->tableWidgetEducation->item(rowNum, IS_CURR_C))
        {
            if(ui->tableWidgetEducation->item(rowNum, IS_CURR_C)->text() == "Yes")
            {
               obj.mStill_pursuing = 1;
            }
            else
                obj.mStill_pursuing =0;
        }

        if (ui->tableWidgetEducation->item(rowNum, FIELD))
            obj.mField = ui->tableWidgetEducation->item(rowNum, FIELD)->text().toStdString();

        if (ui->tableWidgetEducation->item(rowNum, GPA))
            obj.mGPA = ui->tableWidgetEducation->item(rowNum, GPA)->text().toInt();

        tempEducationDetailsList.push_back(obj);
    }
}
void MainWindow::fillWorkExDetailsList(std::vector<WorkExperience> &tempWorkExList)
{
    for (int rowNum = 0; rowNum < ui->tableWidgetWorkEx->rowCount(); rowNum++)
    {
        WorkExperience obj;
        obj.mCompany_name = ui->tableWidgetWorkEx->item(rowNum, COMPANY_NAME)->text().toStdString();
        obj.mFrom_date = ui->tableWidgetWorkEx->item(rowNum, FROM_DATE_W)->text().toStdString();
        obj.mTo_date = ui->tableWidgetWorkEx->item(rowNum, TO_DATE_W)->text().toStdString();

        if (ui->tableWidgetWorkEx->item(rowNum, IS_CURR_W))
        {
            if(ui->tableWidgetWorkEx->item(rowNum, IS_CURR_W)->text() == "Yes")
            {
               obj.mCurrent = 1;
            }
            else
                obj.mCurrent =0;
        }

        if (ui->tableWidgetWorkEx->item(rowNum, TITLE))
            obj.mTitle = ui->tableWidgetWorkEx->item(rowNum, TITLE)->text().toStdString();

        if (ui->tableWidgetWorkEx->item(rowNum, JD))
            obj.mJob_description = ui->tableWidgetWorkEx->item(rowNum, JD)->text().toStdString();

        tempWorkExList.push_back(obj);
    }
}
 void MainWindow::fillTechSkillsList(std::vector<TechnicalSkills> &tempTechSkillsList)
 {
     for (int rowNum = 0; rowNum < ui->tableWidgetSkills->rowCount(); rowNum++)
     {
         // TECH_PK,SKILL_NAME,PROFICIENCY,YEARS_USED
         TechnicalSkills obj;
         obj.mSkill_name = ui->tableWidgetSkills->item(rowNum, SKILL_NAME)->text().toStdString();
         obj.mProficiency = ui->tableWidgetSkills->item(rowNum, PROFICIENCY)->text().toStdString();
         obj.mYears_used = ui->tableWidgetSkills->item(rowNum, YEARS_USED)->text().toInt();

         tempTechSkillsList.push_back(obj);
     }
 }

 void MainWindow::browseSlot()
 {
     QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
            "/home",QFileDialog::ShowDirsOnly   | QFileDialog::DontResolveSymlinks);
        ui->lineEditDirectoryPath->setText(dir);
 }

 QString MainWindow::setResumeTemplate()
 {

     QString body;

     return body;

 }

void MainWindow::exportAsPDF()
{
    QDir dir;
    if(!dir.exists(ui->lineEditDirectoryPath->text()))
    {
        QMessageBox::warning(NULL, tr("Export Wafer Maps"), tr("The directory does not exist!"));
        return;
    }

    QFile file("default.css");
    file.open(QFile::ReadOnly | QFile::Text);
    QString styleSheet = QLatin1String(file.readAll());
    std::stringstream professional_ex ;

    professional_ex<< "<h2 id="//professional-experience">Professional Experience</h2>"
                      ;
    for (int rowNum = 0; rowNum < ui->tableWidgetWorkEx->rowCount(); rowNum++)
    {

        if(ui->tableWidgetWorkEx->item(rowNum, IS_CURR_W)->text() == "Yes")
        {
            professional_ex << "<h6><em>" +
                                ui->tableWidgetWorkEx->item(rowNum, FROM_DATE_W)->text().toStdString()
                               + "- " + "Curently Working"
                               + "</em></h6>"
                               + "<h3>"
                               + ui->tableWidgetWorkEx->item(rowNum, COMPANY_NAME)->text().toStdString()
                               +"-"
                               + ui->tableWidgetWorkEx->item(rowNum, TITLE)->text().toStdString()
                               + "</h3>"
                               + "<p>"
                               + ui->tableWidgetWorkEx->item(rowNum, JD)->text().toStdString()
                                 + "</p>"
                               ;
        }
        else if (ui->tableWidgetWorkEx->item(rowNum, IS_CURR_W)->text() == "No")
        {
            professional_ex << "<h6><em>" +
                                ui->tableWidgetWorkEx->item(rowNum, FROM_DATE_W)->text().toStdString()
                               + "- " + ui->tableWidgetWorkEx->item(rowNum, TO_DATE_W)->text().toStdString()
                               + "</em></h6>"
                               + "<h3>"
                               + ui->tableWidgetWorkEx->item(rowNum, COMPANY_NAME)->text().toStdString()
                               +"-"
                               + ui->tableWidgetWorkEx->item(rowNum, TITLE)->text().toStdString()
                               + "</h3>"
                               + "<p>"
                               + ui->tableWidgetWorkEx->item(rowNum, JD)->text().toStdString()
                                 + "</p>"
                               ;
        }
      }


    std::stringstream education_ex ;

    education_ex<< "<h2 >Education</h2>"
                      ;
    for (int rowNum = 0; rowNum < ui->tableWidgetEducation->rowCount(); rowNum++)
    {
        if( ui->tableWidgetEducation->item(rowNum, IS_CURR_C)->text() == "Yes")
        {
            education_ex << "<h6><em>" +
                                ui->tableWidgetEducation->item(rowNum, FROM_DATE_C)->text().toStdString()
                               + "- " + "Currently Pursuing"
                               + "</em></h6>"
                               + "<h3>"
                               + ui->tableWidgetEducation->item(rowNum, COLLEGE_NAME)->text().toStdString()
                               + "</h3>"
                               + "<p>"
                               + ui->tableWidgetEducation->item(rowNum, FIELD)->text().toStdString()
                               + " - GPA "
                               + ui->tableWidgetEducation->item(rowNum, GPA)->text().toStdString()
                                 + "</p>"
                               ;
        }
        else if( ui->tableWidgetEducation->item(rowNum, IS_CURR_C)->text() == "No")
        {
            education_ex << "<h6><em>" +
                                ui->tableWidgetEducation->item(rowNum, FROM_DATE_C)->text().toStdString()
                               + "- " + ui->tableWidgetEducation->item(rowNum, TO_DATE_C)->text().toStdString()
                               + "</em></h6>"
                               + "<h3>"
                               + ui->tableWidgetEducation->item(rowNum, COLLEGE_NAME)->text().toStdString()
                               + "</h3>"
                               + "<p>"
                               + ui->tableWidgetEducation->item(rowNum, FIELD)->text().toStdString()
                               + " - GPA "
                               + ui->tableWidgetEducation->item(rowNum, GPA)->text().toStdString()
                                 + "</p>"
                               ;
        }

      }

    std::stringstream technical ;

    technical<<  "<h4 >Technical Skills</h4>"
                  << "<ul>"
                      ;
    for (int rowNum = 0; rowNum < ui->tableWidgetSkills->rowCount(); rowNum++)
    {

        technical <<    " <li>"
                        + ui->tableWidgetSkills->item(rowNum, SKILL_NAME)->text().toStdString()
                        + " - "
                        + ui->tableWidgetSkills->item(rowNum, PROFICIENCY)->text().toStdString()
                        + "</li>"
                        ;



      }
    technical<< "</ul> ";



    QString htmlHeader =
    "<link href="//https://fonts.googleapis.com/css?family=Montserrat:300,400i,500,800" rel="stylesheet"/>"+
    "<link href="//https://fonts.googleapis.com/css?family=Fira+Sans:200,400,400i,600,900" rel="stylesheet"/>"
    ;

    QString body =
            "<body class="//ma0 ">"
            "<STYLE TYPE="//text/css" MEDIA="screen, projection">"
            "<!--"
             "<link rel="//stylesheet" type="text/css" href="./default.css"  />"
            "-->"
            "</STYLE>"
                "<div class="//grid-layout-1">"
                    "<main class="//main" role="main" id="mainContent">"
                      "<h1 >"
                       + ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text()+ "</h1>"
                       " <p> "
                        + ui->textEditAdditionalSkills->toPlainText() +
                      + "</p>"
                      + "<div class="//grid">"
                       +     "<div class="//col -span-cols-6 -m-right-2">"

                       + QString::fromStdString(professional_ex.str())
                       + QString::fromStdString(education_ex.str())

                       + "</div>"
                        + "<div class="//col -span-cols-4 -p-left-3">"
                        + QString::fromStdString(technical.str()) +
                        + "<h2 >Contacts</h2>"

                       + " <ul>"
                          + " <li><a >" +
                           ui->emailLineEdit->text() +
                          + "</a></li>"

                           + "<li>" +
                             ui->mobileLineEdit->text() +
                           +  "</li>"

                            +  " </ul>"
                          + "</div>"


                         + " <div ></div>"
                  + "</main>"
           + "<footer class="//-m-auto -border-top -em-08 -lineheight-1-3 footer -text-left">"

             +" </footer>"

             +"  </div>"

          +" </body>"
          ;

    QString final =body;

    QTextDocument document;
    //document.setDefaultStyleSheet(styleSheet);
    //document.addResource( QTextDocument::StyleSheetResource, QUrl( "default.css" ), css );
    document.setHtml(final);
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(ui->lineEditDirectoryPath->text()+"\\" + ui->lineEditResumeName->text() +".pdf");
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));
    document.print(&printer);

    QMessageBox::information(NULL, QObject::tr("Export Resume"), tr("Resume has been successfully saved at location  %1\\%2.pdf").arg(ui->lineEditDirectoryPath->text().toStdString().c_str()).arg( ui->lineEditResumeName->text().toStdString().c_str()));
}
