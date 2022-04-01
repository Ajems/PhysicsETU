#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "descriptionwindow.h"
#include <QPixmap>
#include <QPointer>
#include "exit.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    QTransform tr;
    //tr.rotate(20);

    QPixmap multimetr20vdc("/home/vladimir/cute/PhysicETU/Physic/multimetr.png");
    ui->label->setPixmap(multimetr20vdc.scaled(150, 500, Qt::KeepAspectRatio));


    QPixmap multimetr20ma("/home/vladimir/cute/PhysicETU/Physic/multimetr.png");
    ui->label_2->setPixmap(multimetr20ma.scaled(150, 550, Qt::KeepAspectRatio));

    QPixmap multimetr20vdc2("/home/vladimir/cute/PhysicETU/Physic/multimetr.png");
    ui->label_3->setPixmap(multimetr20vdc2.scaled(150, 500, Qt::KeepAspectRatio));

    QPixmap Switch1("/home/vladimir/cute/PhysicETU/Physic/switch.png");
    Switch1 = Switch1.transformed(tr);
    //ui->dialR1->
    ui->label_4->setPixmap(Switch1.scaled(145, 510, Qt::KeepAspectRatio));


    QPixmap Switch2("/home/vladimir/cute/PhysicETU/Physic/switch.png");
    ui->label_5->setPixmap(Switch2.scaled(143, 510, Qt::KeepAspectRatio));

    QPixmap Switch3("/home/vladimir/cute/PhysicETU/Physic/switch.png");
    ui->label_6->setPixmap(Switch3.scaled(143, 510, Qt::KeepAspectRatio));
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


