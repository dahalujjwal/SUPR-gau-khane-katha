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

    connect(ui->radioButton, SIGNAL(toggled(bool)), this, SLOT(onAnswerButtonToggled(bool)));
    connect(ui->radioButton_2, SIGNAL(toggled(bool)), this, SLOT(onAnswerButtonToggled(bool)));
    connect(ui->radioButton_3, SIGNAL(toggled(bool)), this, SLOT(onAnswerButtonToggled(bool)));
    connect(ui->radioButton_4, SIGNAL(toggled(bool)), this, SLOT(onAnswerButtonToggled(bool)));

}

MainScreen::~MainScreen()
{
    delete ui;
}
void MainScreen::loadQuizQuestions()
{
    QuizQuestion question1 = {"Question 1", {"option1", "OPtion 2", "option3", "option4"}, 1};
    QuizQuestion question2 = {"Question 2", {"option a", "OPtion b", "option c", "optiond"}, 2};
    QuizQuestion question3 = {"Question 3", {"option a45", "OPtion b45", "option b45", "optiond45"}, 3};
    QuizQuestion question4 = {"Question 4", {"option d4", "OPtion d5", "option e4", "option e5"}, 4};
    quizQuestions = {question1, question2, question3, question4};
}

void MainScreen::displayCurrentQuestion()
{
    ui->radioButton->setChecked(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setChecked(false);

    if (currentQuestionIndex < quizQuestions.size())
    {
        ui->radioButton->setChecked(false);
        ui->radioButton_2->setChecked(false);
        ui->radioButton_3->setChecked(false);
        ui->radioButton_4->setChecked(false);
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
    ui->scoreLabel->setText("Score: " + QString::number(score));
    ui->scoreLabel->setAlignment(Qt::AlignCenter);
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
    bool scoreUpdated=false;
    ui->demo_label->hide();
    ui->radioButton->setStyleSheet("background-color: none;");
    ui->radioButton_2->setStyleSheet("background-color: none;");
    ui->radioButton_3->setStyleSheet("background-color: none;");
    ui->radioButton_4->setStyleSheet("background-color: none;");

    ui->radioButton->setAutoExclusive(false);
    ui->radioButton_2->setAutoExclusive(false);
    ui->radioButton_3->setAutoExclusive(false);
    ui->radioButton_4->setAutoExclusive(false);

    // Disable all radio buttons for the current question
    ui->radioButton->setEnabled(false);
    ui->radioButton_2->setEnabled(false);
    ui->radioButton_3->setEnabled(false);
    ui->radioButton_4->setEnabled(false);

    for (int i = 0; i < 4; ++i) {
        QRadioButton* radioButton = nullptr;

        // Determine which radio button to check based on the loop index
        switch (i) {
        case 0:
            radioButton = ui->radioButton;
            break;
        case 1:
            radioButton = ui->radioButton_2;
            break;
        case 2:
            radioButton = ui->radioButton_3;
            break;
        case 3:
            radioButton = ui->radioButton_4;
            break;
        }

        // Check if the current radio button is checked and matches the correct option index
        if (radioButton && radioButton->isChecked() && i == quizQuestions[currentQuestionIndex].correctOptionIndex && !scoreUpdated) {
            // Increment the score because the user selected the correct answer
            ++score;
            scoreUpdated = true;  // Set the flag to true to avoid incrementing the score multiple times
            break;  // Exit the loop since we found the correct answer
        }
    }

    // Move to the next question or handle as needed
    ++currentQuestionIndex;
    updateScoreLabel();
    displayCurrentQuestion();

    // Enable radio buttons for the new question
    ui->radioButton->setEnabled(true);
    ui->radioButton_2->setEnabled(true);
    ui->radioButton_3->setEnabled(true);
    ui->radioButton_4->setEnabled(true);
}

// void MainScreen::onAnswerButtonToggled(bool checked)
// {
//     QRadioButton *toggledButton = qobject_cast<QRadioButton*>(sender());
//     if (toggledButton && checked) {
//         // Get the index of the toggled button
//         int toggledIndex = toggledButton->objectName().right(1).toInt();

//         // Get the correct option index for the current question
//         int correctIndex = quizQuestions[currentQuestionIndex].correctOptionIndex;

//         // Check if the toggled button's index matches the correct option index
//         if (toggledIndex == correctIndex) {
//             // Correct answer, change background to green
//             toggledButton->setStyleSheet("background-color: green;");
//         } else {
//             // Wrong answer, change background to red
//             toggledButton->setStyleSheet("background-color: red;");

//             // Find and highlight the correct answer
//             QRadioButton *correctButton = nullptr;

//             switch (correctIndex) {
//             case 1:
//                 correctButton = ui->radioButton;
//                 break;
//             case 2:
//                 correctButton = ui->radioButton_2;
//                 break;
//             case 3:
//                 correctButton = ui->radioButton_3;
//                 break;
//             case 4:
//                 correctButton = ui->radioButton_4;
//                 break;
//             }

//             if (correctButton) {
//                 correctButton->setStyleSheet("background-color: green;");
//             }
//         }

//         // Disable all radio buttons for the current question
//         ui->radioButton->setEnabled(false);
//         ui->radioButton_2->setEnabled(false);
//         ui->radioButton_3->setEnabled(false);
//         ui->radioButton_4->setEnabled(false);
//     }
// }

void MainScreen::onAnswerButtonToggled(bool checked)
{
    QRadioButton *toggledButton = qobject_cast<QRadioButton*>(sender());
    if (toggledButton && checked) {
        // Get the index of the toggled button
        int toggledIndex = toggledButton->objectName().right(1).toInt();

        // Get the correct option index for the current question
        int correctIndex = quizQuestions[currentQuestionIndex].correctOptionIndex;

        // Check if the toggled button's index matches the correct option index
        if (toggledIndex == correctIndex) {
            // Correct answer, increment the score
            ++score;
            updateScoreLabel();

            // Change background to green
            toggledButton->setStyleSheet("background-color: green;");
        } else {
            // Wrong answer, change background to red
            toggledButton->setStyleSheet("background-color: red;");

            // Find and highlight the correct answer
            QRadioButton *correctButton = nullptr;

            switch (correctIndex) {
            case 1:
                correctButton = ui->radioButton;
                break;
            case 2:
                correctButton = ui->radioButton_2;
                break;
            case 3:
                correctButton = ui->radioButton_3;
                break;
            case 4:
                correctButton = ui->radioButton_4;
                break;
            }

            if (correctButton) {
                correctButton->setStyleSheet("background-color: green;");
            }
        }

        // Disable all radio buttons for the current question
        ui->radioButton->setEnabled(false);
        ui->radioButton_2->setEnabled(false);
        ui->radioButton_3->setEnabled(false);
        ui->radioButton_4->setEnabled(false);
    }
}




