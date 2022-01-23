/********************************************************************************
** Form generated from reading UI file 'winhome.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINHOME_H
#define UI_WINHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinHome
{
public:
    QPushButton *Kitchen;
    QPushButton *Livingroom;
    QPushButton *Bathroom;
    QPushButton *Rules;
    QLabel *Home;
    QPushButton *ChangeGame;

    void setupUi(QWidget *WinHome)
    {
        if (WinHome->objectName().isEmpty())
            WinHome->setObjectName(QString::fromUtf8("WinHome"));
        WinHome->resize(669, 431);
        WinHome->setMinimumSize(QSize(669, 431));
        WinHome->setMaximumSize(QSize(669, 431));
        Kitchen = new QPushButton(WinHome);
        Kitchen->setObjectName(QString::fromUtf8("Kitchen"));
        Kitchen->setGeometry(QRect(430, 250, 81, 51));
        Kitchen->setFlat(true);
        Livingroom = new QPushButton(WinHome);
        Livingroom->setObjectName(QString::fromUtf8("Livingroom"));
        Livingroom->setGeometry(QRect(250, 250, 171, 51));
        Livingroom->setFlat(true);
        Bathroom = new QPushButton(WinHome);
        Bathroom->setObjectName(QString::fromUtf8("Bathroom"));
        Bathroom->setGeometry(QRect(170, 250, 71, 51));
        Bathroom->setFlat(true);
        Rules = new QPushButton(WinHome);
        Rules->setObjectName(QString::fromUtf8("Rules"));
        Rules->setGeometry(QRect(0, 410, 131, 21));
        Rules->setStyleSheet(QString::fromUtf8("QPushButton {background-color:orange ; color:white;};"));
        Rules->setFlat(false);
        Home = new QLabel(WinHome);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(90, 90, 501, 281));
        Home->setPixmap(QPixmap(QString::fromUtf8("../build-Mini-games-Desktop_Qt_6_2_2_MinGW_64_bit-Debug/Images/slicedHouse.jpg")));
        Home->setScaledContents(true);
        Home->setAlignment(Qt::AlignCenter);
        ChangeGame = new QPushButton(WinHome);
        ChangeGame->setObjectName(QString::fromUtf8("ChangeGame"));
        ChangeGame->setGeometry(QRect(570, 10, 80, 24));
        Home->raise();
        Kitchen->raise();
        Livingroom->raise();
        Bathroom->raise();
        Rules->raise();
        ChangeGame->raise();

        retranslateUi(WinHome);

        QMetaObject::connectSlotsByName(WinHome);
    } // setupUi

    void retranslateUi(QWidget *WinHome)
    {
        WinHome->setWindowTitle(QCoreApplication::translate("WinHome", "Form", nullptr));
        Kitchen->setText(QString());
        Livingroom->setText(QString());
        Bathroom->setText(QString());
        Rules->setText(QCoreApplication::translate("WinHome", "Rules", nullptr));
        Home->setText(QString());
        ChangeGame->setText(QCoreApplication::translate("WinHome", "Change game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinHome: public Ui_WinHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINHOME_H
