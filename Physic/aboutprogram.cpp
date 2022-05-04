#include <QPixmap>
#include "aboutprogram.h"
#include "ui_aboutprogram.h"

aboutprogram::aboutprogram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutprogram)
{
    ui->setupUi(this);
    this->setWindowTitle("О программе");

    QPixmap physic_logo(":resources/img/physic.png");
    ui->icon_2->setPixmap(physic_logo.scaled(250, 250));

    ui->label->setText("Программу разработали Коренев Данил,\nТапеха Владимир, Смирнов Дмитрий\nФакультета КТИ кафедры МОЭВМ\nпод руководством доцента кандидата\nфиз.-мат. наук Альтмарка А.М.");

}

aboutprogram::~aboutprogram()
{
    delete ui;
}
