/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QListWidget *listWidgetResumeNames;
    QLabel *label_26;
    QLineEdit *lineEdit;
    QTabWidget *tabWidgetMain;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *firstNameLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lastNameLineEdit;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *addressLineEdit;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *cityLineEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLineEdit *stateLineEdit;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *zipLineEdit;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLineEdit *mobileLineEdit;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *emailLineEdit;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonWorkEx;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_15;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddWorkEx;
    QPushButton *pushButtonEditWorkEx;
    QPushButton *pushButtonDeleteWorkEx;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidgetWorkEx;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonEducation;
    QPushButton *pushButtonBackPersonal;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QLabel *label_17;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonAddEducation;
    QPushButton *pushButtonEditEducation;
    QPushButton *pushButtonDeleteEducation;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidgetEducation;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonSkills;
    QPushButton *pushButtonBackWork;
    QWidget *tab_4;
    QLabel *label_22;
    QTableWidget *tableWidgetSkills;
    QPushButton *pushButtonBackEducation;
    QPushButton *pushButtonAdditionalSkils;
    QPushButton *pushButtonAddSkill;
    QPushButton *pushButtonDeleteSkill;
    QWidget *tab_5;
    QPushButton *pushButtonSaveInDB;
    QPushButton *pushButtonBackSkills;
    QPushButton *pushButtonExportAsPDF;
    QLabel *label_24;
    QTextEdit *textEditAdditionalSkills;
    QLabel *label_25;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1085, 581);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 2, 0, 1, 1);

        listWidgetResumeNames = new QListWidget(centralWidget);
        listWidgetResumeNames->setObjectName(QStringLiteral("listWidgetResumeNames"));
        listWidgetResumeNames->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(listWidgetResumeNames, 3, 0, 1, 1);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(lineEdit, 1, 0, 1, 1);

        tabWidgetMain = new QTabWidget(centralWidget);
        tabWidgetMain->setObjectName(QStringLiteral("tabWidgetMain"));
        tabWidgetMain->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 237);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 50));
        label_9->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setTextFormat(Qt::PlainText);

        verticalLayout_11->addWidget(label_9);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        firstNameLineEdit = new QLineEdit(groupBox_2);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        QFont font1;
        font1.setKerning(false);
        firstNameLineEdit->setFont(font1);
        firstNameLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_3->addWidget(firstNameLineEdit);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        lastNameLineEdit = new QLineEdit(groupBox_2);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));

        verticalLayout_4->addWidget(lastNameLineEdit);


        gridLayout_2->addLayout(verticalLayout_4, 0, 1, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        addressLineEdit = new QLineEdit(groupBox_2);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_5->addWidget(addressLineEdit);


        gridLayout_2->addLayout(verticalLayout_5, 1, 0, 1, 3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_6->addWidget(label_4);

        cityLineEdit = new QLineEdit(groupBox_2);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_6->addWidget(cityLineEdit);


        gridLayout_2->addLayout(verticalLayout_6, 2, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_7->addWidget(label_5);

        stateLineEdit = new QLineEdit(groupBox_2);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_7->addWidget(stateLineEdit);


        gridLayout_2->addLayout(verticalLayout_7, 2, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_8->addWidget(label_6);

        zipLineEdit = new QLineEdit(groupBox_2);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_8->addWidget(zipLineEdit);


        gridLayout_2->addLayout(verticalLayout_8, 2, 2, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_9->addWidget(label_7);

        mobileLineEdit = new QLineEdit(groupBox_2);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        mobileLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_9->addWidget(mobileLineEdit);


        gridLayout_2->addLayout(verticalLayout_9, 3, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_10->addWidget(label_8);

        emailLineEdit = new QLineEdit(groupBox_2);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_10->addWidget(emailLineEdit);


        gridLayout_2->addLayout(verticalLayout_10, 3, 1, 1, 2);

        mobileLineEdit->raise();
        lastNameLineEdit->raise();
        firstNameLineEdit->raise();
        label_7->raise();
        cityLineEdit->raise();
        label_2->raise();
        label_5->raise();
        label_8->raise();
        stateLineEdit->raise();
        zipLineEdit->raise();
        label_3->raise();
        label_4->raise();
        label_6->raise();
        addressLineEdit->raise();
        label->raise();
        emailLineEdit->raise();
        label->raise();

        verticalLayout_11->addWidget(groupBox_2);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        pushButtonWorkEx = new QPushButton(tab);
        pushButtonWorkEx->setObjectName(QStringLiteral("pushButtonWorkEx"));
        pushButtonWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_12->addWidget(pushButtonWorkEx);


        horizontalLayout_3->addLayout(verticalLayout_12);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidgetMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 50));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_15->setFrameShadow(QFrame::Raised);
        label_15->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(label_15);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAddWorkEx = new QPushButton(groupBox);
        pushButtonAddWorkEx->setObjectName(QStringLiteral("pushButtonAddWorkEx"));
        pushButtonAddWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(159, 255, 144);"));

        horizontalLayout->addWidget(pushButtonAddWorkEx);

        pushButtonEditWorkEx = new QPushButton(groupBox);
        pushButtonEditWorkEx->setObjectName(QStringLiteral("pushButtonEditWorkEx"));

        horizontalLayout->addWidget(pushButtonEditWorkEx);

        pushButtonDeleteWorkEx = new QPushButton(groupBox);
        pushButtonDeleteWorkEx->setObjectName(QStringLiteral("pushButtonDeleteWorkEx"));

        horizontalLayout->addWidget(pushButtonDeleteWorkEx);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidgetWorkEx = new QTableWidget(groupBox);
        tableWidgetWorkEx->setObjectName(QStringLiteral("tableWidgetWorkEx"));

        verticalLayout->addWidget(tableWidgetWorkEx);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_2);

        pushButtonEducation = new QPushButton(tab_2);
        pushButtonEducation->setObjectName(QStringLiteral("pushButtonEducation"));
        pushButtonEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_13->addWidget(pushButtonEducation);

        pushButtonBackPersonal = new QPushButton(tab_2);
        pushButtonBackPersonal->setObjectName(QStringLiteral("pushButtonBackPersonal"));
        pushButtonBackPersonal->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout_13->addWidget(pushButtonBackPersonal);


        horizontalLayout_4->addLayout(verticalLayout_13);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidgetMain->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(0, 50));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_17->setFrameShadow(QFrame::Raised);
        label_17->setTextFormat(Qt::PlainText);

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonAddEducation = new QPushButton(groupBox_3);
        pushButtonAddEducation->setObjectName(QStringLiteral("pushButtonAddEducation"));
        pushButtonAddEducation->setStyleSheet(QStringLiteral("background-color: rgb(159, 255, 144);"));

        horizontalLayout_5->addWidget(pushButtonAddEducation);

        pushButtonEditEducation = new QPushButton(groupBox_3);
        pushButtonEditEducation->setObjectName(QStringLiteral("pushButtonEditEducation"));

        horizontalLayout_5->addWidget(pushButtonEditEducation);

        pushButtonDeleteEducation = new QPushButton(groupBox_3);
        pushButtonDeleteEducation->setObjectName(QStringLiteral("pushButtonDeleteEducation"));

        horizontalLayout_5->addWidget(pushButtonDeleteEducation);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_14->addLayout(horizontalLayout_5);

        tableWidgetEducation = new QTableWidget(groupBox_3);
        tableWidgetEducation->setObjectName(QStringLiteral("tableWidgetEducation"));

        verticalLayout_14->addWidget(tableWidgetEducation);


        gridLayout_6->addLayout(verticalLayout_14, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_3);

        pushButtonSkills = new QPushButton(tab_3);
        pushButtonSkills->setObjectName(QStringLiteral("pushButtonSkills"));
        pushButtonSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_15->addWidget(pushButtonSkills);

        pushButtonBackWork = new QPushButton(tab_3);
        pushButtonBackWork->setObjectName(QStringLiteral("pushButtonBackWork"));
        pushButtonBackWork->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout_15->addWidget(pushButtonBackWork);


        gridLayout_7->addLayout(verticalLayout_15, 1, 1, 1, 1);

        tabWidgetMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 10, 651, 46));
        label_22->setFont(font);
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_22->setFrameShadow(QFrame::Raised);
        label_22->setTextFormat(Qt::PlainText);
        tableWidgetSkills = new QTableWidget(tab_4);
        if (tableWidgetSkills->columnCount() < 3)
            tableWidgetSkills->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetSkills->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetSkills->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetSkills->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetSkills->setObjectName(QStringLiteral("tableWidgetSkills"));
        tableWidgetSkills->setGeometry(QRect(20, 110, 641, 311));
        tableWidgetSkills->setAlternatingRowColors(true);
        tableWidgetSkills->setSelectionMode(QAbstractItemView::SingleSelection);
        pushButtonBackEducation = new QPushButton(tab_4);
        pushButtonBackEducation->setObjectName(QStringLiteral("pushButtonBackEducation"));
        pushButtonBackEducation->setGeometry(QRect(670, 390, 171, 28));
        pushButtonBackEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonAdditionalSkils = new QPushButton(tab_4);
        pushButtonAdditionalSkils->setObjectName(QStringLiteral("pushButtonAdditionalSkils"));
        pushButtonAdditionalSkils->setGeometry(QRect(670, 350, 171, 28));
        pushButtonAdditionalSkils->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonAddSkill = new QPushButton(tab_4);
        pushButtonAddSkill->setObjectName(QStringLiteral("pushButtonAddSkill"));
        pushButtonAddSkill->setGeometry(QRect(670, 180, 93, 28));
        pushButtonAddSkill->setStyleSheet(QStringLiteral("background-color: rgb(159, 255, 144);"));
        pushButtonDeleteSkill = new QPushButton(tab_4);
        pushButtonDeleteSkill->setObjectName(QStringLiteral("pushButtonDeleteSkill"));
        pushButtonDeleteSkill->setGeometry(QRect(670, 220, 93, 28));
        pushButtonDeleteSkill->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));
        tabWidgetMain->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButtonSaveInDB = new QPushButton(tab_5);
        pushButtonSaveInDB->setObjectName(QStringLiteral("pushButtonSaveInDB"));
        pushButtonSaveInDB->setGeometry(QRect(250, 270, 141, 28));
        pushButtonSaveInDB->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonBackSkills = new QPushButton(tab_5);
        pushButtonBackSkills->setObjectName(QStringLiteral("pushButtonBackSkills"));
        pushButtonBackSkills->setGeometry(QRect(10, 270, 141, 28));
        pushButtonBackSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonExportAsPDF = new QPushButton(tab_5);
        pushButtonExportAsPDF->setObjectName(QStringLiteral("pushButtonExportAsPDF"));
        pushButtonExportAsPDF->setGeometry(QRect(520, 270, 141, 28));
        pushButtonExportAsPDF->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 651, 46));
        label_24->setFont(font);
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_24->setFrameShadow(QFrame::Raised);
        label_24->setTextFormat(Qt::PlainText);
        textEditAdditionalSkills = new QTextEdit(tab_5);
        textEditAdditionalSkills->setObjectName(QStringLiteral("textEditAdditionalSkills"));
        textEditAdditionalSkills->setGeometry(QRect(10, 110, 651, 98));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 80, 181, 16));
        tabWidgetMain->addTab(tab_5, QString());

        gridLayout_3->addWidget(tabWidgetMain, 0, 1, 4, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidgetMain->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ResumManager", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Existing Resume(s)", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        tabWidgetMain->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("MainWindow", "Welcome to ResuManager. Take a step towards your bright future!", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "First Name (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        firstNameLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        firstNameLineEdit->setText(QString());
        firstNameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Vishal", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Last Name (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lastNameLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lastNameLineEdit->setWhatsThis(QApplication::translate("MainWindow", "e.g Vishal", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lastNameLineEdit->setText(QString());
        lastNameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Kaushik", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Stree Address (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressLineEdit->setText(QString());
        addressLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Altamira Place Apt#205", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "City (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cityLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cityLineEdit->setText(QString());
        cityLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Orlando", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "State (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stateLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stateLineEdit->setText(QString());
        stateLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Florida", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Zip (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zipLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zipLineEdit->setText(QString());
        zipLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 32719", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Mobile (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mobileLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mobileLineEdit->setText(QString());
        mobileLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 858-610-8419", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Email (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emailLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. vishal_kaushik@yahoo.com", Q_NULLPTR));
        pushButtonWorkEx->setText(QApplication::translate("MainWindow", "-->  Work Experience", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab), QApplication::translate("MainWindow", "Personal Details", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Add Work experience to showcase your skills", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButtonAddWorkEx->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditWorkEx->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButtonDeleteWorkEx->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButtonEducation->setText(QApplication::translate("MainWindow", "--> Education", Q_NULLPTR));
        pushButtonBackPersonal->setText(QApplication::translate("MainWindow", "<- -   Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_2), QApplication::translate("MainWindow", "Work Experience", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Add University/College details ", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButtonAddEducation->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditEducation->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButtonDeleteEducation->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButtonSkills->setText(QApplication::translate("MainWindow", "--> Skills", Q_NULLPTR));
        pushButtonBackWork->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_3), QApplication::translate("MainWindow", "Education", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Add Technical skills", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetSkills->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Technical Skill", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetSkills->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Proficiency", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetSkills->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Years/Used", Q_NULLPTR));
        pushButtonBackEducation->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        pushButtonAdditionalSkils->setText(QApplication::translate("MainWindow", "--> Additional Details", Q_NULLPTR));
        pushButtonAddSkill->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonDeleteSkill->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_4), QApplication::translate("MainWindow", "Technical Skills", Q_NULLPTR));
        pushButtonSaveInDB->setText(QApplication::translate("MainWindow", "Save in DB", Q_NULLPTR));
        pushButtonBackSkills->setText(QApplication::translate("MainWindow", "<--Back", Q_NULLPTR));
        pushButtonExportAsPDF->setText(QApplication::translate("MainWindow", "Export as PDF", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Add Additional Information that can be relevant ", Q_NULLPTR));
        textEditAdditionalSkills->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Certifications or relevant skills information", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Additional Skills/certificate(s)/", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_5), QApplication::translate("MainWindow", "Additional Details", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
