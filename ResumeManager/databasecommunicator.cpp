
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
          QString preparedStmt = "SELECT personal_details_pk,first_name,last_name,mobile,email,resume_name_fk,additional_info FROM resumemanager.personal_details where resume_name_fk =" + QString::number(resume_fk);
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
              resuObj.mPersonalDetails.mMobile = query.value(3).toString().toStdString();
              resuObj.mPersonalDetails.mEmail = query.value(4).toString().toStdString();
              resuObj.mPersonalDetails.mResume_fk = query.value(5).toInt();
              resuObj.mPersonalDetails.mAdditional_information = query.value(6).toString().toStdString();
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
           QString preparedStmt = "SELECT work_ex_pk,company_name,from_date,to_date,job_description,currently_pursuing,title,resume_name_fk FROM resumemanager.work_experience where resume_name_fk =" + QString::number(resume_fk);
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
               workObj.mJob_description = query.value(4).toString().toStdString();
               workObj.mCurrent = query.value(5).toInt();
               workObj.mTitle = query.value(6).toString().toStdString();
               workObj.mResume_fk = query.value(7).toInt();

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

   bool DatabaseCommunicator::saveResumeInformationInDB(const ResumeManagerBase &resuObj,std::string &msg)
   {
       db.transaction(); // Starts a transaction

       //IMPORTANT: check that every insert is a success otherwise rollback

       if(db.open())
       {
            QSqlQuery qry;

            qry.prepare("INSERT INTO resumemanager.resumename (resume_name) VALUES(:resume_name_val)");
            qry.bindValue(":resume_name_val",QString::fromUtf8(resuObj.mResume_name.c_str()));

            if( !qry.exec() )
            {
                qDebug() << qry.lastError().text();
                msg = qry.lastError().text().toStdString();
                QSqlDatabase::database().rollback();
                return false;
            }
            else
                qDebug( "Inserted into resume name!" );

            int resume_name_pk = qry.lastInsertId().toInt();

            // second insert into personal_details table
            QSqlQuery qPer;
            qPer.prepare("INSERT INTO resumemanager.personal_details (first_name,last_name,mobile,email,resume_name_fk,additional_info) VALUES(:first_name,:last_name,:mobile,:email,:resume_fk,:additonal_info)");
            qPer.bindValue(":first_name", QString::fromUtf8(resuObj.mPersonalDetails.mFirst_name.c_str()));
            qPer.bindValue(":last_name",  QString::fromUtf8(resuObj.mPersonalDetails.mLast_name.c_str()));
            qPer.bindValue(":mobile", QString::fromUtf8(resuObj.mPersonalDetails.mMobile.c_str()));
            qPer.bindValue(":email",  QString::fromUtf8(resuObj.mPersonalDetails.mEmail.c_str()));
            qPer.bindValue(":resume_fk", resume_name_pk);
            qPer.bindValue(":additonal_info",  QString::fromUtf8(resuObj.mPersonalDetails.mAdditional_information.c_str()));

            if( !qPer.exec() )
            {
                qDebug() << qPer.lastError().text();
                msg = qPer.lastError().text().toStdString();
                QSqlDatabase::database().rollback();
                return false;
            }
            else
                qDebug( "Inserted into personal details!" );


            // third insert into address table
            QSqlQuery qAdd;
            qAdd.prepare("INSERT INTO resumemanager.address (streetaddress,city,state,zip,resume_name_fk) VALUES(:streetadress,:city,:state,:zip,:resume_fk)");
            qAdd.bindValue(":streetadress",  QString::fromUtf8(resuObj.mAddress.mStreet_address.c_str()));
            qAdd.bindValue(":city",  QString::fromUtf8(resuObj.mAddress.mCity.c_str()));
            qAdd.bindValue(":state",  QString::fromUtf8(resuObj.mAddress.mState.c_str()));
            qAdd.bindValue(":zip", resuObj.mAddress.mZip);
            qAdd.bindValue(":resume_fk", resume_name_pk);

            if( !qAdd.exec() )
            {
                qDebug() << qAdd.lastError().text();
                msg = qAdd.lastError().text().toStdString();
                QSqlDatabase::database().rollback();
                return false;
            }
            else
                qDebug( "Inserted into address details!" );

            //insert data into work experience table
            for(int count =0; count < resuObj.mWorkExList.size(); count++)
            {
                QSqlQuery q;
                q.prepare("INSERT INTO resumemanager.work_experience (company_name,from_date,to_date,job_description,resume_name_fk,currently_pursuing,title) VALUES(:company_name,:from_date,:to_date,:jd,:resume_fk,:current_job, :title)");
                q.bindValue(":company_name",  QString::fromUtf8(resuObj.mWorkExList[count].mCompany_name.c_str()));
                q.bindValue(":from_date",  QString::fromUtf8(resuObj.mWorkExList[count].mFrom_date.c_str()));
                q.bindValue(":to_date",  QString::fromUtf8(resuObj.mWorkExList[count].mTo_date.c_str()));
                q.bindValue(":jd",  QString::fromUtf8(resuObj.mWorkExList[count].mJob_description.c_str()));
                q.bindValue(":resume_fk", resume_name_pk);
                q.bindValue(":current_job", resuObj.mWorkExList[count].mCurrent);
                q.bindValue(":title", QString::fromUtf8(resuObj.mWorkExList[count].mTitle.c_str()));

                if( !q.exec() )
                {
                    qDebug() << q.lastError().text();
                    msg = q.lastError().text().toStdString();
                    QSqlDatabase::database().rollback();
                    break;
                    return false;
                }
                else
                    qDebug( "Inserted into work experience table !" );
            }

            //insert into education_details table
            for(int count =0; count < resuObj.mEducationDetailsList.size(); count++)
            {
                QSqlQuery q;
                q.prepare("INSERT INTO resumemanager.education_details (college_name,from_date,to_date,still_pursuing,field,gpa,resume_name_fk) VALUES(:college_name,:from_date,:to_date,:isCurrent,:field,:GPA,:resume_fk)");
                q.bindValue(":college_name",  QString::fromUtf8(resuObj.mEducationDetailsList[count].mCollege_name.c_str()));
                q.bindValue(":from_date",  QString::fromUtf8(resuObj.mEducationDetailsList[count].mFrom_date.c_str()));
                q.bindValue(":to_date",  QString::fromUtf8(resuObj.mEducationDetailsList[count].mTo_date.c_str()));
                q.bindValue(":isCurrent", resuObj.mEducationDetailsList[count].mStill_pursuing);
                q.bindValue(":field",  QString::fromUtf8(resuObj.mEducationDetailsList[count].mField.c_str()));
                q.bindValue(":GPA",  resuObj.mEducationDetailsList[count].mGPA);
                q.bindValue(":resume_fk", resume_name_pk);

                if( !q.exec() )
                {
                    qDebug() << q.lastError().text();
                    msg = q.lastError().text().toStdString();
                    QSqlDatabase::database().rollback();
                    break;
                    return false;
                }
                else
                    qDebug( "Inserted into education details table !" );
            }

            //insert into technical details table
            for(int count =0; count < resuObj.mTechSkillsList.size(); count++)
            {
                QSqlQuery q;
                q.prepare("INSERT INTO resumemanager.technical_skilss (skill_name,proficiency,years_used,resume_name_fk) VALUES(:skill_name,:proficiency,:years_used,:resume_fk)");
                q.bindValue(":skill_name",  QString::fromUtf8(resuObj.mTechSkillsList[count].mSkill_name.c_str()));
                q.bindValue(":proficiency",  QString::fromUtf8(resuObj.mTechSkillsList[count].mProficiency.c_str()));
                q.bindValue(":years_used",  resuObj.mTechSkillsList[count].mYears_used);
                q.bindValue(":resume_fk", resume_name_pk);

                if( !q.exec() )
                {
                    qDebug() << q.lastError().text();
                    msg = q.lastError().text().toStdString();
                    QSqlDatabase::database().rollback();
                    break;
                    return false;
                }
                else
                    qDebug( "Inserted into Technical Skills table !" );
            }
       }

       msg= "Resume is saved in Database successfully.";
       db.commit(); // Commits transaction

       return true;
   }

   bool DatabaseCommunicator::deleteResumeFromDB(int resume_name_pk,std::string &msg)
   {
       db.transaction();

       if(db.open())
       {
           QSqlQuery qry;

           qry.prepare("DELETE FROM resumemanager.resumename WHERE resume_name_pk = ?");
           qry.addBindValue(resume_name_pk);

           if( !qry.exec() )
           {
               qDebug() << qry.lastError().text();
               msg = qry.lastError().text().toStdString();
               QSqlDatabase::database().rollback();
               return false;
           }
           else
           {
               qDebug( "Inserted into resume name!" );
               msg= "Resume succesfully deleted from database.";
           }
       }

       db.commit();
       return true;
   }
