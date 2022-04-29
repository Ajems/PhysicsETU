#ifndef ABOUTPROGRAM_H
#define ABOUTPROGRAM_H

#include <QDialog>

namespace Ui {
class aboutprogram;
}

class aboutprogram : public QDialog
{
    Q_OBJECT

public:
    explicit aboutprogram(QWidget *parent = nullptr);
    ~aboutprogram();

private:
    Ui::aboutprogram *ui;
};

#endif // ABOUTPROGRAM_H
