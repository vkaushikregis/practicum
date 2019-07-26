#ifndef TECHNICALSKILLS_H
#define TECHNICALSKILLS_H

#include <QDialog>
#include "basedata.h"
namespace Ui {
class technicalSkills;
}

class technicalSkills : public QDialog, public BaseData
{
    Q_OBJECT

public:
    explicit technicalSkills(std::string functionality,QDialog *parent = 0);
    ~technicalSkills();
    bool checkInputFields();
    QString getSkillName();
    QString getProficieny();
    int getYearsUsed();

    void setSkillName(QString skill_name);
    void setProficieny(QString proficiency);
    void setYearsUsed(int years_used);

private:
    Ui::technicalSkills *ui;

private slots:
    void OnButtonAccepted();
    void OnButtonRejected();
};

#endif // TECHNICALSKILLS_H
