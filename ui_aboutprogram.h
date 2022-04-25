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
    QLabel *icon_1;
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
        icon_1 = new QLabel(aboutprogram);
        icon_1->setObjectName(QString::fromUtf8("icon_1"));
        icon_1->setGeometry(QRect(40, 40, 180, 180));
        icon_2 = new QLabel(aboutprogram);
        icon_2->setObjectName(QString::fromUtf8("icon_2"));
        icon_2->setGeometry(QRect(260, 40, 180, 180));

        retranslateUi(aboutprogram);

        QMetaObject::connectSlotsByName(aboutprogram);
    } // setupUi

    void retranslateUi(QDialog *aboutprogram)
    {
        aboutprogram->setWindowTitle(QCoreApplication::translate("aboutprogram", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("aboutprogram", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\270 \320\232\320\276\321\200\320\265\320\275\320\265\320\262 \320\224\320\260\320\275\320\270\320\273,\n"
"\320\242\320\260\320\277\320\265\321\205\320\260 \320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200, \320\241\320\274\320\270\321\200\320\275\320\276\320\262 \320\224\320\274\320\270\321\202\321\200\320\270\320\271\n"
"\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202\320\260 \320\232\320\242\320\230 \320\272\320\260\321\204\320\265\320\264\321\200\321\213 \320\234\320\236\320\255\320\222\320\234\n"
"\320\277\320\276\320\264 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276\320\274 \320\264\320\276\321\206\320\265\320\275\321\202\320\260 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\320\260\n"
"\321\204\320\270\320\267.-\320\274\320\260\321\202. \320\275\320"
                        "\260\321\203\320\272 \320\220\320\273\321\214\321\202\320\274\320\260\321\200\320\272\320\260 \320\220.\320\234.", nullptr));
        icon_1->setText(QCoreApplication::translate("aboutprogram", "TextLabel", nullptr));
        icon_2->setText(QCoreApplication::translate("aboutprogram", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutprogram: public Ui_aboutprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPROGRAM_H
