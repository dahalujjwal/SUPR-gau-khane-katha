#include "loginpage.h"
#include "./ui_loginpage.h"
#include <QString>


LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButton_4_clicked()
{
        ui->stackedWidget->setCurrentIndex(0);
}


void LoginPage::on_pushButton_2_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}


void LoginPage::on_pushButton_clicked()
{
    QString loginEmail = ui->login_email->text();
    QString loginPW = ui->login_pw->text();

    if(loginEmail == "ujjwal" && loginPW == "ujjwal123")
    {
        ui->stackedWidget->setCurrentIndex(2);

    }
}


void LoginPage::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

