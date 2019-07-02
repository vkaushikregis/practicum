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
#include <QtWidgets/QRadioButton>
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
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout_17;
    QPushButton *pushButtonCreateNewResume;
    QLabel *label_26;
    QLineEdit *lineEditSearchResume;
    QLabel *label_16;
    QListWidget *listWidgetResumeNames;
    QPushButton *pushButtonDeleteResume;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineEditResumeName;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEditDirectoryPath;
    QPushButton *pushButtonBrowse;
    QPushButton *pushButtonExportAsPDF;
    QRadioButton *radioButtonTemp2;
    QRadioButton *radioButtonTemp1;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonEditResume;
    QPushButton *pushButtonSaveInDB;
    QGroupBox *groupBoxResumeDetails;
    QGridLayout *gridLayout_14;
    QTabWidget *tabWidgetMain;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QGroupBox *groupBoxPersonalDetails;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QLineEdit *firstNameLineEdit;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QLineEdit *lastNameLineEdit;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *cityLineEdit;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *stateLineEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QLineEdit *zipLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLineEdit *mobileLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonWorkEx;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_15;
    QGroupBox *groupBoxWorkEx;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddWorkEx;
    QPushButton *pushButtonEditWorkEx;
    QPushButton *pushButtonDeleteWorkEx;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidgetWorkEx;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonBackPersonal;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonEducation;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QLabel *label_17;
    QGroupBox *groupBoxEducation;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonAddEducation;
    QPushButton *pushButtonEditEducation;
    QPushButton *pushButtonDeleteEducation;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidgetEducation;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButtonBackWork;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSkills;
    QWidget *tab_4;
    QGridLayout *gridLayout_9;
    QLabel *label_22;
    QGroupBox *groupBoxTechSkills;
    QGridLayout *gridLayout_8;
    QPushButton *pushButtonAddSkill;
    QPushButton *pushButtonEditSkill;
    QPushButton *pushButtonDeleteSkill;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidgetSkills;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButtonBackEducation;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonAdditionalSkils;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBoxAddDetails;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_25;
    QTextEdit *textEditAdditionalSkills;
    QLabel *label_24;
    QPushButton *pushButtonBackSkills;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1080, 701);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral("../../ImagesForResumeBuilderApp/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_15 = new QGridLayout(centralWidget);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        pushButtonCreateNewResume = new QPushButton(centralWidget);
        pushButtonCreateNewResume->setObjectName(QStringLiteral("pushButtonCreateNewResume"));
        pushButtonCreateNewResume->setMinimumSize(QSize(0, 0));
        pushButtonCreateNewResume->setMaximumSize(QSize(200, 16777215));
        pushButtonCreateNewResume->setStyleSheet(QStringLiteral("background-color: rgb(87, 170, 94);"));

        verticalLayout_17->addWidget(pushButtonCreateNewResume);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(200, 0));
        label_26->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(8);
        label_26->setFont(font);

        verticalLayout_17->addWidget(label_26);

        lineEditSearchResume = new QLineEdit(centralWidget);
        lineEditSearchResume->setObjectName(QStringLiteral("lineEditSearchResume"));
        lineEditSearchResume->setMinimumSize(QSize(30, 25));
        lineEditSearchResume->setMaximumSize(QSize(200, 16777215));

        verticalLayout_17->addWidget(lineEditSearchResume);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(30, 0));
        label_16->setMaximumSize(QSize(200, 16777215));
        label_16->setFont(font);

        verticalLayout_17->addWidget(label_16);

        listWidgetResumeNames = new QListWidget(centralWidget);
        listWidgetResumeNames->setObjectName(QStringLiteral("listWidgetResumeNames"));
        listWidgetResumeNames->setMaximumSize(QSize(200, 16777215));

        verticalLayout_17->addWidget(listWidgetResumeNames);

        pushButtonDeleteResume = new QPushButton(centralWidget);
        pushButtonDeleteResume->setObjectName(QStringLiteral("pushButtonDeleteResume"));
        pushButtonDeleteResume->setMaximumSize(QSize(200, 16777215));
        pushButtonDeleteResume->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Downloads/icons8-trash-can-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDeleteResume->setIcon(icon1);

        verticalLayout_17->addWidget(pushButtonDeleteResume);


        gridLayout_15->addLayout(verticalLayout_17, 0, 0, 2, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        groupBox_9->setMaximumSize(QSize(16777215, 80));
        groupBox_9->setStyleSheet(QStringLiteral(""));
        gridLayout_11 = new QGridLayout(groupBox_9);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        horizontalLayout_7->addWidget(label_10);

        lineEditResumeName = new QLineEdit(groupBox_9);
        lineEditResumeName->setObjectName(QStringLiteral("lineEditResumeName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditResumeName->sizePolicy().hasHeightForWidth());
        lineEditResumeName->setSizePolicy(sizePolicy1);
        lineEditResumeName->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setPointSize(9);
        lineEditResumeName->setFont(font1);

        horizontalLayout_7->addWidget(lineEditResumeName);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        gridLayout_11->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        verticalLayout_12->addWidget(groupBox_9);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        groupBox_7->setMaximumSize(QSize(16777215, 95));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_10->addWidget(label_11);

        lineEditDirectoryPath = new QLineEdit(groupBox_7);
        lineEditDirectoryPath->setObjectName(QStringLiteral("lineEditDirectoryPath"));
        lineEditDirectoryPath->setMinimumSize(QSize(0, 25));

        horizontalLayout_10->addWidget(lineEditDirectoryPath);

        pushButtonBrowse = new QPushButton(groupBox_7);
        pushButtonBrowse->setObjectName(QStringLiteral("pushButtonBrowse"));

        horizontalLayout_10->addWidget(pushButtonBrowse);

        pushButtonExportAsPDF = new QPushButton(groupBox_7);
        pushButtonExportAsPDF->setObjectName(QStringLiteral("pushButtonExportAsPDF"));
        pushButtonExportAsPDF->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/icons8-pdf-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonExportAsPDF->setIcon(icon2);

        horizontalLayout_10->addWidget(pushButtonExportAsPDF);


        gridLayout_12->addLayout(horizontalLayout_10, 1, 0, 1, 2);

        radioButtonTemp2 = new QRadioButton(groupBox_7);
        radioButtonTemp2->setObjectName(QStringLiteral("radioButtonTemp2"));

        gridLayout_12->addWidget(radioButtonTemp2, 0, 1, 1, 1);

        radioButtonTemp1 = new QRadioButton(groupBox_7);
        radioButtonTemp1->setObjectName(QStringLiteral("radioButtonTemp1"));

        gridLayout_12->addWidget(radioButtonTemp1, 0, 0, 1, 1);


        verticalLayout_12->addWidget(groupBox_7);


        gridLayout_15->addLayout(verticalLayout_12, 0, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        groupBox_8->setMaximumSize(QSize(125, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButtonEditResume = new QPushButton(groupBox_8);
        pushButtonEditResume->setObjectName(QStringLiteral("pushButtonEditResume"));
        pushButtonEditResume->setMaximumSize(QSize(110, 16777215));
        pushButtonEditResume->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 212);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Downloads/icons8-edit-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEditResume->setIcon(icon3);

        gridLayout_3->addWidget(pushButtonEditResume, 0, 0, 1, 1);

        pushButtonSaveInDB = new QPushButton(groupBox_8);
        pushButtonSaveInDB->setObjectName(QStringLiteral("pushButtonSaveInDB"));
        pushButtonSaveInDB->setMaximumSize(QSize(110, 16777215));
        pushButtonSaveInDB->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../Downloads/icons8-save-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSaveInDB->setIcon(icon4);

        gridLayout_3->addWidget(pushButtonSaveInDB, 1, 0, 1, 1);


        verticalLayout_11->addWidget(groupBox_8);


        gridLayout_15->addLayout(verticalLayout_11, 0, 2, 1, 1);

        groupBoxResumeDetails = new QGroupBox(centralWidget);
        groupBoxResumeDetails->setObjectName(QStringLiteral("groupBoxResumeDetails"));
        gridLayout_14 = new QGridLayout(groupBoxResumeDetails);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        tabWidgetMain = new QTabWidget(groupBoxResumeDetails);
        tabWidgetMain->setObjectName(QStringLiteral("tabWidgetMain"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        tabWidgetMain->setFont(font2);
        tabWidgetMain->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 50));
        label_9->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Yu Gothic UI"));
        font3.setPointSize(9);
        label_9->setFont(font3);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(217, 217, 217);R"));
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setTextFormat(Qt::PlainText);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        groupBoxPersonalDetails = new QGroupBox(tab);
        groupBoxPersonalDetails->setObjectName(QStringLiteral("groupBoxPersonalDetails"));
        gridLayout_2 = new QGridLayout(groupBoxPersonalDetails);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label = new QLabel(groupBoxPersonalDetails);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        label->setFont(font4);

        verticalLayout_9->addWidget(label);

        firstNameLineEdit = new QLineEdit(groupBoxPersonalDetails);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        firstNameLineEdit->setMinimumSize(QSize(55, 30));
        QFont font5;
        font5.setKerning(false);
        firstNameLineEdit->setFont(font5);
        firstNameLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_9->addWidget(firstNameLineEdit);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(groupBoxPersonalDetails);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        verticalLayout_10->addWidget(label_2);

        lastNameLineEdit = new QLineEdit(groupBoxPersonalDetails);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));
        lastNameLineEdit->setMinimumSize(QSize(55, 30));

        verticalLayout_10->addWidget(lastNameLineEdit);


        horizontalLayout_3->addLayout(verticalLayout_10);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBoxPersonalDetails);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        addressLineEdit = new QLineEdit(groupBoxPersonalDetails);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setMinimumSize(QSize(55, 30));
        addressLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_8->addWidget(addressLineEdit);


        gridLayout_2->addLayout(verticalLayout_8, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(groupBoxPersonalDetails);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);

        verticalLayout_5->addWidget(label_4);

        cityLineEdit = new QLineEdit(groupBoxPersonalDetails);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setMinimumSize(QSize(0, 30));
        cityLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_5->addWidget(cityLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(groupBoxPersonalDetails);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        verticalLayout_6->addWidget(label_5);

        stateLineEdit = new QLineEdit(groupBoxPersonalDetails);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setMinimumSize(QSize(0, 30));
        stateLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_6->addWidget(stateLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(groupBoxPersonalDetails);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        verticalLayout_7->addWidget(label_6);

        zipLineEdit = new QLineEdit(groupBoxPersonalDetails);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setMinimumSize(QSize(0, 30));
        zipLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_7->addWidget(zipLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_7);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(groupBoxPersonalDetails);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        verticalLayout_3->addWidget(label_7);

        mobileLineEdit = new QLineEdit(groupBoxPersonalDetails);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        mobileLineEdit->setMinimumSize(QSize(0, 30));
        mobileLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_3->addWidget(mobileLineEdit);


        gridLayout_2->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_8 = new QLabel(groupBoxPersonalDetails);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);

        verticalLayout_4->addWidget(label_8);

        emailLineEdit = new QLineEdit(groupBoxPersonalDetails);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setMinimumSize(QSize(0, 30));
        emailLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_4->addWidget(emailLineEdit);


        gridLayout_2->addLayout(verticalLayout_4, 3, 1, 1, 1);


        gridLayout_5->addWidget(groupBoxPersonalDetails, 1, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);

        pushButtonWorkEx = new QPushButton(tab);
        pushButtonWorkEx->setObjectName(QStringLiteral("pushButtonWorkEx"));
        pushButtonWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../Downloads/icons8-arrow-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonWorkEx->setIcon(icon5);

        horizontalLayout_12->addWidget(pushButtonWorkEx);


        gridLayout_5->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        tabWidgetMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 50));
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(217, 217, 217);"));
        label_15->setFrameShadow(QFrame::Raised);
        label_15->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(label_15);

        groupBoxWorkEx = new QGroupBox(tab_2);
        groupBoxWorkEx->setObjectName(QStringLiteral("groupBoxWorkEx"));
        gridLayout = new QGridLayout(groupBoxWorkEx);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAddWorkEx = new QPushButton(groupBoxWorkEx);
        pushButtonAddWorkEx->setObjectName(QStringLiteral("pushButtonAddWorkEx"));
        pushButtonAddWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(87, 170, 94);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../Downloads/icons8-plus-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddWorkEx->setIcon(icon6);

        horizontalLayout->addWidget(pushButtonAddWorkEx);

        pushButtonEditWorkEx = new QPushButton(groupBoxWorkEx);
        pushButtonEditWorkEx->setObjectName(QStringLiteral("pushButtonEditWorkEx"));
        pushButtonEditWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 212);"));
        pushButtonEditWorkEx->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonEditWorkEx);

        pushButtonDeleteWorkEx = new QPushButton(groupBoxWorkEx);
        pushButtonDeleteWorkEx->setObjectName(QStringLiteral("pushButtonDeleteWorkEx"));
        pushButtonDeleteWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));
        pushButtonDeleteWorkEx->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonDeleteWorkEx);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidgetWorkEx = new QTableWidget(groupBoxWorkEx);
        if (tableWidgetWorkEx->columnCount() < 7)
            tableWidgetWorkEx->setColumnCount(7);
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font6);
        tableWidgetWorkEx->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetWorkEx->setObjectName(QStringLiteral("tableWidgetWorkEx"));

        verticalLayout->addWidget(tableWidgetWorkEx);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxWorkEx);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonBackPersonal = new QPushButton(tab_2);
        pushButtonBackPersonal->setObjectName(QStringLiteral("pushButtonBackPersonal"));
        pushButtonBackPersonal->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../Downloads/icons8-arrow-pointing-left-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBackPersonal->setIcon(icon7);

        horizontalLayout_4->addWidget(pushButtonBackPersonal);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pushButtonEducation = new QPushButton(tab_2);
        pushButtonEducation->setObjectName(QStringLiteral("pushButtonEducation"));
        pushButtonEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonEducation->setIcon(icon5);

        horizontalLayout_4->addWidget(pushButtonEducation);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);

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
        label_17->setFont(font3);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(217, 217, 217);"));
        label_17->setFrameShadow(QFrame::Raised);
        label_17->setTextFormat(Qt::PlainText);

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        groupBoxEducation = new QGroupBox(tab_3);
        groupBoxEducation->setObjectName(QStringLiteral("groupBoxEducation"));
        gridLayout_6 = new QGridLayout(groupBoxEducation);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonAddEducation = new QPushButton(groupBoxEducation);
        pushButtonAddEducation->setObjectName(QStringLiteral("pushButtonAddEducation"));
        pushButtonAddEducation->setStyleSheet(QStringLiteral("background-color: rgb(87, 170, 94);"));
        pushButtonAddEducation->setIcon(icon6);

        horizontalLayout_5->addWidget(pushButtonAddEducation);

        pushButtonEditEducation = new QPushButton(groupBoxEducation);
        pushButtonEditEducation->setObjectName(QStringLiteral("pushButtonEditEducation"));
        pushButtonEditEducation->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 212);"));
        pushButtonEditEducation->setIcon(icon3);

        horizontalLayout_5->addWidget(pushButtonEditEducation);

        pushButtonDeleteEducation = new QPushButton(groupBoxEducation);
        pushButtonDeleteEducation->setObjectName(QStringLiteral("pushButtonDeleteEducation"));
        pushButtonDeleteEducation->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));
        pushButtonDeleteEducation->setIcon(icon1);

        horizontalLayout_5->addWidget(pushButtonDeleteEducation);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_14->addLayout(horizontalLayout_5);

        tableWidgetEducation = new QTableWidget(groupBoxEducation);
        if (tableWidgetEducation->columnCount() < 7)
            tableWidgetEducation->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font6);
        tableWidgetEducation->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        tableWidgetEducation->setObjectName(QStringLiteral("tableWidgetEducation"));

        verticalLayout_14->addWidget(tableWidgetEducation);


        gridLayout_6->addLayout(verticalLayout_14, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBoxEducation, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButtonBackWork = new QPushButton(tab_3);
        pushButtonBackWork->setObjectName(QStringLiteral("pushButtonBackWork"));
        pushButtonBackWork->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonBackWork->setIcon(icon7);

        horizontalLayout_13->addWidget(pushButtonBackWork);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        pushButtonSkills = new QPushButton(tab_3);
        pushButtonSkills->setObjectName(QStringLiteral("pushButtonSkills"));
        pushButtonSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonSkills->setIcon(icon5);

        horizontalLayout_13->addWidget(pushButtonSkills);


        gridLayout_7->addLayout(horizontalLayout_13, 2, 0, 1, 1);

        tabWidgetMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_9 = new QGridLayout(tab_4);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(0, 50));
        label_22->setFont(font3);
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(217, 217, 217);"));
        label_22->setFrameShadow(QFrame::Raised);
        label_22->setTextFormat(Qt::PlainText);

        gridLayout_9->addWidget(label_22, 0, 0, 1, 1);

        groupBoxTechSkills = new QGroupBox(tab_4);
        groupBoxTechSkills->setObjectName(QStringLiteral("groupBoxTechSkills"));
        gridLayout_8 = new QGridLayout(groupBoxTechSkills);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pushButtonAddSkill = new QPushButton(groupBoxTechSkills);
        pushButtonAddSkill->setObjectName(QStringLiteral("pushButtonAddSkill"));
        pushButtonAddSkill->setStyleSheet(QStringLiteral("background-color: rgb(87, 170, 94);"));
        pushButtonAddSkill->setIcon(icon6);

        gridLayout_8->addWidget(pushButtonAddSkill, 0, 0, 1, 1);

        pushButtonEditSkill = new QPushButton(groupBoxTechSkills);
        pushButtonEditSkill->setObjectName(QStringLiteral("pushButtonEditSkill"));
        pushButtonEditSkill->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 212);"));
        pushButtonEditSkill->setIcon(icon3);

        gridLayout_8->addWidget(pushButtonEditSkill, 0, 1, 1, 1);

        pushButtonDeleteSkill = new QPushButton(groupBoxTechSkills);
        pushButtonDeleteSkill->setObjectName(QStringLiteral("pushButtonDeleteSkill"));
        pushButtonDeleteSkill->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));
        pushButtonDeleteSkill->setIcon(icon1);

        gridLayout_8->addWidget(pushButtonDeleteSkill, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        tableWidgetSkills = new QTableWidget(groupBoxTechSkills);
        if (tableWidgetSkills->columnCount() < 4)
            tableWidgetSkills->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font6);
        tableWidgetSkills->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font6);
        tableWidgetSkills->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font6);
        tableWidgetSkills->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font6);
        tableWidgetSkills->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        tableWidgetSkills->setObjectName(QStringLiteral("tableWidgetSkills"));
        tableWidgetSkills->setAlternatingRowColors(true);
        tableWidgetSkills->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout_8->addWidget(tableWidgetSkills, 1, 0, 1, 4);


        gridLayout_9->addWidget(groupBoxTechSkills, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButtonBackEducation = new QPushButton(tab_4);
        pushButtonBackEducation->setObjectName(QStringLiteral("pushButtonBackEducation"));
        pushButtonBackEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonBackEducation->setIcon(icon7);

        horizontalLayout_14->addWidget(pushButtonBackEducation);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        pushButtonAdditionalSkils = new QPushButton(tab_4);
        pushButtonAdditionalSkils->setObjectName(QStringLiteral("pushButtonAdditionalSkils"));
        pushButtonAdditionalSkils->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonAdditionalSkils->setIcon(icon5);

        horizontalLayout_14->addWidget(pushButtonAdditionalSkils);


        gridLayout_9->addLayout(horizontalLayout_14, 2, 0, 1, 1);

        tabWidgetMain->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        groupBoxAddDetails = new QGroupBox(tab_5);
        groupBoxAddDetails->setObjectName(QStringLiteral("groupBoxAddDetails"));
        gridLayout_10 = new QGridLayout(groupBoxAddDetails);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_25 = new QLabel(groupBoxAddDetails);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font);

        verticalLayout_16->addWidget(label_25);

        textEditAdditionalSkills = new QTextEdit(groupBoxAddDetails);
        textEditAdditionalSkills->setObjectName(QStringLiteral("textEditAdditionalSkills"));

        verticalLayout_16->addWidget(textEditAdditionalSkills);


        gridLayout_10->addLayout(verticalLayout_16, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBoxAddDetails, 1, 0, 1, 2);

        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(0, 50));
        label_24->setFont(font3);
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(217, 217, 217);"));
        label_24->setFrameShadow(QFrame::Raised);
        label_24->setTextFormat(Qt::PlainText);

        gridLayout_13->addWidget(label_24, 0, 0, 1, 2);

        pushButtonBackSkills = new QPushButton(tab_5);
        pushButtonBackSkills->setObjectName(QStringLiteral("pushButtonBackSkills"));
        pushButtonBackSkills->setMaximumSize(QSize(100, 16777215));
        pushButtonBackSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonBackSkills->setIcon(icon7);

        gridLayout_13->addWidget(pushButtonBackSkills, 2, 0, 1, 1);

        tabWidgetMain->addTab(tab_5, QString());

        gridLayout_14->addWidget(tabWidgetMain, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBoxResumeDetails, 1, 1, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidgetMain->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ResumeManager", Q_NULLPTR));
        pushButtonCreateNewResume->setText(QApplication::translate("MainWindow", "Create New Resume", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Search:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Existing Resume(s)", Q_NULLPTR));
        pushButtonDeleteResume->setText(QApplication::translate("MainWindow", "Delete Resume", Q_NULLPTR));
        groupBox_9->setTitle(QString());
        label_10->setText(QApplication::translate("MainWindow", "Resume Name (*)", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Directory path      ", Q_NULLPTR));
        pushButtonBrowse->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        pushButtonExportAsPDF->setText(QApplication::translate("MainWindow", "Export as PDF", Q_NULLPTR));
        radioButtonTemp2->setText(QApplication::translate("MainWindow", "Template 2", Q_NULLPTR));
        radioButtonTemp1->setText(QApplication::translate("MainWindow", "Template 1", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        pushButtonEditResume->setText(QApplication::translate("MainWindow", "EDIT", Q_NULLPTR));
        pushButtonSaveInDB->setText(QApplication::translate("MainWindow", "Save in DB", Q_NULLPTR));
        groupBoxResumeDetails->setTitle(QApplication::translate("MainWindow", "Resume Details", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        tabWidgetMain->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("MainWindow", "Welcome to ResuManager. Take a step towards your bright future!", Q_NULLPTR));
        groupBoxPersonalDetails->setTitle(QString());
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
        pushButtonWorkEx->setText(QApplication::translate("MainWindow", "Work Experience", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab), QApplication::translate("MainWindow", "Personal Details", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Add Work experience to showcase your skills", Q_NULLPTR));
        groupBoxWorkEx->setTitle(QString());
        pushButtonAddWorkEx->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditWorkEx->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButtonDeleteWorkEx->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetWorkEx->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Work Ex PK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetWorkEx->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Company Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetWorkEx->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "From Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetWorkEx->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "To Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetWorkEx->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Current Company", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetWorkEx->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetWorkEx->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Job Description", Q_NULLPTR));
        pushButtonBackPersonal->setText(QApplication::translate("MainWindow", " Back", Q_NULLPTR));
        pushButtonEducation->setText(QApplication::translate("MainWindow", " Education", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_2), QApplication::translate("MainWindow", "Work Experience", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Add University/College details ", Q_NULLPTR));
        groupBoxEducation->setTitle(QString());
        pushButtonAddEducation->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditEducation->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButtonDeleteEducation->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetEducation->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "education_pk", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetEducation->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "College Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetEducation->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "From Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetEducation->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "To Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetEducation->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Is_current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetEducation->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Field", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetEducation->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "GPA", Q_NULLPTR));
        pushButtonBackWork->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pushButtonSkills->setText(QApplication::translate("MainWindow", " Skills", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_3), QApplication::translate("MainWindow", "Education", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Add Technical skills", Q_NULLPTR));
        groupBoxTechSkills->setTitle(QString());
        pushButtonAddSkill->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditSkill->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButtonDeleteSkill->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetSkills->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Tech_skills_pk", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetSkills->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Technical Skill", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetSkills->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Proficiency", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetSkills->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Years/Used", Q_NULLPTR));
        pushButtonBackEducation->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pushButtonAdditionalSkils->setText(QApplication::translate("MainWindow", "Additional Details", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_4), QApplication::translate("MainWindow", "Technical Skills", Q_NULLPTR));
        groupBoxAddDetails->setTitle(QString());
        label_25->setText(QApplication::translate("MainWindow", "Professional Summary", Q_NULLPTR));
        textEditAdditionalSkills->setPlaceholderText(QApplication::translate("MainWindow", "e.g 11 years of software development expereince", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Add Additional Information that can be relevant ", Q_NULLPTR));
        pushButtonBackSkills->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_5), QApplication::translate("MainWindow", "Additional Details", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
