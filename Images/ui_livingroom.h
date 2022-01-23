/********************************************************************************
** Form generated from reading UI file 'livingroom.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVINGROOM_H
#define UI_LIVINGROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LivingRoom
{
public:
    QLabel *im_livingroom;
    QPushButton *Light;
    QPushButton *TV;
    QPushButton *radiator;
    QLabel *clicked;
    QLabel *label;
    QPushButton *OK;

    void setupUi(QWidget *LivingRoom)
    {
        if (LivingRoom->objectName().isEmpty())
            LivingRoom->setObjectName(QString::fromUtf8("LivingRoom"));
        LivingRoom->resize(691, 445);
        im_livingroom = new QLabel(LivingRoom);
        im_livingroom->setObjectName(QString::fromUtf8("im_livingroom"));
        im_livingroom->setGeometry(QRect(30, 100, 641, 301));
        im_livingroom->setMinimumSize(QSize(551, 301));
        im_livingroom->setMaximumSize(QSize(641, 301));
        im_livingroom->setPixmap(QPixmap(QString::fromUtf8("../build-Mini-games-Desktop_Qt_6_2_2_MinGW_64_bit-Debug/Images/living_room.jpg")));
        im_livingroom->setScaledContents(true);
        Light = new QPushButton(LivingRoom);
        Light->setObjectName(QString::fromUtf8("Light"));
        Light->setGeometry(QRect(120, 150, 51, 24));
        Light->setFlat(true);
        TV = new QPushButton(LivingRoom);
        TV->setObjectName(QString::fromUtf8("TV"));
        TV->setGeometry(QRect(450, 200, 131, 51));
        TV->setFlat(true);
        radiator = new QPushButton(LivingRoom);
        radiator->setObjectName(QString::fromUtf8("radiator"));
        radiator->setGeometry(QRect(190, 240, 61, 21));
        radiator->setFlat(true);
        clicked = new QLabel(LivingRoom);
        clicked->setObjectName(QString::fromUtf8("clicked"));
        clicked->setGeometry(QRect(10, 10, 221, 16));
        label = new QLabel(LivingRoom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 150, 641, 201));
        label->setAutoFillBackground(true);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\""));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Sunken);
        label->setScaledContents(false);
        label->setWordWrap(true);
        OK = new QPushButton(LivingRoom);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(320, 410, 80, 24));

        retranslateUi(LivingRoom);

        QMetaObject::connectSlotsByName(LivingRoom);
    } // setupUi

    void retranslateUi(QWidget *LivingRoom)
    {
        LivingRoom->setWindowTitle(QCoreApplication::translate("LivingRoom", "Form", nullptr));
        im_livingroom->setText(QString());
        Light->setText(QString());
        TV->setText(QString());
        radiator->setText(QString());
        clicked->setText(QCoreApplication::translate("LivingRoom", "Clicked :", nullptr));
        label->setText(QString());
        OK->setText(QCoreApplication::translate("LivingRoom", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LivingRoom: public Ui_LivingRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVINGROOM_H
