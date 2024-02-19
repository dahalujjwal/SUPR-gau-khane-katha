// #include "database.h"


// UserInfo::UserInfo(MainScreen *mainScreen): QObject(mainScreen), mainScreen(mainScreen)
// {
//     //connecting to mysql database

//     QSqlDatabase mydb = QSqlDatabase::addDatabase("MYSQL");
//     mydb.setHostName("localhost");
//     mydb.setDatabaseName("supr");
//     mydb.setPassword("root");
//     mydb.setUserName("root");
//     mydb.setPort(3036);

//     if(mydb.open())
//     {
//         mainScreen->ui->databaseStatus_l->setText("Successful Connection");
//         // QMessageBox::information(this,"Successful","Connection Successful");
//     }
//     else
//     {
//         mainScreen->ui->databaseStatus_s->setText("Unsuccessful Connection");
//         // QMessageBox::information(this,"Unsuccessful","Connection Unsuccessful");

//     }


// }

