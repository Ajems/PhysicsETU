#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "descriptionwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    QPixmap multimetr20vdc("C:/Users/danil/Documents/Physic/multimetr20vdc.png");
    ui->label->setPixmap(multimetr20vdc.scaled(150, 500, Qt::KeepAspectRatio));

    QPixmap multimetr20ma("C:/Users/danil/Documents/Physic/multimetr20ma.png");
    ui->label_2->setPixmap(multimetr20ma.scaled(150, 500, Qt::KeepAspectRatio));

    QPixmap multimetr20vdc2("C:/Users/danil/Documents/Physic/multimetr20vdc.png");
    ui->label_3->setPixmap(multimetr20vdc2.scaled(150, 500, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_descriptionButton_clicked()
{
    DescriptionWindow descriptionWindow;
    descriptionWindow.setModal(true);
    descriptionWindow.exec();
}



