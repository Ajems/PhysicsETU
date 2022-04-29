#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QLabel>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":resources/img/etu.png"));


    MainWindow w;
    w.setWindowState(Qt::WindowMaximized);
    w.show();

    return a.exec();
}
