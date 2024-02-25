#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>
#include <QString>
#include <vector>
#include <QLabel>
#include <QRadioButton>
#include <QSqlDatabase>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainScreen;
}
QT_END_NAMESPACE

struct QuizQuestion {
    QString question;
    QString options[4];
    int correctOptionIndex;
};

class MainScreen : public QMainWindow
{
    Q_OBJECT

public:
    MainScreen(QWidget *parent = nullptr);
    ~MainScreen();
    void displayUserScores();
    QString sendEmail(int);
    int sendId();
    int userId;
    void displayScores();

private slots:
    void on_loginBtn_clicked();

    void on_signupLink_clicked();

    void on_signupBtn_clicked();

    void on_loginLink_clicked();

    void on_startBtn_clicked();

    void on_loginBtn_2_clicked();

    void on_loginBtn_3_clicked();

    void on_loginBtn_5_clicked();

    void on_loginBtn_6_clicked();

    void on_backBtn_clicked();

    void on_gauKhane_clicked();

    void on_backBtn2_clicked();

    void on_nextBtn_clicked();
    void onAnswerButtonToggled(bool checked);

private:
    // public:
    Ui::MainScreen *ui;

    QSqlDatabase mydb;

    std::vector<QuizQuestion> quizQuestions;
    int currentQuestionIndex;
    int score;

    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;


    QLabel* scorelabel;

    void loadQuizQuestions();
    void displayCurrentQuestion();
    void updateScoreLabel();
};
#endif // MAINSCREEN_H
