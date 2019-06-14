#ifndef PRODUCTDATA_H
#define PRODUCTDATA_H


#include <string>
#include <vector>
#include <iostream>

extern bool isDatabaseConnected;

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
    std::string mStree_address;
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
    long int mMobile;
    std::string mEmail;
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

#endif // PRODUCTDATA_H
