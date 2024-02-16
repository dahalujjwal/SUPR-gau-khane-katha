#include "mainscreen.h"
#include "ui_mainscreen.h"
#include <QString>
#include <QDebug>
#include <QLabel>
#include <QTextEdit>

#include "database.h"


/*

Index:

login page :0
sign up page : 1
welcome page : 2
category page : 3
under construction page : 4
question page : 5
display score : 6
thank you page : 7

*/

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

    //connecting mysql database
    mydb = QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("localhost");
    mydb.setUserName("root");
    mydb.setPassword("");
    mydb.setDatabaseName("supr");

    if(mydb.open())
    {
        qDebug() << "Database is Connected";
    }
    else
    {
        qDebug() << "Database is not connected ";
    }


}

MainScreen::~MainScreen()
{
    delete ui;
}
void MainScreen::loadQuizQuestions()
{
    QuizQuestion question1 = {"टाउकोले लेख्ने, पुच्छरले मेटने, के हो ?", {"इस्केल", "इरेजर", "शार्प्नर", "पेन्सिल"}, 4};
    QuizQuestion question2 = {"जसले किन्छ उसले राख्दैन, जसले राख्छ उसले किन्दैन, के हो ? ", {"उपहार", "रुमाल", "कलम", "प्रसाद"}, 1};
    QuizQuestion question3 = {"लामो लामो लहरामा फल्ने मिठो फल खाँदा मुखभरि जल नै जल, के हो ? ", {"तरबुजा", "लिच्ची", "अंगुर", "खरबुजा"}, 3};
    QuizQuestion question4 = {"खिरिलो साँढेको जिउ भरि काडाई काँडा, के हो ? ", {"तिते करेला", "ऐसेलु", "धतुर", "लिच्ची"}, 1};
    QuizQuestion question5 = {"जति तान्यो त्यति सानो हुने, के हो ? ", {"खाल्डो", "सलाई", "मैन बत्ती", "चुरोट"}, 4};
    QuizQuestion question6= {"छोड छोड बुडी म अगी जान्छु, के हो ?", {"गाडी", "लौरो", "खोला", "आगो"}, 2};

    quizQuestions = {question1, question2, question3, question4, question5, question6};
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
        ui->stackedWidget->setCurrentIndex(6);
    }
}

void MainScreen::updateScoreLabel()
{
    // ui->scoreLabel->setStyleSheet("font : 500 ;");
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
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();

    // Open the database connection
    if (!mydb.open()) {
        qDebug() << "Error opening database connection:" << mydb.lastError().text();
        return;
    }

    QSqlQuery crdQuery;
    crdQuery.prepare("INSERT INTO credentials (email, password) VALUES (:email, :password)");
    crdQuery.bindValue(":email", signupEmail);
    crdQuery.bindValue(":password", signupPw);

    if(crdQuery.exec())
    {
        int userId = crdQuery.lastInsertId().toInt();

        // Save the user ID for later use
        this->userId = userId;

        QSqlQuery query;
        query.prepare("INSERT INTO userinfo (id, first_name, last_name) VALUES (:id, :firstName, :lastName)");
        query.bindValue(":id", userId);
        query.bindValue(":firstName", firstName);
        query.bindValue(":lastName", lastName);

        if(!query.exec())
        {
            ui->databaseStatus_s->setStyleSheet("color: red; background-color: transparent; font: 700 9.5pt 'Segoe UI';");
            ui->databaseStatus_s->setText("Unsuccessful...");
        }
        else
        {
            ui->databaseStatus_s->setStyleSheet("color: green; background-color: transparent; font: 700 9.5pt 'Segoe UI';");
            ui->databaseStatus_s->setText("Signup Successful...");
        }
    }
    else
    {
        QMessageBox::information(this,"Error executing query",crdQuery.lastError().text());
    }

    // Close the database connection
    mydb.close();
}

void MainScreen::on_loginBtn_clicked()
{
    mydb.open();
    // Getting data from user
    QString loginEmail = ui->loginEmail->text();
    QString loginPw = ui->loginPw->text();

    // Verify credentials
    QSqlQuery verifyUser;
    verifyUser.prepare("SELECT user_id FROM credentials WHERE email = :email AND password = :password");
    verifyUser.bindValue(":email", loginEmail);
    verifyUser.bindValue(":password", loginPw);

    if (verifyUser.exec() && verifyUser.next()) {
        // Login successful
        int userId = verifyUser.value("user_id").toInt();
        qDebug() << "User ID:" << userId;

        ui->databaseStatus_s->setStyleSheet("color: green; background-color: transparent; font: 700 9.5pt 'Segoe UI';");
        ui->databaseStatus_s->setText("Login Successful...");

        // Redirect user to the appropriate page or perform other actions
        ui->stackedWidget->setCurrentIndex(2);
    } else {
        // Login failed
        ui->databaseStatus_l->setStyleSheet("color: red; background-color: transparent; font: 700 9.5pt 'Segoe UI';");
        ui->databaseStatus_l->setText("Invalid credentials");

        qDebug() << "Invalid credentials";
    }
    mydb.close();
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
    ui->stackedWidget->setCurrentIndex(7);
}

void MainScreen::on_nextBtn_clicked()
{
    int totalQuestions = 6;

    bool scoreUpdated = false;
    // ui->demo_label->hide();
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
        QRadioButton* myRadioButton = nullptr;

        // Determine which radio button to check based on the loop index
        switch (i) {
        case 0:
            myRadioButton = ui->radioButton;
            break;
        case 1:
            myRadioButton = ui->radioButton_2;
            break;
        case 2:
            myRadioButton = ui->radioButton_3;
            break;
        case 3:
            myRadioButton = ui->radioButton_4;
            break;
        }

        // Check if the current radio button is checked and matches the correct option index
        if (myRadioButton->isChecked() && i == quizQuestions[currentQuestionIndex].correctOptionIndex ) {
            // Increment the score because the user selected the correct answer
            score++;
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

    // Check if all questions have been answered
    if (currentQuestionIndex == totalQuestions) {
        // All questions answered, display total score and email
        QString userEmail = ui->signupEmail->text(); // Assuming the user's email is stored during signup
        int userScore = score;
        mydb.open();
        // Insert score and email into the "score" table
        QSqlQuery insertScoreQuery;
        insertScoreQuery.prepare("INSERT INTO score (email, score) VALUES (:email, :score)");
        insertScoreQuery.bindValue(":email", userEmail);
        insertScoreQuery.bindValue(":score", userScore);
        if (insertScoreQuery.exec()) {
            qDebug() << "Score and Email inserted successfully";
        } else {
            qDebug() << "Failed to insert score and email:" << insertScoreQuery.lastError().text();
        }

        // Display total score on the display screen
        ui->scoreData->setStyleSheet("Color : red; font : 700 20px;background-color : white;");
        ui->scoreData->setText("      Your Score: " + QString::number(score));

        // Display high score
        QSqlQuery highScoreQuery("SELECT email, MAX(score) FROM score GROUP BY email ORDER BY MAX(score) DESC LIMIT 1");
        if (highScoreQuery.exec() && highScoreQuery.next()) {
            QString highScoreEmail = highScoreQuery.value(0).toString();
            int highScore = highScoreQuery.value(1).toInt();

            ui->highscoreData->setStyleSheet("Color : green; font : 700 20px;background-color : white;");
            ui->highscoreData->setText("      Email : " + highScoreEmail + "            Score: " + QString::number(highScore));
        } else {
            qDebug() << "Failed to retrieve high score:" << highScoreQuery.lastError().text();
        }

        mydb.close();
    }
}

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
            score++;
            updateScoreLabel();

            // Change background to green
            toggledButton->setStyleSheet("background-color: green; border:1px solid black; border-radius:8px;");

        } else {
            // Wrong answer, change background to red
            toggledButton->setStyleSheet("background-color: red; border:1px solid black; border-radius:8px;");


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
                correctButton->setStyleSheet("background-color: green; border:1px solid black; border-radius:8px;");

            }
        }

        // Disable all radio buttons for the current question
        ui->radioButton->setEnabled(false);
        ui->radioButton_2->setEnabled(false);
        ui->radioButton_3->setEnabled(false);
        ui->radioButton_4->setEnabled(false);
    }
}




