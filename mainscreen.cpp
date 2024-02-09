#include "mainscreen.h"
#include "ui_mainscreen.h"
#include <QString>

#include <iostream>
using namespace std;





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
    }

}


void MainScreen::on_loginBtn_clicked()
{
    QString loginEmail = ui->loginEmail->text();
    QString loginPw = ui->loginPw->text();


       ui->stackedWidget->setCurrentIndex(2);
    

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

