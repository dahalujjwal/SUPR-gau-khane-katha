#include "mainscreen.h"
#include "ui_mainscreen.h"
#include <QString>
#include <QMap>

#include <iostream>
using namespace std;

// Define a QMap to store signup information
QMap<QString, QString> signupInfo;



MainScreen::MainScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScreen)
{
    ui->setupUi(this);
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::on_signupLink_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void MainScreen::on_signupBtn_clicked()
{
    QString signupEmail = ui->signupEmail->text();
    QString signupPw = ui->signupPw->text();

    if(signupEmail.isEmpty() || signupPw.isEmpty())
    {
        ui->alertMsg->setText("Fill Clearly");
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(0);
        // Store signup information in the QMap
        signupInfo.insert(signupEmail, signupPw);
    }

}


void MainScreen::on_loginBtn_clicked()
{
    QString loginEmail = ui->loginEmail->text();
    QString loginPw = ui->loginPw->text();

    // Check if the login email exists in the signupInfo map and if the password matches
    if(signupInfo.contains(loginEmail) && signupInfo.value(loginEmail) == loginPw)
    {
       ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        ui->alertMsg2->setText("Incorrect Email & PW");
    }

}



void MainScreen::on_loginLink_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainScreen::on_startBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainScreen::on_loginBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainScreen::on_loginBtn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainScreen::on_loginBtn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainScreen::on_loginBtn_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainScreen::on_backBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainScreen::on_gauKhane_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainScreen::on_backBtn2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

