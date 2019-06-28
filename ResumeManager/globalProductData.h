#ifndef PRODUCTDATA_H
#define PRODUCTDATA_H


#include <string>
#include <vector>
#include <iostream>
#include <QApplication>
#include <QtCore>
extern bool isDatabaseConnected;
typedef enum
    {
        WORK_EX_PK,COMPANY_NAME,FROM_DATE_W,TO_DATE_W,IS_CURR_W,TITLE,JD
    }WorkExTablecolumns;

typedef enum
    {
        EDU_PK,COLLEGE_NAME,FROM_DATE_C,TO_DATE_C,IS_CURR_C,FIELD,GPA
    }EducationTablecolumns;

typedef enum
    {
        TECH_PK,SKILL_NAME,PROFICIENCY,YEARS_USED
    }TechSkillsTablecolumns;

struct TechnicalSkills
{
    long int mTech_skills_pk;
    std::string mSkill_name;
    std::string mProficiency;
    int mYears_used;
    long int mResume_fk;
};

struct WorkExperience
{
    long int mWork_experience_pk;
    std::string mCompany_name;
    std::string mFrom_date;
    std::string mTo_date;
    int mCurrent;
    std::string mTitle;
    std::string mJob_description;
    long int mResume_fk;
};

struct EducationDetails
{
    long int mEducation_details_pk;
    std::string mCollege_name;
    std::string mFrom_date;
    std::string mTo_date;
    int mStill_pursuing;
    std::string mField;
    double mGPA;
    long int mResume_fk;
};

struct Address
{
    long int mAddress_pk;
    std::string mStreet_address;
    std::string mCity;
    std::string mState;
    long int mZip;
    long int mResume_fk;
};

struct PersonalDetails
{
    long int mPersonal_details_pk;
    std::string mFirst_name;
    std::string mLast_name;
    std::string mMobile;
    std::string mEmail;
    std::string mAdditional_information;
    long int mResume_fk;
};

struct ResumeManagerBase
{
    long int mResume_pk;
    std::string mResume_name;
    PersonalDetails mPersonalDetails;
    Address mAddress;
    std::vector<EducationDetails> mEducationDetailsList;
    std::vector<WorkExperience> mWorkExList;
    std::vector<TechnicalSkills> mTechSkillsList;
};

struct ResumeNames
{
    long int mResume_pk;
    std::string mResume_name;
};
extern std::vector<ResumeNames> gResumeNamesList;
extern std::vector<std::string> gProficiencyLevelList;
QString cssTable();

#endif // PRODUCTDATA_H
