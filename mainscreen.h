#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainScreen;
}
QT_END_NAMESPACE

class MainScreen : public QMainWindow
{
    Q_OBJECT

public:
    MainScreen(QWidget *parent = nullptr);
    ~MainScreen();

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

private:
    Ui::MainScreen *ui;
};
#endif // MAINSCREEN_H
