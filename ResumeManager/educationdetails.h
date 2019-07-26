#ifndef EDUCATIONDETAILS_H
#define EDUCATIONDETAILS_H

#include <QDialog>
#include "basedata.h"
namespace Ui {
class educationDetails;
}

class educationDetails : public QDialog, public BaseData
{
    Q_OBJECT

public:
    explicit educationDetails(std::string functionality,QDialog *parent = 0);
    ~educationDetails();
    bool checkInputFields();
    //getters
    QString getCollegeName();
    QString getFromDate();
    QString getToDate();
    int getCurrentCollege();
    QString getField();
    QString getGPA();

    //setters
    void setCollegeName(QString collegeName);
    void setFromDate(QString fromDate);
    void setToDate(QString toDate);
    void setCurrentCollege(int isCurrent);
    void setField(QString field);
    void setGPA(QString gpa);

private:
    Ui::educationDetails *ui;

private slots:
    void OnButtonAccepted();
    void OnButtonRejected();
};

#endif // EDUCATIONDETAILS_H
