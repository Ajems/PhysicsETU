/********************************************************************************
** Form generated from reading UI file 'descriptionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESCRIPTIONWINDOW_H
#define UI_DESCRIPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DescriptionWindow
{
public:
    QLabel *insrallationImage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *DescriptionWindow)
    {
        if (DescriptionWindow->objectName().isEmpty())
            DescriptionWindow->setObjectName(QString::fromUtf8("DescriptionWindow"));
        DescriptionWindow->resize(1281, 720);
        DescriptionWindow->setAutoFillBackground(false);
        DescriptionWindow->setStyleSheet(QString::fromUtf8("background-color: white"));
        insrallationImage = new QLabel(DescriptionWindow);
        insrallationImage->setObjectName(QString::fromUtf8("insrallationImage"));
        insrallationImage->setGeometry(QRect(0, 0, 1271, 671));
        verticalLayoutWidget = new QWidget(DescriptionWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 500, 471, 216));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: white"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);


        retranslateUi(DescriptionWindow);

        QMetaObject::connectSlotsByName(DescriptionWindow);
    } // setupUi

    void retranslateUi(QDialog *DescriptionWindow)
    {
        DescriptionWindow->setWindowTitle(QCoreApplication::translate("DescriptionWindow", "Dialog", nullptr));
        insrallationImage->setText(QCoreApplication::translate("DescriptionWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("DescriptionWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202 \321\203\321\201\320\270\320\273\320\265\320\275\320\270\321\217 \320\236\320\243 K = 100", nullptr));
        label_2->setText(QCoreApplication::translate("DescriptionWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260 d = 0,5 \320\274\320\272\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("DescriptionWindow", "\320\243\320\264\320\265\320\273\321\214\320\275\320\260\321\217 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\277\321\200\320\276\320\262\320\276\320\264\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\273\321\203\320\277\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260 \n"
" \317\203 = 3,4*10^(-1) \320\236\320\274 10^(-1) \320\234*10^(-1)", nullptr));
        label_4->setText(QCoreApplication::translate("DescriptionWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202 a = 5,3*10^(-4) \320\242\320\273/\320\220", nullptr));
        label_5->setText(QCoreApplication::translate("DescriptionWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202 B = 1,25*10^(-4) \320\242\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DescriptionWindow: public Ui_DescriptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESCRIPTIONWINDOW_H
