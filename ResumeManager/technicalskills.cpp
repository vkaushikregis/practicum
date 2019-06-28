#include "technicalskills.h"
#include "ui_technicalskills.h"
#include <QtWidgets/QMessageBox>
#include "globalproductdata.h"
technicalSkills::technicalSkills(std::string functionality,QDialog *parent) :
    QDialog(parent),
    ui(new Ui::technicalSkills)
{
    ui->setupUi(this);
    connect(ui->pushButtonOK, SIGNAL(clicked()), this, SLOT(OnButtonAccepted()));
    connect(ui->pushButtonCancel, SIGNAL(clicked()), this, SLOT(OnButtonRejected()));

    for(int count =0; count< gProficiencyLevelList.size(); count++)
        ui->comboBoxProficiency->addItem(QString::fromUtf8(gProficiencyLevelList[count].c_str()));
}

technicalSkills::~technicalSkills()
{
    delete ui;
}
QString technicalSkills::getSkillName()
{
    return ui->lineEditSkillName->text();
}

QString technicalSkills::getProficieny()
{
    return ui->comboBoxProficiency->currentText();
}

int technicalSkills::getYearsUsed()
{
    return ui->lineEditYearsUsed->text().toInt();
}

void technicalSkills::setSkillName(QString skill_name)
{
    ui->lineEditSkillName->setText(skill_name);
}

void technicalSkills::setProficieny(QString proficiency)
{    
    int index = ui->comboBoxProficiency->findText(proficiency);
    if ( index != -1 ) { // -1 for not found
        ui->comboBoxProficiency->setCurrentIndex(index);
    }
}

void technicalSkills::setYearsUsed(int years_used)
{
     ui->lineEditYearsUsed->setText(QString::number(years_used));
}

void technicalSkills::OnButtonAccepted()
{
    if(ui->lineEditSkillName->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Technical Skills"), tr("Skill Name is not filled, it is a mandatory field"));
        return;
    }
    else if (ui->lineEditYearsUsed->text().toStdString().empty())
    {
        QMessageBox::critical(NULL, tr("Technical Skills"), tr("Years Used is not filled, it is a mandatory field"));
        return;
    }
    accept();
}

void technicalSkills::OnButtonRejected()
{
    reject();
}