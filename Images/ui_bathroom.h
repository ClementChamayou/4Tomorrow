/********************************************************************************
** Form generated from reading UI file 'bathroom.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATHROOM_H
#define UI_BATHROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bathroom
{
public:
    QLabel *im_bathroom;
    QPushButton *WashinhMachine;
    QPushButton *Shower;
    QPushButton *Bath;
    QLabel *clicked;
    QPushButton *OK;
    QLabel *label;

    void setupUi(QWidget *Bathroom)
    {
        if (Bathroom->objectName().isEmpty())
            Bathroom->setObjectName(QString::fromUtf8("Bathroom"));
        Bathroom->resize(682, 401);
        im_bathroom = new QLabel(Bathroom);
        im_bathroom->setObjectName(QString::fromUtf8("im_bathroom"));
        im_bathroom->setGeometry(QRect(20, 60, 641, 331));
        im_bathroom->setMinimumSize(QSize(551, 301));
        im_bathroom->setMaximumSize(QSize(641, 331));
        im_bathroom->setPixmap(QPixmap(QString::fromUtf8("../build-Mini-games-Desktop_Qt_6_2_2_MinGW_64_bit-Debug/Images/bathroom.jpg")));
        im_bathroom->setScaledContents(true);
        WashinhMachine = new QPushButton(Bathroom);
        WashinhMachine->setObjectName(QString::fromUtf8("WashinhMachine"));
        WashinhMachine->setGeometry(QRect(110, 300, 121, 91));
        WashinhMachine->setFlat(true);
        Shower = new QPushButton(Bathroom);
        Shower->setObjectName(QString::fromUtf8("Shower"));
        Shower->setGeometry(QRect(430, 80, 51, 151));
        Shower->setFlat(true);
        Bath = new QPushButton(Bathroom);
        Bath->setObjectName(QString::fromUtf8("Bath"));
        Bath->setGeometry(QRect(420, 310, 181, 71));
        Bath->setFlat(true);
        clicked = new QLabel(Bathroom);
        clicked->setObjectName(QString::fromUtf8("clicked"));
        clicked->setGeometry(QRect(20, 10, 221, 16));
        OK = new QPushButton(Bathroom);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(290, 10, 80, 24));
        label = new QLabel(Bathroom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 641, 161));
        label->setAutoFillBackground(true);
        label->setStyleSheet(QString::fromUtf8("QLabel { color: white, background-color: rgba(255, 255, 255, 0);\"};"));
        label->setFrameShape(QFrame::NoFrame);
        label->setWordWrap(true);

        retranslateUi(Bathroom);

        QMetaObject::connectSlotsByName(Bathroom);
    } // setupUi

    void retranslateUi(QWidget *Bathroom)
    {
        Bathroom->setWindowTitle(QCoreApplication::translate("Bathroom", "Form", nullptr));
        im_bathroom->setText(QString());
        WashinhMachine->setText(QString());
        Shower->setText(QString());
        Bath->setText(QString());
        clicked->setText(QCoreApplication::translate("Bathroom", "Clicked :", nullptr));
        OK->setText(QCoreApplication::translate("Bathroom", "OK", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bathroom: public Ui_Bathroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATHROOM_H
