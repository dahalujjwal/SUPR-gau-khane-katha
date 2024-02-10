/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QFrame *loginFrame;
    QLabel *label;
    QPushButton *loginBtn;
    QLineEdit *loginEmail;
    QLabel *label_2;
    QLineEdit *loginPw;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *signupLink;
    QLabel *label_6;
    QLabel *alertMsg2;
    QWidget *signupPage;
    QFrame *signupFrame;
    QLabel *label_7;
    QPushButton *signupBtn;
    QLineEdit *signupEmail;
    QLabel *label_8;
    QLineEdit *signupPw;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *loginLink;
    QLabel *label_11;
    QLabel *alertMsg;
    QLabel *label_12;
    QLineEdit *firstName;
    QLineEdit *lastName;
    QLabel *label_13;
    QWidget *welcomePage;
    QLabel *supr;
    QLabel *welcome;
    QPushButton *startBtn;
    QWidget *catPage;
    QLabel *choose;
    QPushButton *loginBtn_2;
    QPushButton *loginBtn_3;
    QPushButton *loginBtn_5;
    QPushButton *loginBtn_6;
    QPushButton *gauKhane;
    QWidget *underCon;
    QLabel *under;
    QPushButton *backBtn;
    QWidget *questionOne;
    QLabel *question;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *nextBtn;
    QPushButton *backBtn2;
    QLabel *scoreLabel;
    QWidget *resultPage;
    QLabel *label_14;

    void setupUi(QMainWindow *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName("MainScreen");
        MainScreen->resize(1250, 648);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/supr_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainScreen->setWindowIcon(icon);
        centralwidget = new QWidget(MainScreen);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1251, 641));
        stackedWidget->setStyleSheet(QString::fromUtf8("*{\n"
"font-family : century gothic;\n"
"font-size: 24px;\n"
"background-color: rgb(0, 136, 255);\n"
"}\n"
"\n"
"#loginPage{\n"
"	border-image: url(:/password.jpg);\n"
"\n"
"}\n"
"#signupPage\n"
"{\n"
"\n"
"	border-image: url(:/password.jpg);\n"
"}\n"
"\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius : 10px;\n"
"}\n"
"\n"
"QPushButton \n"
"{\n"
"	background-color: rgb(255, 110, 31);\n"
"border-radius : 8px;\n"
"color : white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"\n"
"\n"
"QLabel {\n"
"color : black;\n"
"font: 13pt \"Segoe UI\";\n"
"}\n"
"\n"
"QLineEdit \n"
"{\n"
"background : transparent;\n"
"border : 1px solid black;\n"
"border-radius : 4px;\n"
"}\n"
"\n"
"#signupFrame , #loginFrame\n"
"{\n"
"border: 2px solid rgb(44, 44, 44);\n"
"}\n"
"\n"
"#welcome{\n"
"\n"
"	font: 700 30pt \"Segoe UI\";\n"
"}\n"
"\n"
"#supr{\n"
"background:transparent;\n"
"font:700 40pt;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""
                        "\n"
"#startBtn{\n"
"	background-color: #FF6E1F;\n"
"color:white;\n"
"font: 700 10pt ;\n"
"}\n"
"\n"
"#alertMsg \n"
"{\n"
"font-size:10pt;\n"
"background-color:transparent;\n"
"border:none;\n"
"color:red;\n"
"}\n"
"\n"
"#alertMsg2\n"
"{\n"
"font-size:10pt;\n"
"background-color:transparent;\n"
"border:none;\n"
"color:red;\n"
"}\n"
"\n"
"#startBtn:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"#gauKhane\n"
"{\n"
"	background-color: rgb(255, 35, 50);\n"
"}\n"
"\n"
"#gauKhane:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"#underCon\n"
"{\n"
"	background-image: url(:/welcomeBack.png);\n"
"}\n"
"\n"
"#questionOne\n"
"{\n"
"	border-image: url(:/gau_khane.png);\n"
"}\n"
"\n"
"\n"
"#question\n"
"{\n"
"background:transparent;\n"
"font:700 30pt;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"background-color:transparent;\n"
"	font: 700 17pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"#nextBtn\n"
"{\n"
"	background-col"
                        "or: rgb(29, 63, 255);\n"
"}\n"
"\n"
"#nextBtn:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"#backBtn2\n"
"{\n"
"	background-color: rgb(255, 47, 50);\n"
"}\n"
"\n"
"#backBtn2:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"#backBtn\n"
"{\n"
"	background-color: rgb(255, 47, 50);\n"
"}\n"
"\n"
"#backBtn:hover\n"
"{\n"
"background-color: rgb(41, 206, 16);\n"
"color :white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName("loginFrame");
        loginFrame->setGeometry(QRect(380, 60, 491, 501));
        loginFrame->setStyleSheet(QString::fromUtf8(""));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        label = new QLabel(loginFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 81, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 15pt ;\n"
"color : black;"));
        loginBtn = new QPushButton(loginFrame);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setGeometry(QRect(80, 300, 331, 41));
        loginBtn->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        loginEmail = new QLineEdit(loginFrame);
        loginEmail->setObjectName("loginEmail");
        loginEmail->setGeometry(QRect(80, 110, 331, 51));
        loginEmail->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 80, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;"));
        loginPw = new QLineEdit(loginFrame);
        loginPw->setObjectName("loginPw");
        loginPw->setGeometry(QRect(80, 220, 331, 51));
        loginPw->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        loginPw->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(loginFrame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 190, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_4 = new QLabel(loginFrame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 350, 171, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_5 = new QLabel(loginFrame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 410, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 17px \"Segoe UI\";"));
        signupLink = new QPushButton(loginFrame);
        signupLink->setObjectName("signupLink");
        signupLink->setGeometry(QRect(280, 410, 91, 31));
        signupLink->setCursor(QCursor(Qt::PointingHandCursor));
        signupLink->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"text-decoration: underline;\n"
"font: 12pt;\n"
"color : black;\n"
"font: 14pt \"Segoe UI\";"));
        label_6 = new QLabel(loginFrame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 460, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 9.5pt \"Segoe UI\";"));
        alertMsg2 = new QLabel(loginFrame);
        alertMsg2->setObjectName("alertMsg2");
        alertMsg2->setGeometry(QRect(280, 460, 141, 31));
        stackedWidget->addWidget(loginPage);
        signupPage = new QWidget();
        signupPage->setObjectName("signupPage");
        signupFrame = new QFrame(signupPage);
        signupFrame->setObjectName("signupFrame");
        signupFrame->setGeometry(QRect(360, 30, 491, 571));
        signupFrame->setStyleSheet(QString::fromUtf8(""));
        signupFrame->setFrameShape(QFrame::StyledPanel);
        signupFrame->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(signupFrame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 20, 101, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 15pt ;\n"
"color : black;"));
        signupBtn = new QPushButton(signupFrame);
        signupBtn->setObjectName("signupBtn");
        signupBtn->setGeometry(QRect(80, 410, 331, 41));
        signupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        signupBtn->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        signupEmail = new QLineEdit(signupFrame);
        signupEmail->setObjectName("signupEmail");
        signupEmail->setGeometry(QRect(80, 210, 331, 51));
        signupEmail->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        label_8 = new QLabel(signupFrame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 180, 81, 21));
        label_8->setStyleSheet(QString::fromUtf8("background: transparent;"));
        signupPw = new QLineEdit(signupFrame);
        signupPw->setObjectName("signupPw");
        signupPw->setGeometry(QRect(80, 320, 331, 51));
        signupPw->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        signupPw->setEchoMode(QLineEdit::Password);
        label_9 = new QLabel(signupFrame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(80, 290, 101, 21));
        label_9->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_10 = new QLabel(signupFrame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(110, 470, 171, 31));
        label_10->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 17px \"Segoe UI\";"));
        loginLink = new QPushButton(signupFrame);
        loginLink->setObjectName("loginLink");
        loginLink->setGeometry(QRect(280, 470, 91, 31));
        loginLink->setCursor(QCursor(Qt::PointingHandCursor));
        loginLink->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"text-decoration: underline;\n"
"font: 12pt;\n"
"color : black;\n"
"font: 14pt \"Segoe UI\";"));
        label_11 = new QLabel(signupFrame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 520, 141, 31));
        label_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 700 9.5pt \"Segoe UI\";"));
        alertMsg = new QLabel(signupFrame);
        alertMsg->setObjectName("alertMsg");
        alertMsg->setGeometry(QRect(210, 370, 141, 31));
        label_12 = new QLabel(signupFrame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(80, 80, 111, 21));
        label_12->setStyleSheet(QString::fromUtf8("background: transparent;"));
        firstName = new QLineEdit(signupFrame);
        firstName->setObjectName("firstName");
        firstName->setGeometry(QRect(80, 110, 151, 51));
        firstName->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        lastName = new QLineEdit(signupFrame);
        lastName->setObjectName("lastName");
        lastName->setGeometry(QRect(250, 110, 151, 51));
        lastName->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        label_13 = new QLabel(signupFrame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(250, 80, 111, 21));
        label_13->setStyleSheet(QString::fromUtf8("background: transparent;"));
        stackedWidget->addWidget(signupPage);
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        welcomePage->setStyleSheet(QString::fromUtf8("#welcomePage\n"
"{\n"
"	\n"
"	border-image: url(:/welcomeBack.png);\n"
"}"));
        supr = new QLabel(welcomePage);
        supr->setObjectName("supr");
        supr->setGeometry(QRect(200, 260, 831, 111));
        welcome = new QLabel(welcomePage);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(410, 190, 381, 71));
        startBtn = new QPushButton(welcomePage);
        startBtn->setObjectName("startBtn");
        startBtn->setGeometry(QRect(440, 480, 331, 41));
        startBtn->setCursor(QCursor(Qt::PointingHandCursor));
        startBtn->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        stackedWidget->addWidget(welcomePage);
        catPage = new QWidget();
        catPage->setObjectName("catPage");
        catPage->setStyleSheet(QString::fromUtf8("#catPage\n"
"{\n"
"	border-image: url(:/welcomeBack.png);\n"
"}\n"
""));
        choose = new QLabel(catPage);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(450, 90, 311, 51));
        choose->setStyleSheet(QString::fromUtf8("#choose\n"
"{\n"
"	font: 700 20pt \"Segoe UI\";\n"
"}"));
        loginBtn_2 = new QPushButton(catPage);
        loginBtn_2->setObjectName("loginBtn_2");
        loginBtn_2->setGeometry(QRect(440, 250, 331, 41));
        loginBtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn_2->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        loginBtn_3 = new QPushButton(catPage);
        loginBtn_3->setObjectName("loginBtn_3");
        loginBtn_3->setGeometry(QRect(440, 310, 331, 41));
        loginBtn_3->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn_3->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        loginBtn_5 = new QPushButton(catPage);
        loginBtn_5->setObjectName("loginBtn_5");
        loginBtn_5->setGeometry(QRect(440, 430, 331, 41));
        loginBtn_5->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn_5->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        loginBtn_6 = new QPushButton(catPage);
        loginBtn_6->setObjectName("loginBtn_6");
        loginBtn_6->setGeometry(QRect(440, 490, 331, 41));
        loginBtn_6->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn_6->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        gauKhane = new QPushButton(catPage);
        gauKhane->setObjectName("gauKhane");
        gauKhane->setGeometry(QRect(440, 370, 331, 41));
        gauKhane->setCursor(QCursor(Qt::PointingHandCursor));
        gauKhane->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        stackedWidget->addWidget(catPage);
        underCon = new QWidget();
        underCon->setObjectName("underCon");
        under = new QLabel(underCon);
        under->setObjectName("under");
        under->setGeometry(QRect(170, 290, 831, 111));
        under->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font:700 40pt;\n"
"	color: rgb(255, 255, 255);"));
        backBtn = new QPushButton(underCon);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(530, 440, 131, 41));
        backBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backBtn->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        stackedWidget->addWidget(underCon);
        questionOne = new QWidget();
        questionOne->setObjectName("questionOne");
        question = new QLabel(questionOne);
        question->setObjectName("question");
        question->setGeometry(QRect(470, 210, 831, 111));
        radioButton = new QRadioButton(questionOne);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(620, 350, 112, 26));
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_2 = new QRadioButton(questionOne);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(860, 350, 112, 26));
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_3 = new QRadioButton(questionOne);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(620, 430, 112, 26));
        radioButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_4 = new QRadioButton(questionOne);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(860, 430, 112, 26));
        radioButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        nextBtn = new QPushButton(questionOne);
        nextBtn->setObjectName("nextBtn");
        nextBtn->setGeometry(QRect(1020, 540, 131, 41));
        nextBtn->setCursor(QCursor(Qt::PointingHandCursor));
        nextBtn->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        backBtn2 = new QPushButton(questionOne);
        backBtn2->setObjectName("backBtn2");
        backBtn2->setGeometry(QRect(450, 540, 131, 41));
        backBtn2->setCursor(QCursor(Qt::PointingHandCursor));
        backBtn2->setStyleSheet(QString::fromUtf8("font: 700 12pt ;"));
        scoreLabel = new QLabel(questionOne);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(1080, 30, 121, 31));
        stackedWidget->addWidget(questionOne);
        resultPage = new QWidget();
        resultPage->setObjectName("resultPage");
        resultPage->setStyleSheet(QString::fromUtf8("background-image: url(:/welcomeBack.png);"));
        label_14 = new QLabel(resultPage);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(560, 30, 141, 51));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";"));
        stackedWidget->addWidget(resultPage);
        MainScreen->setCentralWidget(centralwidget);

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QMainWindow *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "SUPR \340\244\227\340\244\276\340\244\211 \340\244\226\340\244\276\340\244\250\340\245\207 \340\244\225\340\244\245\340\244\276", nullptr));
        label->setText(QCoreApplication::translate("MainScreen", "LOGIN", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainScreen", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainScreen", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("MainScreen", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainScreen", "Forgot Password?", nullptr));
        label_5->setText(QCoreApplication::translate("MainScreen", "Need an account?", nullptr));
        signupLink->setText(QCoreApplication::translate("MainScreen", "SIGN UP", nullptr));
        label_6->setText(QCoreApplication::translate("MainScreen", "Database Status...", nullptr));
        alertMsg2->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainScreen", "SIGN UP", nullptr));
        signupBtn->setText(QCoreApplication::translate("MainScreen", "SIGN UP", nullptr));
        label_8->setText(QCoreApplication::translate("MainScreen", "Email", nullptr));
        label_9->setText(QCoreApplication::translate("MainScreen", "Password", nullptr));
        label_10->setText(QCoreApplication::translate("MainScreen", "Already have account?", nullptr));
        loginLink->setText(QCoreApplication::translate("MainScreen", "LOGIN", nullptr));
        label_11->setText(QCoreApplication::translate("MainScreen", "Database Status...", nullptr));
        alertMsg->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainScreen", "First Name", nullptr));
        label_13->setText(QCoreApplication::translate("MainScreen", "Last Name", nullptr));
        supr->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\">&quot; SUPR \340\244\227\340\244\276\340\244\211 \340\244\226\340\244\276\340\244\250\340\245\207 \340\244\225\340\244\245\340\244\276 &quot;</p></body></html>", nullptr));
        welcome->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\">WELCOME TO</p><p align=\"center\"><br/></p></body></html>", nullptr));
        startBtn->setText(QCoreApplication::translate("MainScreen", "START", nullptr));
        choose->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\">CHOOSE</p></body></html>", nullptr));
        loginBtn_2->setText(QCoreApplication::translate("MainScreen", "SCIENCE", nullptr));
        loginBtn_3->setText(QCoreApplication::translate("MainScreen", "SPORTS", nullptr));
        loginBtn_5->setText(QCoreApplication::translate("MainScreen", "ESPORTS", nullptr));
        loginBtn_6->setText(QCoreApplication::translate("MainScreen", "HISTORY", nullptr));
        gauKhane->setText(QCoreApplication::translate("MainScreen", "\340\244\227\340\244\276\340\244\211 \340\244\226\340\244\276\340\244\250\340\245\207 \340\244\225\340\244\245\340\244\276", nullptr));
        under->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p align=\"center\">UNDER CONSTRUCTION...</p></body></html>", nullptr));
        backBtn->setText(QCoreApplication::translate("MainScreen", "BACK", nullptr));
        question->setText(QCoreApplication::translate("MainScreen", "<html><head/><body><p>\340\244\237\340\244\276\340\244\211\340\244\225\340\245\213\340\244\262\340\245\207 \340\244\262\340\245\207\340\244\226\340\245\215\340\244\250\340\245\207, \340\244\252\340\245\201\340\244\232\340\245\215\340\244\233\340\244\260\340\244\262\340\245\207 \340\244\256\340\245\207\340\244\237\340\244\250\340\245\207, \340\244\225\340\245\207 \340\244\271\340\245\213 ?</p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("MainScreen", "\340\244\207\340\244\270\340\245\215\340\244\225\340\245\207\340\244\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainScreen", "\340\244\207\340\244\260\340\245\207\340\244\234\340\244\260", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainScreen", "\340\244\266\340\244\276\340\244\260\340\245\215\340\244\252\340\245\215\340\244\250\340\244\260", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainScreen", "\340\244\252\340\245\207\340\244\250\340\245\215\340\244\270\340\244\277\340\244\262", nullptr));
        nextBtn->setText(QCoreApplication::translate("MainScreen", "Next", nullptr));
        backBtn2->setText(QCoreApplication::translate("MainScreen", "Back", nullptr));
        scoreLabel->setText(QCoreApplication::translate("MainScreen", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainScreen", "<center>Result</center>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
