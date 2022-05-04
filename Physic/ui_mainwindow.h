/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QDial *dialR1;
    QDial *dialR2;
    QLabel *textR1;
    QLabel *textR2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QPushButton *descriptionButton_2;
    QLabel *label_4;
    QPushButton *about;
    QPushButton *descriptionButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *textV1;
    QLabel *textI1;
    QLabel *textV2;
    QLabel *labelPhotoText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 10, 150, 350));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 10, 150, 350));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(820, 10, 150, 350));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(540, 400, 391, 191));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        dialR1 = new QDial(layoutWidget);
        dialR1->setObjectName(QString::fromUtf8("dialR1"));
        dialR1->setMinimum(0);
        dialR1->setMaximum(1100);
        dialR1->setPageStep(10);
        dialR1->setNotchesVisible(true);

        horizontalLayout_3->addWidget(dialR1);

        dialR2 = new QDial(layoutWidget);
        dialR2->setObjectName(QString::fromUtf8("dialR2"));
        dialR2->setMouseTracking(false);
        dialR2->setFocusPolicy(Qt::WheelFocus);
        dialR2->setMinimum(10);
        dialR2->setMaximum(105);
        dialR2->setPageStep(1);
        dialR2->setNotchesVisible(true);

        horizontalLayout_3->addWidget(dialR2);

        textR1 = new QLabel(centralwidget);
        textR1->setObjectName(QString::fromUtf8("textR1"));
        textR1->setGeometry(QRect(620, 610, 63, 40));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        textR1->setFont(font);
        textR2 = new QLabel(centralwidget);
        textR2->setObjectName(QString::fromUtf8("textR2"));
        textR2->setGeometry(QRect(820, 610, 63, 40));
        textR2->setFont(font);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(530, 80, 91, 41));
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: white"));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(850, 80, 91, 41));
        lcdNumber_2->setAutoFillBackground(false);
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background-color: white"));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(690, 80, 91, 41));
        lcdNumber_3->setAutoFillBackground(false);
        lcdNumber_3->setStyleSheet(QString::fromUtf8("background-color: white"));
        descriptionButton_2 = new QPushButton(centralwidget);
        descriptionButton_2->setObjectName(QString::fromUtf8("descriptionButton_2"));
        descriptionButton_2->setGeometry(QRect(890, 10, 81, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 40, 400, 400));
        about = new QPushButton(centralwidget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(190, 0, 151, 29));
        descriptionButton = new QPushButton(centralwidget);
        descriptionButton->setObjectName(QString::fromUtf8("descriptionButton"));
        descriptionButton->setEnabled(true);
        descriptionButton->setGeometry(QRect(20, 0, 153, 29));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(550, 300, 491, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textV1 = new QLabel(horizontalLayoutWidget);
        textV1->setObjectName(QString::fromUtf8("textV1"));
        textV1->setFont(font);

        horizontalLayout->addWidget(textV1);

        textI1 = new QLabel(horizontalLayoutWidget);
        textI1->setObjectName(QString::fromUtf8("textI1"));
        textI1->setFont(font);

        horizontalLayout->addWidget(textI1);

        textV2 = new QLabel(horizontalLayoutWidget);
        textV2->setObjectName(QString::fromUtf8("textV2"));
        textV2->setFont(font);

        horizontalLayout->addWidget(textV2);

        labelPhotoText = new QLabel(centralwidget);
        labelPhotoText->setObjectName(QString::fromUtf8("labelPhotoText"));
        labelPhotoText->setGeometry(QRect(40, 440, 431, 171));
        QFont font1;
        font1.setPointSize(14);
        labelPhotoText->setFont(font1);
        labelPhotoText->setFocusPolicy(Qt::NoFocus);
        labelPhotoText->setLayoutDirection(Qt::LeftToRight);
        labelPhotoText->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(descriptionButton_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        textR1->setText(QCoreApplication::translate("MainWindow", "R1", nullptr));
        textR2->setText(QCoreApplication::translate("MainWindow", "R2", nullptr));
        descriptionButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        descriptionButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        textV1->setText(QCoreApplication::translate("MainWindow", "V1", nullptr));
        textI1->setText(QCoreApplication::translate("MainWindow", "I1", nullptr));
        textV2->setText(QCoreApplication::translate("MainWindow", "V2", nullptr));
        labelPhotoText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
