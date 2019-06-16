#ifndef WORKEXPERIENCEDETAILS_H
#define WORKEXPERIENCEDETAILS_H

#include <QDialog>
#include <QtGui>
#include <QObject>
#include <vector>
#include <algorithm>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QItemDelegate>

namespace Ui {
class workExperienceDetails;
}

class workExperienceDetails : public QDialog
{
    Q_OBJECT

public:
    explicit workExperienceDetails(std::string functionality,QDialog *parent = 0 );
    ~workExperienceDetails();

    //getters
    QString getCompanyName();
    QString getFromDate();
    QString getToDate();
    int getCurrentJob();
    QString getTitle();
    QString getJobDescription();

private:
    Ui::workExperienceDetails *ui;
    std::string function;



    //void setStackPk(QString stack_pk);
    //void setGroupValue(std::vector<std::string> groupsList, std::string groupVal);
    //void setStackValue(std::vector<std::string> ExistingstackNamesList, QString stackValue);
    //std::vector<std::string> mExistingStackNamesList;

 private slots:
    void OnButtonAccepted();
    void OnButtonRejected();
};

#endif // WORKEXPERIENCEDETAILS_H
