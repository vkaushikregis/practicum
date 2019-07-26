
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

    QString filename = "resume_database.sqlite";
    QFile file(filename);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName(filename);

    if (db.open())
    {
        QSqlQuery usersTableQuery;

        QString pragmaQry = "PRAGMA foreign_keys = ON;";
        QString pragmaQry1 ="PRAGMA ignore_check_constraints = ON;";
        QString pragmaQry2 ="PRAGMA journal_mode = WAL;";
        QString pragmaQry3 ="PRAGMA synchronous = NORMAL;";

        //-----------Creating RESUM NAME TABLE------------------------
        QString resuemaenameTableQueryStr =
                 "CREATE TABLE IF NOT EXISTS resumename ("
                    "Resume_name_pk INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "resume_name TEXT NOT NULL"
                    ");";


        QString uniqIndRN1 =
        "CREATE UNIQUE INDEX IF NOT EXISTS resumename_ResumeName_pk_UNIQUE ON resumename (`Resume_name_pk`);";
        ;

        QString uniqIndRN2 =
        "CREATE UNIQUE INDEX IF NOT EXISTS resumename_resume_name_UNIQUE ON resumename (`resume_name`);";
        ;

        //-----------Creating Address TABLE------------------------
        QString addressQuery =
                "CREATE TABLE IF NOT EXISTS address ("
                "address_pk INTEGER PRIMARY KEY AUTOINCREMENT,"
                "streetaddress TEXT NOT NULL,"
                "city TEXT NOT NULL,"
                "state TEXT NOT NULL,"
                "zip INTEGER NOT NULL,"
                "resume_name_fk INTEGER NOT NULL,"
                "FOREIGN KEY (resume_name_fk) REFERENCES resumename (Resume_name_pk) ON DELETE CASCADE ON UPDATE CASCADE"
                ");";

        QString addIndex =
        "CREATE INDEX  IF NOT EXISTS address_resume_name_fork_idx ON address (resume_name_fk)";


        //-----------Creating education_details TABLE------------------------

        QString eduQuery =
                "CREATE TABLE  IF NOT EXISTS education_details ("
                "education_details_pk INTEGER PRIMARY KEY AUTOINCREMENT,"
                "college_name TEXT NOT NULL,"
                "from_date TEXT NOT NULL,"
                "to_date TEXT DEFAULT NULL,"
                "still_pursuing INTEGER NOT NULL,"
                "field TEXT NOT NULL,"
                "GPA double NOT NULL,"
                "resume_name_fk INTEGER NOT NULL,"
                "FOREIGN KEY (resume_name_fk) REFERENCES resumename (Resume_name_pk) ON DELETE CASCADE ON UPDATE CASCADE"
                ");";

        QString eduIndex1 =
        "CREATE UNIQUE INDEX  IF NOT EXISTS education_details_education_details_pk_UNIQUE ON education_details (education_details_pk)";
        QString eduIndex2 =
        "CREATE INDEX  IF NOT EXISTS education_details_resum_edu_fk_idx ON education_details (resume_name_fk)";


        //-----------Creating personal_details TABLE------------------------
        QString pdQuery =
                "CREATE TABLE IF NOT EXISTS personal_details ("
                "personal_details_pk INTEGER PRIMARY KEY AUTOINCREMENT,"
                "first_name TEXT NOT NULL,"
                "last_name TEXT NOT NULL,"
                "mobile TEXT NOT NULL,"
                "email TEXT NOT NULL,"
                "resume_name_fk INTEGER NOT NULL,"
                "additional_info TEXT DEFAULT NULL,"
                "FOREIGN KEY (resume_name_fk) REFERENCES resumename (Resume_name_pk) ON DELETE CASCADE ON UPDATE CASCADE"
                ");";

        QString pdIndex1 =
        "CREATE UNIQUE INDEX  IF NOT EXISTS personal_details_personal_details_pk_UNIQUE ON personal_details (personal_details_pk);";
        QString pdIndex2 =
        "CREATE INDEX  IF NOT EXISTS `personal_details_resume_name_fk_idx` ON `personal_details` (resume_name_fk);";

        //-----------Creating technical_skilss TABLE------------------------
        QString techSkillQuery =
                "CREATE TABLE IF NOT EXISTS `technical_skilss` ("
                "`technical_skills_pk` INTEGER PRIMARY KEY AUTOINCREMENT,"
                "`skill_name` TEXT NOT NULL,"
                "`proficiency` TEXT NOT NULL,"
                "`years_used` INTEGER NOT NULL,"
                "`resume_name_fk` INTEGER NOT NULL,"
                "FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE CASCADE"
                ");";

        QString techSkillIndex1 =
        "CREATE UNIQUE INDEX  IF NOT EXISTS `technical_skilss_technical_skills_UNIQUE` ON `technical_skilss` (`technical_skills_pk`);";
        QString techSkillIndex2 =
        "CREATE INDEX  IF NOT EXISTS  `technical_skilss_tech_resume_fk_idx` ON `technical_skilss` (`resume_name_fk`);";


        //-----------Creating work_experience TABLE------------------------
        QString workExQuery =
                "CREATE TABLE IF NOT EXISTS `work_experience` ("
                "`work_ex_pk` INTEGER PRIMARY KEY AUTOINCREMENT,"
                "`company_name` TEXT NOT NULL,"
                "`from_date` TEXT NOT NULL,"
                "`to_date` TEXT DEFAULT NULL,"
                "`job_description` TEXT DEFAULT NULL,"
                "`resume_name_fk` INTEGER NOT NULL,"
                "`currently_pursuing` INTEGER NOT NULL,"
                "`title` TEXT NOT NULL,"
                "FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE CASCADE"
                ")";

        QString workExIndex1 =
        "CREATE INDEX IF NOT EXISTS `work_experience_resume_fk_idx` ON `work_experience` (`resume_name_fk`)";

        if((usersTableQuery.exec(pragmaQry))  && (usersTableQuery.exec(pragmaQry1)) &&(usersTableQuery.exec(pragmaQry2)) &&(usersTableQuery.exec(pragmaQry3))    )
        {
            qDebug() << "foreign keys are enabled";
        }

        if((usersTableQuery.exec(resuemaenameTableQueryStr)) &&(usersTableQuery.exec(uniqIndRN1)) && (usersTableQuery.exec(uniqIndRN2)) )
        {
            qDebug() << "Create resumename table OK";

        }

        if((usersTableQuery.exec(addressQuery)) &&(usersTableQuery.exec(addIndex)) )
        {
            qDebug() << "Create address table OK";

        }

        if((usersTableQuery.exec(eduQuery)) &&(usersTableQuery.exec(eduIndex1)) &&(usersTableQuery.exec(eduIndex2)) )
        {
            qDebug() << "Create Education qualification table OK";

        }
        if((usersTableQuery.exec(pdQuery)) &&(usersTableQuery.exec(pdIndex1)) &&(usersTableQuery.exec(pdIndex2)) )
        {
            qDebug() << "Create personal_details table OK";

        }
        if((usersTableQuery.exec(techSkillQuery)) &&(usersTableQuery.exec(techSkillIndex1)) &&(usersTableQuery.exec(techSkillIndex2)) )
        {
            qDebug() << "Create technical_skilss table OK";

        }
        if((usersTableQuery.exec(workExQuery)) &&(usersTableQuery.exec(workExIndex1)) )
        {
            qDebug() << "Create work_experience table OK";

        }

        else
        {
            qDebug() << usersTableQuery.lastError().text();
        }
        isDatabaseConnected = true;
    }
    else
    {
        isDatabaseConnected = false;
        DBconnectionerror= db.lastError().text();
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
        query.exec("SELECT resume_name_pk,resume_name FROM resumename");
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
          QString preparedStmt = "SELECT personal_details_pk,first_name,last_name,mobile,email,resume_name_fk,additional_info FROM personal_details where resume_name_fk =" + QString::number(resume_fk);
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
          QString preparedStmt = "SELECT address_pk,streetaddress,city,state,zip,resume_name_fk FROM address where resume_name_fk =" + QString::number(resume_fk);
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
           QString preparedStmt = "SELECT education_details_pk,college_name,from_date,to_date,still_pursuing,field,GPA,resume_name_fk FROM education_details where resume_name_fk =" + QString::number(resume_fk);
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
           QString preparedStmt = "SELECT work_ex_pk,company_name,from_date,to_date,job_description,currently_pursuing,title,resume_name_fk FROM work_experience where resume_name_fk =" + QString::number(resume_fk);
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
           QString preparedStmt = "SELECT technical_skills_pk,skill_name,proficiency,years_used,resume_name_fk FROM technical_skilss where resume_name_fk =" + QString::number(resume_fk);
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

    bool DatabaseCommunicator::updateResumeInDB(const ResumeManagerBase &resuObj,std::string &msg)
    {
        db.transaction(); // Starts a transaction

        //IMPORTANT: check that every insert is a success otherwise rollback

        if(db.open())
        {
            QSqlQuery qry;

            qry.prepare("DELETE FROM resumename WHERE resume_name_pk = ?");
            qry.addBindValue(resuObj.mResume_pk);

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



        if(db.open())
        {
            QSqlQuery qry;

            qry.prepare("INSERT INTO resumename (resume_name) VALUES(:resume_name_val)");
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

             //need to delete all data to resume_pk and insert again

             //int resume_name_pk = qry.lastInsertId().toInt();
             qDebug() <<"resume_name_pk"<< resume_name_pk;

             // second insert into personal_details table
             QSqlQuery qPer;
             qPer.prepare("INSERT INTO personal_details (first_name,last_name,mobile,email,resume_name_fk,additional_info) VALUES(:first_name,:last_name,:mobile,:email,:resume_fk,:additonal_info)");
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
             qAdd.prepare("INSERT INTO address (streetaddress,city,state,zip,resume_name_fk) VALUES(:streetadress,:city,:state,:zip,:resume_fk)");
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
                 q.prepare("INSERT INTO work_experience (company_name,from_date,to_date,job_description,resume_name_fk,currently_pursuing,title) VALUES(:company_name,:from_date,:to_date,:jd,:resume_fk,:current_job, :title)");
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
                 q.prepare("INSERT INTO education_details (college_name,from_date,to_date,still_pursuing,field,gpa,resume_name_fk) VALUES(:college_name,:from_date,:to_date,:isCurrent,:field,:GPA,:resume_fk)");
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
                 q.prepare("INSERT INTO technical_skilss (skill_name,proficiency,years_used,resume_name_fk) VALUES(:skill_name,:proficiency,:years_used,:resume_fk)");
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

        msg= "Resume is Updated in Database successfully.";
        db.commit(); // Commits transaction

        return true;
    }

   bool DatabaseCommunicator::saveResumeInformationInDB(const ResumeManagerBase &resuObj,std::string &msg)
   {
       db.transaction(); // Starts a transaction

       //IMPORTANT: check that every insert is a success otherwise rollback

       if(db.open())
       {
            QSqlQuery qry;

            qry.prepare("INSERT INTO resumename (resume_name) VALUES(:resume_name_val)");
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
            qPer.prepare("INSERT INTO personal_details (first_name,last_name,mobile,email,resume_name_fk,additional_info) VALUES(:first_name,:last_name,:mobile,:email,:resume_fk,:additonal_info)");
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
            qAdd.prepare("INSERT INTO address (streetaddress,city,state,zip,resume_name_fk) VALUES(:streetadress,:city,:state,:zip,:resume_fk)");
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
                q.prepare("INSERT INTO work_experience (company_name,from_date,to_date,job_description,resume_name_fk,currently_pursuing,title) VALUES(:company_name,:from_date,:to_date,:jd,:resume_fk,:current_job, :title)");
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
                q.prepare("INSERT INTO education_details (college_name,from_date,to_date,still_pursuing,field,gpa,resume_name_fk) VALUES(:college_name,:from_date,:to_date,:isCurrent,:field,:GPA,:resume_fk)");
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
                q.prepare("INSERT INTO technical_skilss (skill_name,proficiency,years_used,resume_name_fk) VALUES(:skill_name,:proficiency,:years_used,:resume_fk)");
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

           qry.prepare("DELETE FROM resumename WHERE resume_name_pk = ?");
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
               qDebug()<<"resume successfully deleted";
               msg= "Resume succesfully deleted from database.";
           }
       }

       db.commit();
       return true;
   }
