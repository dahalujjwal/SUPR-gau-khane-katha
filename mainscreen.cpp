#include "mainscreen.h"
#include "ui_mainscreen.h"
#include <QString>
#include <QDebug>
#include <QLabel>

#include <iostream>
using namespace std;


MainScreen::MainScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScreen),
    currentQuestionIndex(0),
    score(0)
{
    ui->setupUi(this);
    loadQuizQuestions();

    scorelabel = new QLabel(this);
    scorelabel->setText("Score: 0");
    scorelabel->setAlignment(Qt::AlignTop | Qt::AlignRight);
    ui->stackedWidget->addWidget(scorelabel);  // Add scoreLabel to the stackedWidget
    ui->stackedWidget->setCurrentIndex(0);
}

MainScreen::~MainScreen()
{
    delete ui;
}
void MainScreen::loadQuizQuestions()
{
    QuizQuestion question1 = {"Question 1", {"option1", "OPtion 2", "option3", "option4"}, 2};
    QuizQuestion question2 = {"Question 2", {"option a", "OPtion b", "option c", "optiond"}, 3};
    QuizQuestion question3 = {"Question 3", {"option a45", "OPtion b45", "option b45", "optiond45"}, 3};
    QuizQuestion question4 = {"Question 4", {"option d4", "OPtion d5", "option e4", "option e5"}, 3};
    quizQuestions = {question1, question2, question3, question4};
}

void MainScreen::displayCurrentQuestion()
{
    if (currentQuestionIndex < quizQuestions.size())
    {
        const QuizQuestion &currentQuestion = quizQuestions[currentQuestionIndex];
        ui->question->setText(currentQuestion.question);

        ui->radioButton->setText(currentQuestion.options[0]);
        ui->radioButton_2->setText(currentQuestion.options[1]);
        ui->radioButton_3->setText(currentQuestion.options[2]);
        ui->radioButton_4->setText(currentQuestion.options[3]);

        ui->stackedWidget->setCurrentIndex(5);
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void MainScreen::updateScoreLabel()
{
    scorelabel->setText("Score: " + QString::number(score));
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

void MainScreen::on_nextBtn_clicked()
{
    if (ui->radioButton->isChecked() && quizQuestions[currentQuestionIndex].correctOptionIndex == 0)
    {
        ++score;
    }
    ++currentQuestionIndex;
    updateScoreLabel();
    displayCurrentQuestion();
}

