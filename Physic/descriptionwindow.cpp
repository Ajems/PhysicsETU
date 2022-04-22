#include "descriptionwindow.h"
#include "ui_descriptionwindow.h"
#include <QPixmap>


DescriptionWindow::DescriptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DescriptionWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Описание установки");


    QPixmap installationImage(":resourse/img/instalationImage.png");
    ui->insrallationImage->setPixmap(installationImage.scaled(1280, 690, Qt::KeepAspectRatio));

    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, Qt::white);

    ui->insrallationImage->setAutoFillBackground(true);
    ui->insrallationImage->setStyleSheet("background-color: white");


    QFont font = ui->label->font();
    font.setPointSize(16);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_5->setFont(font);
}

DescriptionWindow::~DescriptionWindow()
{
    delete ui;
}
