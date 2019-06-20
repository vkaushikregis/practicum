/********************************************************************************
** Form generated from reading UI file 'technicalskills.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNICALSKILLS_H
#define UI_TECHNICALSKILLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_technicalSkills
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditSkillName;
    QLabel *label_3;
    QComboBox *comboBoxProficiency;
    QLabel *label_2;
    QLineEdit *lineEditYearsUsed;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *technicalSkills)
    {
        if (technicalSkills->objectName().isEmpty())
            technicalSkills->setObjectName(QStringLiteral("technicalSkills"));
        technicalSkills->resize(399, 184);
        gridLayout_2 = new QGridLayout(technicalSkills);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(technicalSkills);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditSkillName = new QLineEdit(groupBox);
        lineEditSkillName->setObjectName(QStringLiteral("lineEditSkillName"));
        lineEditSkillName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEditSkillName, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBoxProficiency = new QComboBox(groupBox);
        comboBoxProficiency->setObjectName(QStringLiteral("comboBoxProficiency"));
        comboBoxProficiency->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBoxProficiency, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEditYearsUsed = new QLineEdit(groupBox);
        lineEditYearsUsed->setObjectName(QStringLiteral("lineEditYearsUsed"));
        lineEditYearsUsed->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEditYearsUsed, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(technicalSkills);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(technicalSkills);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(technicalSkills);

        QMetaObject::connectSlotsByName(technicalSkills);
    } // setupUi

    void retranslateUi(QDialog *technicalSkills)
    {
        technicalSkills->setWindowTitle(QApplication::translate("technicalSkills", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("technicalSkills", "Skill Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("technicalSkills", "Proficiency   ", Q_NULLPTR));
        label_2->setText(QApplication::translate("technicalSkills", "Years Used", Q_NULLPTR));
        pushButtonOK->setText(QApplication::translate("technicalSkills", "OK", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("technicalSkills", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class technicalSkills: public Ui_technicalSkills {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNICALSKILLS_H
