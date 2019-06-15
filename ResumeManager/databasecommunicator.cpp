
#include "databasecommunicator.h"
#include <QtWidgets/QMessageBox>
#include <sstream>
#include <QtWidgets/QMessageBox>
#include <stdio.h>
#include <string.h>
#include "globalproductdata.h"

DatabaseCommunicator* DatabaseCommunicator::_instance = NULL;

DatabaseCommunicator::DatabaseCommunicator()
{
    isDatabaseConnected = false;

    userName = "root";
    password = "root";
    databaseName = "resumemanager";
    hostName = "127.0.0.1";

    //create database connection here
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(databaseName);
    db.open();

    if (db.open())
    {
        isDatabaseConnected = true;
    }
    else
    {
        isDatabaseConnected = false;
        return ;
    }
}
DatabaseCommunicator::~DatabaseCommunicator()
{
    db.close();
}

DatabaseCommunicator* DatabaseCommunicator::Instance()
{
    if(_instance == NULL)
        _instance = new DatabaseCommunicator;
    return _instance;
}

bool DatabaseCommunicator::getExistingResumesFromDB(std::string &msg)
{
    gResumeNamesList.clear();
    if(db.open())
    {
        QSqlQuery query;
        query.exec("SELECT resume_name_pk,resume_name FROM resumemanager.resumename");
        if(!query.exec())
        {
            msg = "There are no resumes in the database currently";
            return false;
        }
        while (query.next()) {
            ResumeNames resumeObj;
            resumeObj.mResume_pk = query.value(0).toInt();
            resumeObj.mResume_name = query.value(1).toString().toStdString();
            gResumeNamesList.push_back(resumeObj);

        }
    }

    return true;
}
  bool DatabaseCommunicator::getPersonalDetailFromDB(int resume_fk,ResumeManagerBase &resuObj,std::string &msg)
 {
      if(db.open())
      {
          QSqlQuery query;
          QString preparedStmt = "SELECT personal_details_pk,first_name,last_name,mobile,email,resume_name_fk FROM resumemanager.personal_details where resume_name_fk =" + QString::number(resume_fk);
          query.exec(preparedStmt);
          if(!query.exec())
          {
              msg = "There is no personal detail information stored for resume_fk " + resume_fk;
              return false;
          }
          if (query.next()) {
              resuObj.mPersonalDetails.mPersonal_details_pk = query.value(0).toInt();
              resuObj.mPersonalDetails.mFirst_name = query.value(1).toString().toStdString();
              resuObj.mPersonalDetails.mLast_name = query.value(2).toString().toStdString();
              resuObj.mPersonalDetails.mMobile = query.value(3).toInt();
              resuObj.mPersonalDetails.mEmail = query.value(4).toString().toStdString();
              resuObj.mPersonalDetails.mResume_fk = query.value(5).toInt();
          }
      }

     return true;
 }

  bool DatabaseCommunicator::getAddressFromDB(int resume_fk,ResumeManagerBase &resuObj,std::string &msg)
  {
      if(db.open())
      {
          QSqlQuery query;
          QString preparedStmt = "SELECT address_pk,streetaddress,city,state,zip,resume_name_fk FROM resumemanager.address where resume_name_fk =" + QString::number(resume_fk);
          query.exec(preparedStmt);
          if(!query.exec())
          {
              msg = "There is no address stored for resume_fk " + resume_fk;
              return false;
          }
          if (query.next()) {
              resuObj.mAddress.mAddress_pk = query.value(0).toInt();
              resuObj.mAddress.mStreet_address = query.value(1).toString().toStdString();
              resuObj.mAddress.mCity = query.value(2).toString().toStdString();
              resuObj.mAddress.mState = query.value(3).toString().toStdString();
              resuObj.mAddress.mZip = query.value(4).toInt();
              resuObj.mAddress.mResume_fk = query.value(5).toInt();
          }
      }

     return true;
  }


   bool DatabaseCommunicator::getEducationDetailsFromDB(int resume_fk,ResumeManagerBase &resuObj,std::string &msg)
   {
       if(db.open())
       {
           QSqlQuery query;
           QString preparedStmt = "SELECT education_details_pk,college_name,from_date,to_date,still_pursuing,field,GPA,resume_name_fk FROM resumemanager.education_details where resume_name_fk =" + QString::number(resume_fk);
           query.exec(preparedStmt);
           if(!query.exec())
           {
               msg = "There is no education details stored for resume_fk " + resume_fk;
               return false;
           }
           resuObj.mEducationDetailsList.clear();
           while (query.next()) {
               EducationDetails eduObj;
               eduObj.mEducation_details_pk = query.value(0).toInt();
               eduObj.mCollege_name = query.value(1).toString().toStdString();
               eduObj.mFrom_date = query.value(2).toString().toStdString();
               eduObj.mTo_date = query.value(3).toString().toStdString();
               eduObj.mStill_pursuing = query.value(4).toInt();
               eduObj.mField = query.value(5).toString().toStdString();
               eduObj.mGPA = query.value(6).toDouble();
               eduObj.mResume_fk = query.value(7).toInt();

               resuObj.mEducationDetailsList.push_back(eduObj);
           }
       }

      return true;
   }

   bool DatabaseCommunicator::getWorkExDetailsFromDB(int resume_fk,ResumeManagerBase &resuObj,std::string &msg)
   {
       if(db.open())
       {
           QSqlQuery query;
           QString preparedStmt = "SELECT work_ex_pk,company_name,from_date,to_date,job_description,currently_pursuing,resume_name_fk FROM resumemanager.work_experience where resume_name_fk =" + QString::number(resume_fk);
           query.exec(preparedStmt);
           if(!query.exec())
           {
               msg = "There is no work experience stored for resume_fk " + resume_fk;
               return false;
           }
           resuObj.mWorkExList.clear();
           while (query.next()) {
               WorkExperience workObj;
               workObj.mWork_experience_pk = query.value(0).toInt();
               workObj.mCompany_name = query.value(1).toString().toStdString();
               workObj.mFrom_date = query.value(2).toString().toStdString();
               workObj.mTo_date = query.value(3).toString().toStdString();
               workObj.mJob_description = query.value(4).toInt();
               workObj.mCurrent = query.value(5).toInt();
               workObj.mResume_fk = query.value(6).toInt();

               resuObj.mWorkExList.push_back(workObj);
           }
       }

      return true;
   }
   bool DatabaseCommunicator::getTechnicalSkillsFromDB(int resume_fk,ResumeManagerBase &resuObj,std::string &msg)
   {
       if(db.open())
       {
           QSqlQuery query;
           QString preparedStmt = "SELECT technical_skills_pk,skill_name,proficiency,years_used,resume_name_fk FROM resumemanager.technical_skilss where resume_name_fk =" + QString::number(resume_fk);
           query.exec(preparedStmt);
           if(!query.exec())
           {
               msg = "There is no work experience stored for resume_fk " + resume_fk;
               return false;
           }
           resuObj.mTechSkillsList.clear();
           while (query.next()) {
               TechnicalSkills techObj;
               techObj.mTech_skills_pk = query.value(0).toInt();
               techObj.mSkill_name = query.value(1).toString().toStdString();
               techObj.mProficiency = query.value(2).toString().toStdString();
               techObj.mYears_used = query.value(3).toInt();
               techObj.mResume_fk = query.value(4).toInt();

               resuObj.mTechSkillsList.push_back(techObj);
           }
       }

      return true;
   }

   bool DatabaseCommunicator::insertResumeInformationInDB(const ResumeManagerBase &resuObj,std::string &msg)
   {
       db.transaction(); // Starts a transaction

       QSqlQuery q;

       // first insert
       q.prepare("INSERT INTO table_name VALUES(:some_column_name)");
       q.bindValue(":some_column_name", "FooBar");
       q.exec();

       int pk = q.lastInsertId().toInt();

       // second insert
       q.prepare("INSERT INTO other_table VALUES(:other_column_name, :fk)");
       q.bindValue(":other_column_name", "OtherText");
       q.bindValue(":fk", pk);
       q.exec();

       db.commit(); // Commits transaction

       return true;
   }
