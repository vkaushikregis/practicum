#ifndef EDUCATIONDETAILS_H
#define EDUCATIONDETAILS_H

#include <QDialog>

namespace Ui {
class educationDetails;
}

class educationDetails : public QDialog
{
    Q_OBJECT

public:
    explicit educationDetails(QDialog *parent = 0);
    ~educationDetails();

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
