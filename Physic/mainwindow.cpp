#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "descriptionwindow.h"
#include <QPixmap>
#include <QPointer>


double valueOfDialR1 = 0;
double valueOfDialR2 = 0;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    QTransform tr;
    //tr.rotate(20);

    QPixmap multimetr20vdc("/home/vladimir/LAST_PLEASE/PhysicETU/Physic/multimetr20vdc.png");
    ui->label->setPixmap(multimetr20vdc.scaled(150, 500, Qt::KeepAspectRatio));


    QPixmap multimetr20ma("/home/vladimir/LAST_PLEASE/PhysicETU/Physic/multimetr20ma.png");
    ui->label_2->setPixmap(multimetr20ma.scaled(150, 550, Qt::KeepAspectRatio));

    QPixmap multimetr20vdc2("/home/vladimir/LAST_PLEASE/PhysicETU/Physic/multimetr20vdc.png");
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



void MainWindow::on_dialR1_valueChanged(int value)
{
    valueOfDialR1 = value/100.0; //values from 0 to 11, step 0,01
    ui->lcdNumber_3->display(valueOfDialR1); // check value

}


void MainWindow::on_dialR2_valueChanged(int value)
{
    valueOfDialR2 = value/100.0; //values from 0.1 to 1.05, step 0,01
    ui->lcdNumber_2->display(valueOfDialR2); //check value
}


