#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_descriptionButton_clicked();


    void on_dialR1_valueChanged(int value);

    void on_dialR2_valueChanged(int value);

    void on_about_clicked();

private:
    Ui::MainWindow *ui;
};

double func(double i1, double u2);

#endif // MAINWINDOW_H
