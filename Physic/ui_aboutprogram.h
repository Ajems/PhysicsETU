/********************************************************************************
** Form generated from reading UI file 'aboutprogram.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPROGRAM_H
#define UI_ABOUTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutprogram
{
public:
    QLabel *label;
    QLabel *icon_2;

    void setupUi(QDialog *aboutprogram)
    {
        if (aboutprogram->objectName().isEmpty())
            aboutprogram->setObjectName(QString::fromUtf8("aboutprogram"));
        aboutprogram->resize(560, 480);
        label = new QLabel(aboutprogram);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 240, 540, 221));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);
        icon_2 = new QLabel(aboutprogram);
        icon_2->setObjectName(QString::fromUtf8("icon_2"));
        icon_2->setGeometry(QRect(155, 10, 250, 250));

        retranslateUi(aboutprogram);

        QMetaObject::connectSlotsByName(aboutprogram);
    } // setupUi

    void retranslateUi(QDialog *aboutprogram)
    {
        aboutprogram->setWindowTitle(QCoreApplication::translate("aboutprogram", "Dialog", nullptr));
        label->setText(QString());
        icon_2->setText(QCoreApplication::translate("aboutprogram", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutprogram: public Ui_aboutprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPROGRAM_H
