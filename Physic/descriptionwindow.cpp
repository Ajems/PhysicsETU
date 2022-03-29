#include "descriptionwindow.h"
#include "ui_descriptionwindow.h"
#include <QPixmap>

DescriptionWindow::DescriptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DescriptionWindow)
{
    ui->setupUi(this);
    QPixmap installationImage("C:/Users/danil/Documents/Physic/instalationImage.png");
    ui->insrallationImage->setPixmap(installationImage.scaled(1280, 690, Qt::KeepAspectRatio));

    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, Qt::white);

    ui->insrallationImage->setAutoFillBackground(true);
    ui->insrallationImage->setStyleSheet("background-color: white");
}

DescriptionWindow::~DescriptionWindow()
{
    delete ui;
}
