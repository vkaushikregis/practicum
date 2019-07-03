/********************************************************************************
** Form generated from reading UI file 'workexperiencedetails.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKEXPERIENCEDETAILS_H
#define UI_WORKEXPERIENCEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workExperienceDetails
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonWorkExCancel;
    QPushButton *pushButtonWorkExOK;
    QLineEdit *FromWorkExLineEdit;
    QCheckBox *checkBoxCurrentlyWorking;
    QLineEdit *titleLineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *toWorkExLineEdit;
    QLabel *label_14;
    QTextEdit *jobDescriptionTextEdit;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *companyLineEdit;

    void setupUi(QWidget *workExperienceDetails)
    {
        if (workExperienceDetails->objectName().isEmpty())
            workExperienceDetails->setObjectName(QStringLiteral("workExperienceDetails"));
        workExperienceDetails->resize(682, 317);
        gridLayout = new QGridLayout(workExperienceDetails);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonWorkExCancel = new QPushButton(workExperienceDetails);
        pushButtonWorkExCancel->setObjectName(QStringLiteral("pushButtonWorkExCancel"));

        gridLayout->addWidget(pushButtonWorkExCancel, 8, 3, 1, 1);

        pushButtonWorkExOK = new QPushButton(workExperienceDetails);
        pushButtonWorkExOK->setObjectName(QStringLiteral("pushButtonWorkExOK"));

        gridLayout->addWidget(pushButtonWorkExOK, 8, 2, 1, 1);

        FromWorkExLineEdit = new QLineEdit(workExperienceDetails);
        FromWorkExLineEdit->setObjectName(QStringLiteral("FromWorkExLineEdit"));
        FromWorkExLineEdit->setMinimumSize(QSize(85, 30));

        gridLayout->addWidget(FromWorkExLineEdit, 3, 0, 1, 1);

        checkBoxCurrentlyWorking = new QCheckBox(workExperienceDetails);
        checkBoxCurrentlyWorking->setObjectName(QStringLiteral("checkBoxCurrentlyWorking"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        checkBoxCurrentlyWorking->setFont(font);

        gridLayout->addWidget(checkBoxCurrentlyWorking, 3, 2, 1, 2);

        titleLineEdit = new QLineEdit(workExperienceDetails);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        titleLineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(titleLineEdit, 5, 0, 1, 4);

        label_12 = new QLabel(workExperienceDetails);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 2, 1, 1, 1);

        label_13 = new QLabel(workExperienceDetails);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        toWorkExLineEdit = new QLineEdit(workExperienceDetails);
        toWorkExLineEdit->setObjectName(QStringLiteral("toWorkExLineEdit"));
        toWorkExLineEdit->setMinimumSize(QSize(85, 30));

        gridLayout->addWidget(toWorkExLineEdit, 3, 1, 1, 1);

        label_14 = new QLabel(workExperienceDetails);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 6, 0, 1, 1);

        jobDescriptionTextEdit = new QTextEdit(workExperienceDetails);
        jobDescriptionTextEdit->setObjectName(QStringLiteral("jobDescriptionTextEdit"));
        jobDescriptionTextEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(jobDescriptionTextEdit, 7, 0, 1, 4);

        label_11 = new QLabel(workExperienceDetails);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(workExperienceDetails);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        companyLineEdit = new QLineEdit(workExperienceDetails);
        companyLineEdit->setObjectName(QStringLiteral("companyLineEdit"));
        companyLineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(companyLineEdit, 1, 0, 1, 4);


        retranslateUi(workExperienceDetails);

        QMetaObject::connectSlotsByName(workExperienceDetails);
    } // setupUi

    void retranslateUi(QWidget *workExperienceDetails)
    {
        workExperienceDetails->setWindowTitle(QApplication::translate("workExperienceDetails", "Form", Q_NULLPTR));
        pushButtonWorkExCancel->setText(QApplication::translate("workExperienceDetails", "CANCEL", Q_NULLPTR));
        pushButtonWorkExOK->setText(QApplication::translate("workExperienceDetails", "OK", Q_NULLPTR));
        FromWorkExLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. 01/01/2016", Q_NULLPTR));
        checkBoxCurrentlyWorking->setText(QApplication::translate("workExperienceDetails", "Currently working", Q_NULLPTR));
        titleLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g : Software Engineer", Q_NULLPTR));
        label_12->setText(QApplication::translate("workExperienceDetails", "To", Q_NULLPTR));
        label_13->setText(QApplication::translate("workExperienceDetails", "Title", Q_NULLPTR));
        toWorkExLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. 01/01/2018", Q_NULLPTR));
        label_14->setText(QApplication::translate("workExperienceDetails", "Job Description", Q_NULLPTR));
        jobDescriptionTextEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. Application Programming exeperience using C++/Linux", Q_NULLPTR));
        label_11->setText(QApplication::translate("workExperienceDetails", "From", Q_NULLPTR));
        label_10->setText(QApplication::translate("workExperienceDetails", "Company Name ", Q_NULLPTR));
        companyLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g : Qorvo Inc.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class workExperienceDetails: public Ui_workExperienceDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKEXPERIENCEDETAILS_H
