#ifndef WORKEXPERIENCEDETAILS_H
#define WORKEXPERIENCEDETAILS_H

#include <QDialog>
#include <QtGui>
#include <QObject>
#include <vector>
#include <algorithm>
#include <QtWidgets/QMessageBox>
#include "basedata.h"

namespace Ui {
class workExperienceDetails;
}

class workExperienceDetails : public QDialog, public BaseData
{
    Q_OBJECT

public:
    explicit workExperienceDetails(std::string functionality,QDialog *parent = 0 );
    ~workExperienceDetails();
    bool checkInputFields();   
    //getters
    QString getCompanyName();
    QString getFromDate();
    QString getToDate();
    int getCurrentJob();
    QString getTitle();
    QString getJobDescription();

    //setters
    void setCompanyName(QString companyName);
    void setFromDate(QString fromDate);
    void setToDate(QString toDate);
    void setCurrentJob(int isCurrent);
    void setTitle(QString title);
    void setJobDescription(QString jobDescription);

private:
    Ui::workExperienceDetails *ui;
    //std::string function;

private slots:
    void OnButtonWAccepted();
    void OnButtonWRejected();
};

#endif // WORKEXPERIENCEDETAILS_H
