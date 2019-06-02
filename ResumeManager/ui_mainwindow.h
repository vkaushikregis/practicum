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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidgetMain;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLineEdit *cityLineEdit;
    QLineEdit *stateLineEdit;
    QLineEdit *zipLineEdit;
    QLineEdit *firstNameLineEdit;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *mobileLineEdit;
    QLabel *label_6;
    QLineEdit *addressLineEdit;
    QLineEdit *lastNameLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *emailLineEdit;
    QPushButton *pushButtonWorkEx;
    QLabel *label_9;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLineEdit *lineEdit_5;
    QLabel *label_14;
    QLabel *label_13;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButtonEducation;
    QPushButton *pushButtonBackPersonal;
    QWidget *tab_3;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_19;
    QLineEdit *lineEdit_8;
    QLabel *label_20;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_9;
    QLabel *label_21;
    QPushButton *pushButtonSkills;
    QPushButton *pushButton_2;
    QPushButton *pushButtonBackWork;
    QLabel *label_23;
    QLineEdit *lineEdit_10;
    QWidget *tab_4;
    QLabel *label_22;
    QTableWidget *tableWidget;
    QPushButton *pushButtonBackEducation;
    QPushButton *pushButtonAdditionalSkils;
    QPushButton *pushButtonAddSkill;
    QPushButton *pushButtonDeleteSkill;
    QWidget *tab_5;
    QPushButton *pushButtonAdditionalSkils_2;
    QPushButton *pushButtonBackSkills;
    QPushButton *pushButtonBackEducation_2;
    QLabel *label_24;
    QTextEdit *textEdit_2;
    QLabel *label_25;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1068, 573);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidgetMain = new QTabWidget(centralWidget);
        tabWidgetMain->setObjectName(QStringLiteral("tabWidgetMain"));
        tabWidgetMain->setGeometry(QRect(220, 20, 831, 491));
        tabWidgetMain->setStyleSheet(QStringLiteral("background-color: rgb(252, 255, 237);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cityLineEdit = new QLineEdit(tab);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(cityLineEdit, 6, 0, 1, 1);

        stateLineEdit = new QLineEdit(tab);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(stateLineEdit, 6, 1, 1, 2);

        zipLineEdit = new QLineEdit(tab);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(zipLineEdit, 6, 3, 1, 1);

        firstNameLineEdit = new QLineEdit(tab);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        firstNameLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(firstNameLineEdit, 2, 0, 1, 2);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 5, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 7, 2, 1, 1);

        mobileLineEdit = new QLineEdit(tab);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        mobileLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(mobileLineEdit, 8, 0, 1, 2);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 5, 3, 1, 1);

        addressLineEdit = new QLineEdit(tab);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(addressLineEdit, 4, 0, 1, 4);

        lastNameLineEdit = new QLineEdit(tab);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));

        gridLayout_2->addWidget(lastNameLineEdit, 2, 2, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 2, 1, 1);

        emailLineEdit = new QLineEdit(tab);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(emailLineEdit, 8, 2, 1, 2);

        pushButtonWorkEx = new QPushButton(tab);
        pushButtonWorkEx->setObjectName(QStringLiteral("pushButtonWorkEx"));
        pushButtonWorkEx->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        gridLayout_2->addWidget(pushButtonWorkEx, 9, 4, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 4);

        tabWidgetMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_15->setFrameShadow(QFrame::Raised);
        label_15->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_15, 0, 0, 1, 3);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 0, 1, 3);

        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);

        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 4, 2, 1, 1);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 4, 0, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 3, 1, 1, 1);

        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 6, 0, 1, 3);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 7, 0, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 8, 0, 3, 3);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(pushButton, 8, 3, 1, 1);

        pushButtonEducation = new QPushButton(tab_2);
        pushButtonEducation->setObjectName(QStringLiteral("pushButtonEducation"));
        pushButtonEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(pushButtonEducation, 9, 3, 1, 1);

        pushButtonBackPersonal = new QPushButton(tab_2);
        pushButtonBackPersonal->setObjectName(QStringLiteral("pushButtonBackPersonal"));
        pushButtonBackPersonal->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        gridLayout->addWidget(pushButtonBackPersonal, 10, 3, 1, 1);

        tabWidgetMain->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 10, 641, 46));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_17->setFrameShadow(QFrame::Raised);
        label_17->setTextFormat(Qt::PlainText);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 70, 111, 16));
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(10, 100, 641, 22));
        lineEdit_7 = new QLineEdit(tab_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(288, 180, 201, 22));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(5, 140, 276, 21));
        lineEdit_8 = new QLineEdit(tab_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(5, 180, 276, 22));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(288, 140, 275, 21));
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(510, 180, 128, 20));
        lineEdit_9 = new QLineEdit(tab_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(10, 260, 641, 22));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 220, 276, 21));
        pushButtonSkills = new QPushButton(tab_3);
        pushButtonSkills->setObjectName(QStringLiteral("pushButtonSkills"));
        pushButtonSkills->setGeometry(QRect(660, 385, 131, 28));
        pushButtonSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 350, 131, 28));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonBackWork = new QPushButton(tab_3);
        pushButtonBackWork->setObjectName(QStringLiteral("pushButtonBackWork"));
        pushButtonBackWork->setGeometry(QRect(660, 420, 131, 28));
        pushButtonBackWork->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 300, 276, 21));
        lineEdit_10 = new QLineEdit(tab_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(10, 330, 201, 22));
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
        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 110, 641, 311));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        pushButtonBackEducation = new QPushButton(tab_4);
        pushButtonBackEducation->setObjectName(QStringLiteral("pushButtonBackEducation"));
        pushButtonBackEducation->setGeometry(QRect(670, 390, 141, 28));
        pushButtonBackEducation->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonAdditionalSkils = new QPushButton(tab_4);
        pushButtonAdditionalSkils->setObjectName(QStringLiteral("pushButtonAdditionalSkils"));
        pushButtonAdditionalSkils->setGeometry(QRect(670, 350, 141, 28));
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
        pushButtonAdditionalSkils_2 = new QPushButton(tab_5);
        pushButtonAdditionalSkils_2->setObjectName(QStringLiteral("pushButtonAdditionalSkils_2"));
        pushButtonAdditionalSkils_2->setGeometry(QRect(250, 270, 141, 28));
        pushButtonAdditionalSkils_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pushButtonBackSkills = new QPushButton(tab_5);
        pushButtonBackSkills->setObjectName(QStringLiteral("pushButtonBackSkills"));
        pushButtonBackSkills->setGeometry(QRect(10, 270, 141, 28));
        pushButtonBackSkills->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        pushButtonBackEducation_2 = new QPushButton(tab_5);
        pushButtonBackEducation_2->setObjectName(QStringLiteral("pushButtonBackEducation_2"));
        pushButtonBackEducation_2->setGeometry(QRect(520, 270, 141, 28));
        pushButtonBackEducation_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 651, 46));
        label_24->setFont(font);
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_24->setFrameShadow(QFrame::Raised);
        label_24->setTextFormat(Qt::PlainText);
        textEdit_2 = new QTextEdit(tab_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 110, 651, 98));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 80, 181, 16));
        tabWidgetMain->addTab(tab_5, QString());
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 84, 191, 421));
        listWidget->setMaximumSize(QSize(200, 16777215));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 191, 22));
        lineEdit->setMaximumSize(QSize(200, 16777215));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 60, 131, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1068, 26));
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
#ifndef QT_NO_WHATSTHIS
        tabWidgetMain->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cityLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cityLineEdit->setText(QString());
        cityLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Orlando", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stateLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stateLineEdit->setText(QString());
        stateLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Florida", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zipLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zipLineEdit->setText(QString());
        zipLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 32719", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        firstNameLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        firstNameLineEdit->setText(QString());
        firstNameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Vishal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Mobile (*)", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "State (*)", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "First Name (*)", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Email (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mobileLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mobileLineEdit->setText(QString());
        mobileLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 858-610-8419", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Zip (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressLineEdit->setText(QString());
        addressLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Altamira Place Apt#205", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lastNameLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lastNameLineEdit->setWhatsThis(QApplication::translate("MainWindow", "e.g Vishal", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lastNameLineEdit->setText(QString());
        lastNameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Kaushik", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Stree Address (*)", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "City (*)", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Last Name (*)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        emailLineEdit->setToolTip(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. vishal_kaushik@yahoo.com", Q_NULLPTR));
        pushButtonWorkEx->setText(QApplication::translate("MainWindow", "-->  Work Experience", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Welcome to ResuManager. Take a step towards your bright future!", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab), QApplication::translate("MainWindow", "Personal Details", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Add Work experience to showcase your skills", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Company Name ", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "e.g : Qorvo Inc.", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 01/01/2018", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Currently working", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 01/01/2016", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "To", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "e.g : Software Engineer", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Job Description", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        textEdit->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Application Programming exeperience using C++/Linux", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Add Another Job", Q_NULLPTR));
        pushButtonEducation->setText(QApplication::translate("MainWindow", "--> Education", Q_NULLPTR));
        pushButtonBackPersonal->setText(QApplication::translate("MainWindow", "<- -   Back", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_2), QApplication::translate("MainWindow", "Work Experience", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Add University/College details ", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "University/College", Q_NULLPTR));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Regis University", Q_NULLPTR));
        lineEdit_7->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 01/01/2018", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 01/01/2016", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "To", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Currently pursuing", Q_NULLPTR));
        lineEdit_9->setPlaceholderText(QApplication::translate("MainWindow", "e.g : MS in Software Engineering", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Major/Minor", Q_NULLPTR));
        pushButtonSkills->setText(QApplication::translate("MainWindow", "--> Skills", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Add Another College", Q_NULLPTR));
        pushButtonBackWork->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "GPA", Q_NULLPTR));
        lineEdit_10->setPlaceholderText(QApplication::translate("MainWindow", "e.g. 3.8", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_3), QApplication::translate("MainWindow", "Education", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Add Technical skills", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Technical Skill", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Proficiency", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Years/Used", Q_NULLPTR));
        pushButtonBackEducation->setText(QApplication::translate("MainWindow", "<-- Back", Q_NULLPTR));
        pushButtonAdditionalSkils->setText(QApplication::translate("MainWindow", "--> Additional Details", Q_NULLPTR));
        pushButtonAddSkill->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButtonDeleteSkill->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_4), QApplication::translate("MainWindow", "Technical Skills", Q_NULLPTR));
        pushButtonAdditionalSkils_2->setText(QApplication::translate("MainWindow", "Save in DB", Q_NULLPTR));
        pushButtonBackSkills->setText(QApplication::translate("MainWindow", "<--Back", Q_NULLPTR));
        pushButtonBackEducation_2->setText(QApplication::translate("MainWindow", "Export as PDF", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Add Additional Information that can be relevant ", Q_NULLPTR));
        textEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Certifications or relevant skills information", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Additional Skills/certificate(s)/", Q_NULLPTR));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_5), QApplication::translate("MainWindow", "Additional Details", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Existing Resume", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
