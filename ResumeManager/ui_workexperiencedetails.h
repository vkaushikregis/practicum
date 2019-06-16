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
    QLabel *label_10;
    QLineEdit *companyLineEdit;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *FromWorkExLineEdit;
    QLineEdit *toWorkExLineEdit;
    QCheckBox *checkBoxCurrentlyWorking;
    QLabel *label_13;
    QLineEdit *titleLineEdit;
    QLabel *label_14;
    QTextEdit *jobDescriptionTextEdit;
    QPushButton *pushButtonWorkExOK;
    QPushButton *pushButtonWorkExCancel;

    void setupUi(QWidget *workExperienceDetails)
    {
        if (workExperienceDetails->objectName().isEmpty())
            workExperienceDetails->setObjectName(QStringLiteral("workExperienceDetails"));
        workExperienceDetails->resize(914, 482);
        gridLayout = new QGridLayout(workExperienceDetails);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_10 = new QLabel(workExperienceDetails);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        companyLineEdit = new QLineEdit(workExperienceDetails);
        companyLineEdit->setObjectName(QStringLiteral("companyLineEdit"));

        gridLayout->addWidget(companyLineEdit, 1, 0, 1, 4);

        label_11 = new QLabel(workExperienceDetails);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(workExperienceDetails);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 1, 1, 1);

        FromWorkExLineEdit = new QLineEdit(workExperienceDetails);
        FromWorkExLineEdit->setObjectName(QStringLiteral("FromWorkExLineEdit"));

        gridLayout->addWidget(FromWorkExLineEdit, 3, 0, 1, 1);

        toWorkExLineEdit = new QLineEdit(workExperienceDetails);
        toWorkExLineEdit->setObjectName(QStringLiteral("toWorkExLineEdit"));

        gridLayout->addWidget(toWorkExLineEdit, 3, 1, 1, 1);

        checkBoxCurrentlyWorking = new QCheckBox(workExperienceDetails);
        checkBoxCurrentlyWorking->setObjectName(QStringLiteral("checkBoxCurrentlyWorking"));

        gridLayout->addWidget(checkBoxCurrentlyWorking, 3, 2, 1, 2);

        label_13 = new QLabel(workExperienceDetails);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        titleLineEdit = new QLineEdit(workExperienceDetails);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));

        gridLayout->addWidget(titleLineEdit, 5, 0, 1, 4);

        label_14 = new QLabel(workExperienceDetails);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 6, 0, 1, 1);

        jobDescriptionTextEdit = new QTextEdit(workExperienceDetails);
        jobDescriptionTextEdit->setObjectName(QStringLiteral("jobDescriptionTextEdit"));

        gridLayout->addWidget(jobDescriptionTextEdit, 7, 0, 1, 4);

        pushButtonWorkExOK = new QPushButton(workExperienceDetails);
        pushButtonWorkExOK->setObjectName(QStringLiteral("pushButtonWorkExOK"));

        gridLayout->addWidget(pushButtonWorkExOK, 8, 1, 1, 2);

        pushButtonWorkExCancel = new QPushButton(workExperienceDetails);
        pushButtonWorkExCancel->setObjectName(QStringLiteral("pushButtonWorkExCancel"));

        gridLayout->addWidget(pushButtonWorkExCancel, 8, 3, 1, 1);


        retranslateUi(workExperienceDetails);

        QMetaObject::connectSlotsByName(workExperienceDetails);
    } // setupUi

    void retranslateUi(QWidget *workExperienceDetails)
    {
        workExperienceDetails->setWindowTitle(QApplication::translate("workExperienceDetails", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("workExperienceDetails", "Company Name ", Q_NULLPTR));
        companyLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g : Qorvo Inc.", Q_NULLPTR));
        label_11->setText(QApplication::translate("workExperienceDetails", "From", Q_NULLPTR));
        label_12->setText(QApplication::translate("workExperienceDetails", "To", Q_NULLPTR));
        FromWorkExLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. 01/01/2016", Q_NULLPTR));
        toWorkExLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. 01/01/2018", Q_NULLPTR));
        checkBoxCurrentlyWorking->setText(QApplication::translate("workExperienceDetails", "Currently working", Q_NULLPTR));
        label_13->setText(QApplication::translate("workExperienceDetails", "Title", Q_NULLPTR));
        titleLineEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g : Software Engineer", Q_NULLPTR));
        label_14->setText(QApplication::translate("workExperienceDetails", "Job Description", Q_NULLPTR));
        jobDescriptionTextEdit->setPlaceholderText(QApplication::translate("workExperienceDetails", "e.g. Application Programming exeperience using C++/Linux", Q_NULLPTR));
        pushButtonWorkExOK->setText(QApplication::translate("workExperienceDetails", "OK", Q_NULLPTR));
        pushButtonWorkExCancel->setText(QApplication::translate("workExperienceDetails", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class workExperienceDetails: public Ui_workExperienceDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKEXPERIENCEDETAILS_H
