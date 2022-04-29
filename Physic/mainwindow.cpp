#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "descriptionwindow.h"
#include "aboutprogram.h"
#include <QPixmap>
#include <QPointer>
#include <math.h>

double valueOfDialR1 = 0.1;
double valueOfDialR2 = 0.1;
double valueI1 = valueOfDialR1; // == R1
double valueU2 = valueOfDialR2; // == R2
double valueI2 = 0;

// Const values
const double value_B0 = 0.000125;
const double value_a = 0.00053;
const double value_d = 0.0000005;
const double value_e = 1.60217663e-19;
const double value_n = 5.73942e21;
const double value_omega = 3.4e-1;

double func(double i1, double u2);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{


    ui->setupUi(this);
    this->setWindowTitle("Эффект Холла в полупроводниках");

    //второй
    QPixmap multimetr20vdc(":resources/img/multimetr20vdc.png");
    ui->label->setPixmap(multimetr20vdc.scaled(150, 500, Qt::KeepAspectRatio));

    //первый
    QPixmap multimetr20ma(":resources/img/multimetr20ma.png");
    ui->label_2->setPixmap(multimetr20ma.scaled(150, 550, Qt::KeepAspectRatio));

    //третий
    QPixmap multimetr20vdc2(":resources/img/multimetr20vdc.png");
    ui->label_3->setPixmap(multimetr20vdc2.scaled(150, 500, Qt::KeepAspectRatio));


    ui->lcdNumber_2->display(0.1);
    ui->lcdNumber_3->display(0.1);

    QPixmap photo(":resources/img/photoInstalation.png");
    ui->label_4->setPixmap(photo.scaled(650, 650, Qt::KeepAspectRatio));

    ui->lcdNumber->display(func(valueOfDialR1, valueOfDialR2));
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

void MainWindow::on_about_clicked()
{
    aboutprogram aboutprogram;
    aboutprogram.setModal(true);
    aboutprogram.exec();
}

double func(double i1, double u2)
{
    //TODO fix dependent
    double new_value = i1*(value_B0 + value_a * u2);
    return (new_value/(value_n * value_e * value_d));
}


void MainWindow::on_dialR1_valueChanged(int value)
{
    valueOfDialR1 = value/100.0; //values from 0.1 to 11, step 0,01
    ui->lcdNumber_3->display(valueOfDialR1); // check value
    valueI1 = valueOfDialR1;
    valueI2 = func(valueI1, valueU2);
    ui->lcdNumber->display(valueI2);
}


void MainWindow::on_dialR2_valueChanged(int value)
{
    valueOfDialR2 = value/100.0; //values from 0.1 to 1.05, step 0,01
    ui->lcdNumber_2->display(valueOfDialR2); //check value
    valueU2 = valueOfDialR2;
    valueI2 = func(valueI1, valueU2);
    ui->lcdNumber->display(valueI2);
}
