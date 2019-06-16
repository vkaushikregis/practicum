/********************************************************************************
** Form generated from reading UI file 'workexperience.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKEXPERIENCE_H
#define UI_WORKEXPERIENCE_H

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

class Ui_WorkExWidget
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

    void setupUi(QWidget *WorkExWidget)
    {
        if (WorkExWidget->objectName().isEmpty())
            WorkExWidget->setObjectName(QStringLiteral("WorkExWidget"));
        WorkExWidget->resize(768, 449);
        gridLayout = new QGridLayout(WorkExWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_10 = new QLabel(WorkExWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        companyLineEdit = new QLineEdit(WorkExWidget);
        companyLineEdit->setObjectName(QStringLiteral("companyLineEdit"));

        gridLayout->addWidget(companyLineEdit, 1, 0, 1, 4);

        label_11 = new QLabel(WorkExWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(WorkExWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 1, 1, 1);

        FromWorkExLineEdit = new QLineEdit(WorkExWidget);
        FromWorkExLineEdit->setObjectName(QStringLiteral("FromWorkExLineEdit"));

        gridLayout->addWidget(FromWorkExLineEdit, 3, 0, 1, 1);

        toWorkExLineEdit = new QLineEdit(WorkExWidget);
        toWorkExLineEdit->setObjectName(QStringLiteral("toWorkExLineEdit"));

        gridLayout->addWidget(toWorkExLineEdit, 3, 1, 1, 1);

        checkBoxCurrentlyWorking = new QCheckBox(WorkExWidget);
        checkBoxCurrentlyWorking->setObjectName(QStringLiteral("checkBoxCurrentlyWorking"));

        gridLayout->addWidget(checkBoxCurrentlyWorking, 3, 2, 1, 2);

        label_13 = new QLabel(WorkExWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        titleLineEdit = new QLineEdit(WorkExWidget);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));

        gridLayout->addWidget(titleLineEdit, 5, 0, 1, 4);

        label_14 = new QLabel(WorkExWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 6, 0, 1, 1);

        jobDescriptionTextEdit = new QTextEdit(WorkExWidget);
        jobDescriptionTextEdit->setObjectName(QStringLiteral("jobDescriptionTextEdit"));

        gridLayout->addWidget(jobDescriptionTextEdit, 7, 0, 1, 4);

        pushButtonWorkExOK = new QPushButton(WorkExWidget);
        pushButtonWorkExOK->setObjectName(QStringLiteral("pushButtonWorkExOK"));

        gridLayout->addWidget(pushButtonWorkExOK, 8, 1, 1, 2);

        pushButtonWorkExCancel = new QPushButton(WorkExWidget);
        pushButtonWorkExCancel->setObjectName(QStringLiteral("pushButtonWorkExCancel"));

        gridLayout->addWidget(pushButtonWorkExCancel, 8, 3, 1, 1);


        retranslateUi(WorkExWidget);

        QMetaObject::connectSlotsByName(WorkExWidget);
    } // setupUi

    void retranslateUi(QWidget *WorkExWidget)
    {
        WorkExWidget->setWindowTitle(QApplication::translate("WorkExWidget", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("WorkExWidget", "Company Name ", Q_NULLPTR));
        companyLineEdit->setPlaceholderText(QApplication::translate("WorkExWidget", "e.g : Qorvo Inc.", Q_NULLPTR));
        label_11->setText(QApplication::translate("WorkExWidget", "From", Q_NULLPTR));
        label_12->setText(QApplication::translate("WorkExWidget", "To", Q_NULLPTR));
        FromWorkExLineEdit->setPlaceholderText(QApplication::translate("WorkExWidget", "e.g. 01/01/2016", Q_NULLPTR));
        toWorkExLineEdit->setPlaceholderText(QApplication::translate("WorkExWidget", "e.g. 01/01/2018", Q_NULLPTR));
        checkBoxCurrentlyWorking->setText(QApplication::translate("WorkExWidget", "Currently working", Q_NULLPTR));
        label_13->setText(QApplication::translate("WorkExWidget", "Title", Q_NULLPTR));
        titleLineEdit->setPlaceholderText(QApplication::translate("WorkExWidget", "e.g : Software Engineer", Q_NULLPTR));
        label_14->setText(QApplication::translate("WorkExWidget", "Job Description", Q_NULLPTR));
        jobDescriptionTextEdit->setPlaceholderText(QApplication::translate("WorkExWidget", "e.g. Application Programming exeperience using C++/Linux", Q_NULLPTR));
        pushButtonWorkExOK->setText(QApplication::translate("WorkExWidget", "OK", Q_NULLPTR));
        pushButtonWorkExCancel->setText(QApplication::translate("WorkExWidget", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WorkExWidget: public Ui_WorkExWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKEXPERIENCE_H
