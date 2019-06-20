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
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QListWidget *listWidgetResumeNames;
    QLabel *label_26;
    QLineEdit *lineEditSearchResume;
    QTabWidget *tabWidgetMain;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonWorkEx;
    QGroupBox *groupBox_2;
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
    QGridLayout *gridLayout_9;
    QLabel *label_22;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidgetSkills;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonAddSkill;
    QPushButton *pushButtonEditSkill;
    QPushButton *pushButtonDeleteSkill;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonAdditionalSkils;
    QPushButton *pushButtonBackEducation;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QLabel *label_24;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_25;
    QTextEdit *textEditAdditionalSkills;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineEditResumeName;
    QPushButton *pushButtonSaveInDB;
    QPushButton *pushButtonBackSkills;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEditDirectoryPath;
    QPushButton *pushButtonBrowse;
    QPushButton *pushButtonExportAsPDF;
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
        QFont font;
        font.setPointSize(8);
        label_16->setFont(font);

        gridLayout_3->addWidget(label_16, 2, 0, 1, 1);

        listWidgetResumeNames = new QListWidget(centralWidget);
        listWidgetResumeNames->setObjectName(QStringLiteral("listWidgetResumeNames"));
        listWidgetResumeNames->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(listWidgetResumeNames, 3, 0, 1, 1);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font);

        gridLayout_3->addWidget(label_26, 0, 0, 1, 1);

        lineEditSearchResume = new QLineEdit(centralWidget);
        lineEditSearchResume->setObjectName(QStringLiteral("lineEditSearchResume"));
        lineEditSearchResume->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(lineEditSearchResume, 1, 0, 1, 1);

        tabWidgetMain = new QTabWidget(centralWidget);
        tabWidgetMain->setObjectName(QStringLiteral("tabWidgetMain"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        tabWidgetMain->setFont(font1);
        tabWidgetMain->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 237);"));
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
        QFont font2;
        font2.setFamily(QStringLiteral("Yu Gothic UI"));
        font2.setPointSize(9);
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setTextFormat(Qt::PlainText);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        pushButtonWorkEx = new QPushButton(tab);
        pushButtonWorkEx->setObjectName(QStringLiteral("pushButtonWorkEx"));
        pushButtonWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_12->addWidget(pushButtonWorkEx);


        gridLayout_5->addLayout(verticalLayout_12, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        verticalLayout_9->addWidget(label);

        firstNameLineEdit = new QLineEdit(groupBox_2);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        firstNameLineEdit->setMinimumSize(QSize(55, 30));
        QFont font4;
        font4.setKerning(false);
        firstNameLineEdit->setFont(font4);
        firstNameLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_9->addWidget(firstNameLineEdit);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);

        verticalLayout_10->addWidget(label_2);

        lastNameLineEdit = new QLineEdit(groupBox_2);
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
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        addressLineEdit = new QLineEdit(groupBox_2);
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
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        verticalLayout_5->addWidget(label_4);

        cityLineEdit = new QLineEdit(groupBox_2);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setMinimumSize(QSize(0, 30));
        cityLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_5->addWidget(cityLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        verticalLayout_6->addWidget(label_5);

        stateLineEdit = new QLineEdit(groupBox_2);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setMinimumSize(QSize(0, 30));
        stateLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_6->addWidget(stateLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        verticalLayout_7->addWidget(label_6);

        zipLineEdit = new QLineEdit(groupBox_2);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setMinimumSize(QSize(0, 30));
        zipLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_7->addWidget(zipLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_7);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        verticalLayout_3->addWidget(label_7);

        mobileLineEdit = new QLineEdit(groupBox_2);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        mobileLineEdit->setMinimumSize(QSize(0, 30));
        mobileLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_3->addWidget(mobileLineEdit);


        gridLayout_2->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        verticalLayout_4->addWidget(label_8);

        emailLineEdit = new QLineEdit(groupBox_2);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setMinimumSize(QSize(0, 30));
        emailLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_4->addWidget(emailLineEdit);


        gridLayout_2->addLayout(verticalLayout_4, 3, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

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
        label_15->setFont(font2);
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
        if (tableWidgetWorkEx->columnCount() < 7)
            tableWidgetWorkEx->setColumnCount(7);
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font5);
        tableWidgetWorkEx->setHorizontalHeaderItem(6, __qtablewidgetitem6);
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
        label_17->setFont(font2);
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
        if (tableWidgetEducation->columnCount() < 7)
            tableWidgetEducation->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font5);
        tableWidgetEducation->setHorizontalHeaderItem(6, __qtablewidgetitem13);
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
        gridLayout_9 = new QGridLayout(tab_4);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(0, 50));
        label_22->setFont(font2);
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_22->setFrameShadow(QFrame::Raised);
        label_22->setTextFormat(Qt::PlainText);

        gridLayout_9->addWidget(label_22, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableWidgetSkills = new QTableWidget(groupBox_4);
        if (tableWidgetSkills->columnCount() < 4)
            tableWidgetSkills->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font5);
        tableWidgetSkills->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font5);
        tableWidgetSkills->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font5);
        tableWidgetSkills->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font5);
        tableWidgetSkills->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        tableWidgetSkills->setObjectName(QStringLiteral("tableWidgetSkills"));
        tableWidgetSkills->setAlternatingRowColors(true);
        tableWidgetSkills->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout_8->addWidget(tableWidgetSkills, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_4, 1, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);

        pushButtonAddSkill = new QPushButton(tab_4);
        pushButtonAddSkill->setObjectName(QStringLiteral("pushButtonAddSkill"));
        pushButtonAddSkill->setStyleSheet(QStringLiteral("background-color: rgb(159, 255, 144);"));

        verticalLayout_11->addWidget(pushButtonAddSkill);

        pushButtonEditSkill = new QPushButton(tab_4);
        pushButtonEditSkill->setObjectName(QStringLiteral("pushButtonEditSkill"));
        pushButtonEditSkill->setStyleSheet(QStringLiteral("background-color: rgb(159, 255, 144);"));

        verticalLayout_11->addWidget(pushButtonEditSkill);

        pushButtonDeleteSkill = new QPushButton(tab_4);
        pushButtonDeleteSkill->setObjectName(QStringLiteral("pushButtonDeleteSkill"));
        pushButtonDeleteSkill->setStyleSheet(QStringLiteral("background-color: rgb(255, 90, 57);"));

        verticalLayout_11->addWidget(pushButtonDeleteSkill);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        pushButtonAdditionalSkils = new QPushButton(tab_4);
        pushButtonAdditionalSkils->setObjectName(QStringLiteral("pushButtonAdditionalSkils"));
        pushButtonAdditionalSkils->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_11->addWidget(pushButtonAdditionalSkils);

        pushButtonBackEducation = new QPushButton(tab_4);
        pushButtonBackEducation->setObjectName(QStringLiteral("pushButtonBackEducation"));
        pushButtonBackEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout_11->addWidget(pushButtonBackEducation);


        gridLayout_9->addLayout(verticalLayout_11, 1, 1, 1, 1);

        tabWidgetMain->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(0, 50));
        label_24->setFont(font2);
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_24->setFrameShadow(QFrame::Raised);
        label_24->setTextFormat(Qt::PlainText);

        gridLayout_13->addWidget(label_24, 0, 0, 1, 2);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_10 = new QGridLayout(groupBox_5);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font);

        verticalLayout_16->addWidget(label_25);

        textEditAdditionalSkills = new QTextEdit(groupBox_5);
        textEditAdditionalSkills->setObjectName(QStringLiteral("textEditAdditionalSkills"));

        verticalLayout_16->addWidget(textEditAdditionalSkills);


        gridLayout_10->addLayout(verticalLayout_16, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_5, 1, 0, 1, 2);

        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_11 = new QGridLayout(groupBox_6);
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
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        horizontalLayout_7->addWidget(label_10);

        lineEditResumeName = new QLineEdit(groupBox_6);
        lineEditResumeName->setObjectName(QStringLiteral("lineEditResumeName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditResumeName->sizePolicy().hasHeightForWidth());
        lineEditResumeName->setSizePolicy(sizePolicy);
        lineEditResumeName->setMinimumSize(QSize(0, 30));
        QFont font6;
        font6.setPointSize(9);
        lineEditResumeName->setFont(font6);

        horizontalLayout_7->addWidget(lineEditResumeName);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        pushButtonSaveInDB = new QPushButton(groupBox_6);
        pushButtonSaveInDB->setObjectName(QStringLiteral("pushButtonSaveInDB"));
        pushButtonSaveInDB->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        horizontalLayout_9->addWidget(pushButtonSaveInDB);


        gridLayout_11->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_6, 2, 0, 1, 2);

        pushButtonBackSkills = new QPushButton(tab_5);
        pushButtonBackSkills->setObjectName(QStringLiteral("pushButtonBackSkills"));
        pushButtonBackSkills->setMaximumSize(QSize(100, 16777215));
        pushButtonBackSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        gridLayout_13->addWidget(pushButtonBackSkills, 3, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        radioButton = new QRadioButton(groupBox_7);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_12->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_7);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_12->addWidget(radioButton_2, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_10->addWidget(label_11);

        lineEditDirectoryPath = new QLineEdit(groupBox_7);
        lineEditDirectoryPath->setObjectName(QStringLiteral("lineEditDirectoryPath"));
        lineEditDirectoryPath->setMinimumSize(QSize(0, 30));

        horizontalLayout_10->addWidget(lineEditDirectoryPath);

        pushButtonBrowse = new QPushButton(groupBox_7);
        pushButtonBrowse->setObjectName(QStringLiteral("pushButtonBrowse"));

        horizontalLayout_10->addWidget(pushButtonBrowse);

        pushButtonExportAsPDF = new QPushButton(groupBox_7);
        pushButtonExportAsPDF->setObjectName(QStringLiteral("pushButtonExportAsPDF"));
        pushButtonExportAsPDF->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        horizontalLayout_10->addWidget(pushButtonExportAsPDF);


        gridLayout_12->addLayout(horizontalLayout_10, 1, 0, 1, 2);


        gridLayout_13->addWidget(groupBox_7, 3, 1, 1, 1);

        tabWidgetMain->addTab(tab_5, QString());

        gridLayout_3->addWidget(tabWidgetMain, 0, 1, 4, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidgetMain->setCurrentIndex(4);


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
        pushButtonWorkEx->setText(QApplication::translate("MainWindow", "-->  Work Experience", Q_NULLPTR));
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
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab), QApplication::translate("MainWindow", "Personal Details", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Add Work experience to showcase your skills", Q_NULLPTR));
        groupBox->setTitle(QString());
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
        pushButtonEducation->setText(QApplication::translate("MainWindow", "--> Education", Q_NULLPTR));
        pushButtonBackPersonal->setText(QApplication::translate("MainWindow", "<- -   Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_2), QApplication::translate("MainWindow", "Work Experience", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Add University/College details ", Q_NULLPTR));
        groupBox_3->setTitle(QString());
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
        pushButtonSkills->setText(QApplication::translate("MainWindow", "--> Skills", Q_NULLPTR));
        pushButtonBackWork->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_3), QApplication::translate("MainWindow", "Education", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Add Technical skills", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetSkills->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Tech_skills_pk", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetSkills->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Technical Skill", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetSkills->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Proficiency", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetSkills->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Years/Used", Q_NULLPTR));
        pushButtonAddSkill->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonEditSkill->setText(QApplication::translate("MainWindow", "EDIT", Q_NULLPTR));
        pushButtonDeleteSkill->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButtonAdditionalSkils->setText(QApplication::translate("MainWindow", "--> Additional Details", Q_NULLPTR));
        pushButtonBackEducation->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_4), QApplication::translate("MainWindow", "Technical Skills", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Add Additional Information that can be relevant ", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        label_25->setText(QApplication::translate("MainWindow", "Additional Skills/certificate(s)", Q_NULLPTR));
        textEditAdditionalSkills->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Certifications or relevant skills information", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        label_10->setText(QApplication::translate("MainWindow", "Resume Name (*)", Q_NULLPTR));
        pushButtonSaveInDB->setText(QApplication::translate("MainWindow", "Save in DB", Q_NULLPTR));
        pushButtonBackSkills->setText(QApplication::translate("MainWindow", "<--Back", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        radioButton->setText(QApplication::translate("MainWindow", "Template 1", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Template 2", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Directory path      ", Q_NULLPTR));
        pushButtonBrowse->setText(QApplication::translate("MainWindow", "BROWSE", Q_NULLPTR));
        pushButtonExportAsPDF->setText(QApplication::translate("MainWindow", "EXPORT as PDF", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_5), QApplication::translate("MainWindow", "Additional Details", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
