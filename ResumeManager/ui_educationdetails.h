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
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_19;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_20;
    QLineEdit *lineEdit_7;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_21;
    QLineEdit *lineEdit_9;
    QVBoxLayout *verticalLayout;
    QLabel *label_23;
    QLineEdit *lineEdit_10;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *educationDetails)
    {
        if (educationDetails->objectName().isEmpty())
            educationDetails->setObjectName(QStringLiteral("educationDetails"));
        educationDetails->resize(948, 490);
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

        verticalLayout_5->addWidget(label_18);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_5->addWidget(lineEdit_6);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_3->addWidget(label_19);

        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_3->addWidget(lineEdit_8);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_4->addWidget(label_20);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_4->addWidget(lineEdit_7);


        horizontalLayout->addLayout(verticalLayout_4);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_2->addWidget(label_21);

        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_2->addWidget(lineEdit_9);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout->addWidget(label_23);

        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout->addWidget(lineEdit_10);


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

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


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
        lineEdit_6->setPlaceholderText(QApplication::translate("educationDetails", "e.g. Regis University", Q_NULLPTR));
        label_19->setText(QApplication::translate("educationDetails", "From", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 01/01/2016", Q_NULLPTR));
        label_20->setText(QApplication::translate("educationDetails", "To", Q_NULLPTR));
        lineEdit_7->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 01/01/2018", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("educationDetails", "Currently pursuing", Q_NULLPTR));
        label_21->setText(QApplication::translate("educationDetails", "Major/Minor", Q_NULLPTR));
        lineEdit_9->setPlaceholderText(QApplication::translate("educationDetails", "e.g : MS in Software Engineering", Q_NULLPTR));
        label_23->setText(QApplication::translate("educationDetails", "GPA", Q_NULLPTR));
        lineEdit_10->setPlaceholderText(QApplication::translate("educationDetails", "e.g. 3.8", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton->setText(QApplication::translate("educationDetails", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("educationDetails", "CANCEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class educationDetails: public Ui_educationDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONDETAILS_H
