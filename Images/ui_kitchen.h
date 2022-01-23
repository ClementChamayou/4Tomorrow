/********************************************************************************
** Form generated from reading UI file 'kitchen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITCHEN_H
#define UI_KITCHEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kitchen
{
public:
    QLabel *im_kitchen;
    QPushButton *Fridge;
    QPushButton *Tap;
    QPushButton *Microwave;
    QPushButton *Oven;
    QLabel *clicked;
    QPushButton *OK;
    QLabel *label;

    void setupUi(QWidget *Kitchen)
    {
        if (Kitchen->objectName().isEmpty())
            Kitchen->setObjectName(QString::fromUtf8("Kitchen"));
        Kitchen->resize(716, 453);
        Kitchen->setMinimumSize(QSize(663, 430));
        im_kitchen = new QLabel(Kitchen);
        im_kitchen->setObjectName(QString::fromUtf8("im_kitchen"));
        im_kitchen->setGeometry(QRect(60, 100, 641, 301));
        im_kitchen->setMinimumSize(QSize(551, 301));
        im_kitchen->setMaximumSize(QSize(641, 301));
        im_kitchen->setPixmap(QPixmap(QString::fromUtf8("../build-Mini-games-Desktop_Qt_6_2_2_MinGW_64_bit-Debug/Images/kitchen.png")));
        im_kitchen->setScaledContents(true);
        Fridge = new QPushButton(Kitchen);
        Fridge->setObjectName(QString::fromUtf8("Fridge"));
        Fridge->setGeometry(QRect(540, 100, 101, 291));
        Fridge->setFlat(true);
        Tap = new QPushButton(Kitchen);
        Tap->setObjectName(QString::fromUtf8("Tap"));
        Tap->setGeometry(QRect(290, 200, 51, 51));
        Tap->setFlat(true);
        Microwave = new QPushButton(Kitchen);
        Microwave->setObjectName(QString::fromUtf8("Microwave"));
        Microwave->setGeometry(QRect(390, 140, 71, 51));
        Microwave->setFlat(true);
        Oven = new QPushButton(Kitchen);
        Oven->setObjectName(QString::fromUtf8("Oven"));
        Oven->setGeometry(QRect(390, 280, 81, 71));
        Oven->setFlat(true);
        clicked = new QLabel(Kitchen);
        clicked->setObjectName(QString::fromUtf8("clicked"));
        clicked->setGeometry(QRect(50, 10, 201, 16));
        OK = new QPushButton(Kitchen);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(500, 10, 80, 24));
        label = new QLabel(Kitchen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 190, 641, 171));
        label->setToolTipDuration(0);
        label->setAutoFillBackground(true);
        label->setStyleSheet(QString::fromUtf8("QLabel { color: white, background-color: rgba(255, 255, 255, 70);\"};"));
        label->setFrameShape(QFrame::NoFrame);
        label->setWordWrap(true);

        retranslateUi(Kitchen);

        QMetaObject::connectSlotsByName(Kitchen);
    } // setupUi

    void retranslateUi(QWidget *Kitchen)
    {
        Kitchen->setWindowTitle(QCoreApplication::translate("Kitchen", "Form", nullptr));
        im_kitchen->setText(QString());
        Fridge->setText(QString());
        Tap->setText(QString());
        Microwave->setText(QString());
        Oven->setText(QString());
        clicked->setText(QCoreApplication::translate("Kitchen", "Clicked :", nullptr));
        OK->setText(QCoreApplication::translate("Kitchen", "OK", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Kitchen: public Ui_Kitchen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITCHEN_H
