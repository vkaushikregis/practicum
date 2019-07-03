#ifndef WORKEXPERIENCEDETAILS_H
#define WORKEXPERIENCEDETAILS_H

#include <QDialog>
#include <QtGui>
#include <QObject>
#include <vector>
#include <algorithm>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QItemDelegate>
#include <QtWidgets/QDateEdit>
namespace Ui {
class workExperienceDetails;
}

class workExperienceDetails : public QDialog
{
    Q_OBJECT

public:
    explicit workExperienceDetails(std::string functionality,QDialog *parent = 0 );
    ~workExperienceDetails();
    bool eventFilter(QObject *object, QEvent *event);
    QDateEdit *de;
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
    std::string function;

private slots:
    void OnButtonAccepted();
    void OnButtonRejected();
};

#endif // WORKEXPERIENCEDETAILS_H
