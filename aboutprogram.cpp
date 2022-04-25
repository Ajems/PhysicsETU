#include <QPixmap>
#include "aboutprogram.h"
#include "ui_aboutprogram.h"

aboutprogram::aboutprogram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutprogram)
{
    ui->setupUi(this);

    QPixmap etu_logo("C:/Users/danil/Documents/Physic_noFunc/PhysicETU/Physic/etu.png");
    ui->icon_1->setPixmap(etu_logo.scaled(180, 180));

    QPixmap physic_logo("C:/Users/danil/Documents/Physic_noFunc/PhysicETU/Physic/physic.jpg");
    ui->icon_2->setPixmap(physic_logo.scaled(180, 180));


}

aboutprogram::~aboutprogram()
{
    delete ui;
}
