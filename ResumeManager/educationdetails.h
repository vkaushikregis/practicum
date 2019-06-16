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

private:
    Ui::educationDetails *ui;
};

#endif // EDUCATIONDETAILS_H
