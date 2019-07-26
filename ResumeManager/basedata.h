#ifndef BASEDATA_H
#define BASEDATA_H

//#include <globalProductData.h>
class BaseData
{

public:
    BaseData()
    {
        //empty constructor
    };
    virtual bool checkInputFields() = 0;

};


#endif // BASEDATA_H
