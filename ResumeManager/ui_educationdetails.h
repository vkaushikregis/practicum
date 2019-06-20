/********************************************************************************
** Form generated from reading UI file 'educationdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUCATIONDETAILS_H
#define UI_EDUCATIONDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_educationDetails
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QLineEdit *lineEditCollegeName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_19;
    QLineEdit *lineEditFromDateCol;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_20;
    QLineEdit *lineEditToDateColl;
    QCheckBox *checkBoxCurrPursuing;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_21;
    QLineEdit *lineEditCollegeField;
    QVBoxLayout *verticalLayout;
    QLabel *label_23;
    QLineEdit *lineEditGPA;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *educationDetails)
    {
        if (educationDetails->objectName().isEmpty())
            educationDetails->setObjectName(QStringLiteral("educationDetails"));
        educationDetails->resize(617, 338);
        gridLayout_3 = new QGridLayout(educationDetails);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(educationDetails);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_18->setFont(font);

        verticalLayout_5->addWidget(label_18);

        lineEditCollegeName = new QLineEdit(groupBox);
        lineEditCollegeName->setObjectName(QStringLiteral("lineEditCollegeName"));
        lineEditCollegeName->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(lineEditCollegeName);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);

        verticalLayout_3->addWidget(label_19);

        lineEditFromDateCol = new QLineEdit(groupBox);
        lineEditFromDateCol->setObjectName(QStringLiteral("lineEditFromDateCol"));
        lineEditFromDateCol->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(lineEditFromDateCol);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);

        verticalLayout_4->addWidget(label_20);

        lineEditToDateColl = new QLineEdit(groupBox);
        lineEditToDateColl->setObjectName(QStringLiteral("lineEditToDateColl"));
        lineEditToDateColl->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(lineEditToDateColl);


        horizontalLayout->addLayout(verticalLayout_4);

        checkBoxCurrPursuing = new QCheckBox(groupBox);
        checkBoxCurrPursuing->setObjectName(QStringLiteral("checkBoxCurrPursuing"));
        checkBoxCurrPursuing->setFont(font);

        horizontalLayout->addWidget(checkBoxCurrPursuing);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font);

        verticalLayout_2->addWidget(label_21);

        lineEditCollegeField = new QLineEdit(groupBox);
        lineEditCollegeField->setObjectName(QStringLiteral("lineEditCollegeField"));
        lineEditCollegeField->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(lineEditCollegeField);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);

        verticalLayout->addWidget(label_23);

        lineEditGPA = new QLineEdit(groupBox);
        lineEditGPA->setObjectName(QStringLiteral("lineEditGPA"));
        lineEditGPA->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEditGPA);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(educationDetails);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 55));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(groupBox_2);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));

        horizontalLayout_2->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(groupBox_2);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout_2->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(educationDetails);

        QMetaObject::connectSlotsByName(educationDetails);
    } // setupUi

    void retranslateUi(QWidget *educationDetails)
    {
        educationDetails->setWindowTitle(QApplication::translate("educationDetails", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_18->setText(QApplication::translate("educationDetails", "University/College", Q_NULLPTR));
        lineEditCollegeName->setPlaceholderText(QApplication::translate("educationDetails", "e.g. Regis University", Q_NULLPTR));
        label_19->setText(QApplication::translate("educationDetails", "From", Q_NULLPTR));
        lineEditFromDateCol->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 01/01/2016", Q_NULLPTR));
        label_20->setText(QApplication::translate("educationDetails", "To", Q_NULLPTR));
        lineEditToDateColl->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 01/01/2018", Q_NULLPTR));
        checkBoxCurrPursuing->setText(QApplication::translate("educationDetails", "Currently pursuing", Q_NULLPTR));
        label_21->setText(QApplication::translate("educationDetails", "Major/Minor", Q_NULLPTR));
        lineEditCollegeField->setPlaceholderText(QApplication::translate("educationDetails", "e.g : MS in Software Engineering", Q_NULLPTR));
        label_23->setText(QApplication::translate("educationDetails", "GPA", Q_NULLPTR));
        lineEditGPA->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 3.8", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButtonOK->setText(QApplication::translate("educationDetails", "OK", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("educationDetails", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class educationDetails: public Ui_educationDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONDETAILS_H
