#ifndef DESCRIPTIONWINDOW_H
#define DESCRIPTIONWINDOW_H

#include <QDialog>

namespace Ui {
class DescriptionWindow;
}

class DescriptionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DescriptionWindow(QWidget *parent = nullptr);
    ~DescriptionWindow();

private:
    Ui::DescriptionWindow *ui;
};

#endif // DESCRIPTIONWINDOW_H
