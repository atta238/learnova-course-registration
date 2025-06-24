#include "mainwindow.h"
#include <QApplication>
#include <QStackedWidget>
#include "globals.h"
using namespace std;

int main(int argc, char *argv[])
{
    read_courses();
    read_admins_file();
    read_user_data();

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":/images/images/book.png"));
    w.showFullScreen();
    return a.exec();
}
