#ifndef BASEDATA_H
#define BASEDATA_H

#include <globalProductData.h>
class BaseData
{

public:
    BaseData()
    {
        //empty constructor
    };
    virtual bool checkInputFields() = 0;

};

class ResumeBuilderFactory
{

public:
    ResumeBuilderFactory()
    {
        //empty constructor
    };
    virtual void fillWorkExDetailsList(std::vector<WorkExperience> &tempWorkExList) = 0;
    virtual void fillEducationDetailsList(std::vector<EducationDetails> &tempEducationDetailsList) = 0;
    virtual void fillTechSkillsList(std::vector<TechnicalSkills> &tempTechSkillsList) = 0 ;

};
#endif // BASEDATA_H
