/********************************************************************************
** Form generated from reading UI file 'trashtime.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRASHTIME_H
#define UI_TRASHTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrashTime
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ChangeGame;
    QPushButton *Sound;
    QPushButton *Quit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Score;
    QLabel *Combo;
    QGridLayout *gridLayout_2;
    QLabel *im_blue;
    QLabel *im_green;
    QLabel *im_none;
    QLabel *im_yellow;
    QLabel *im_brown;
    QPushButton *yellow;
    QPushButton *brown;
    QPushButton *blue;
    QPushButton *green;
    QPushButton *none;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Play;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Image;
    QLabel *Objet;
    QProgressBar *progressBar;

    void setupUi(QWidget *TrashTime)
    {
        if (TrashTime->objectName().isEmpty())
            TrashTime->setObjectName(QString::fromUtf8("TrashTime"));
        TrashTime->resize(666, 430);
        gridLayout = new QGridLayout(TrashTime);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 20);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ChangeGame = new QPushButton(TrashTime);
        ChangeGame->setObjectName(QString::fromUtf8("ChangeGame"));

        horizontalLayout->addWidget(ChangeGame);

        Sound = new QPushButton(TrashTime);
        Sound->setObjectName(QString::fromUtf8("Sound"));

        horizontalLayout->addWidget(Sound);

        Quit = new QPushButton(TrashTime);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        horizontalLayout->addWidget(Quit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Score = new QLabel(TrashTime);
        Score->setObjectName(QString::fromUtf8("Score"));

        horizontalLayout_2->addWidget(Score);

        Combo = new QLabel(TrashTime);
        Combo->setObjectName(QString::fromUtf8("Combo"));
        Combo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(Combo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        im_blue = new QLabel(TrashTime);
        im_blue->setObjectName(QString::fromUtf8("im_blue"));

        gridLayout_2->addWidget(im_blue, 0, 2, 1, 1);

        im_green = new QLabel(TrashTime);
        im_green->setObjectName(QString::fromUtf8("im_green"));

        gridLayout_2->addWidget(im_green, 0, 3, 1, 1);

        im_none = new QLabel(TrashTime);
        im_none->setObjectName(QString::fromUtf8("im_none"));

        gridLayout_2->addWidget(im_none, 0, 4, 1, 1);

        im_yellow = new QLabel(TrashTime);
        im_yellow->setObjectName(QString::fromUtf8("im_yellow"));

        gridLayout_2->addWidget(im_yellow, 0, 0, 1, 1);

        im_brown = new QLabel(TrashTime);
        im_brown->setObjectName(QString::fromUtf8("im_brown"));

        gridLayout_2->addWidget(im_brown, 0, 1, 1, 1);

        yellow = new QPushButton(TrashTime);
        yellow->setObjectName(QString::fromUtf8("yellow"));
        yellow->setStyleSheet(QString::fromUtf8("QPushButton {background-color:rgba(255,215,0, 0.4) ; color:white;};"));

        gridLayout_2->addWidget(yellow, 1, 0, 1, 1);

        brown = new QPushButton(TrashTime);
        brown->setObjectName(QString::fromUtf8("brown"));
        brown->setStyleSheet(QString::fromUtf8("QPushButton {background-color:darkgrey ; color:white;};"));

        gridLayout_2->addWidget(brown, 1, 1, 1, 1);

        blue = new QPushButton(TrashTime);
        blue->setObjectName(QString::fromUtf8("blue"));
        blue->setStyleSheet(QString::fromUtf8("QPushButton {background-color:navy ; color:white;};"));

        gridLayout_2->addWidget(blue, 1, 2, 1, 1);

        green = new QPushButton(TrashTime);
        green->setObjectName(QString::fromUtf8("green"));
        green->setStyleSheet(QString::fromUtf8("QPushButton {background-color:green ; color:white;};"));

        gridLayout_2->addWidget(green, 1, 3, 1, 1);

        none = new QPushButton(TrashTime);
        none->setObjectName(QString::fromUtf8("none"));

        gridLayout_2->addWidget(none, 1, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Play = new QPushButton(TrashTime);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(Play);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        Image = new QLabel(TrashTime);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Image);

        Objet = new QLabel(TrashTime);
        Objet->setObjectName(QString::fromUtf8("Objet"));
        Objet->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Objet);

        progressBar = new QProgressBar(TrashTime);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TrashTime);
        QObject::connect(Quit, &QPushButton::clicked, TrashTime, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(TrashTime);
    } // setupUi

    void retranslateUi(QWidget *TrashTime)
    {
        TrashTime->setWindowTitle(QCoreApplication::translate("TrashTime", "Form", nullptr));
        ChangeGame->setText(QCoreApplication::translate("TrashTime", "Change game", nullptr));
        Sound->setText(QCoreApplication::translate("TrashTime", "Sound off/on", nullptr));
        Quit->setText(QCoreApplication::translate("TrashTime", "Quit", nullptr));
        Score->setText(QCoreApplication::translate("TrashTime", "Score", nullptr));
        Combo->setText(QCoreApplication::translate("TrashTime", "Combo", nullptr));
        im_blue->setText(QCoreApplication::translate("TrashTime", "TextLabel", nullptr));
        im_green->setText(QCoreApplication::translate("TrashTime", "TextLabel", nullptr));
        im_none->setText(QCoreApplication::translate("TrashTime", "TextLabel", nullptr));
        im_yellow->setText(QCoreApplication::translate("TrashTime", "TextLabel", nullptr));
        im_brown->setText(QCoreApplication::translate("TrashTime", "TextLabel", nullptr));
        yellow->setText(QCoreApplication::translate("TrashTime", "Yellow", nullptr));
        brown->setText(QCoreApplication::translate("TrashTime", "Brown/Black/Grey", nullptr));
        blue->setText(QCoreApplication::translate("TrashTime", "Blue", nullptr));
        green->setText(QCoreApplication::translate("TrashTime", "Green", nullptr));
        none->setText(QCoreApplication::translate("TrashTime", "None", nullptr));
        Play->setText(QCoreApplication::translate("TrashTime", "Play", nullptr));
        Image->setText(QCoreApplication::translate("TrashTime", "Image", nullptr));
        Objet->setText(QCoreApplication::translate("TrashTime", "Objet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrashTime: public Ui_TrashTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRASHTIME_H
