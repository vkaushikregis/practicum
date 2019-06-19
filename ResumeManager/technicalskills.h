#ifndef TECHNICALSKILLS_H
#define TECHNICALSKILLS_H

#include <QDialog>

namespace Ui {
class technicalSkills;
}

class technicalSkills : public QDialog
{
    Q_OBJECT

public:
    explicit technicalSkills(std::string functionality,QDialog *parent = 0);
    ~technicalSkills();

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
