/********************************************************************************
** Form generated from reading UI file 'games.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMES_H
#define UI_GAMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Games
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Quit;
    QPushButton *Sound;
    QLabel *Name_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Enter;
    QLabel *alias;
    QTextEdit *Name;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *logoMJ3;
    QLabel *logoMJ1;
    QLabel *logoMJ2;
    QPushButton *Puzzle;
    QPushButton *TrashTime;
    QPushButton *HomeEvolve;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Easy;
    QPushButton *Medium;
    QPushButton *Hard;

    void setupUi(QWidget *Games)
    {
        if (Games->objectName().isEmpty())
            Games->setObjectName(QString::fromUtf8("Games"));
        Games->resize(664, 549);
        gridLayout = new QGridLayout(Games);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Quit = new QPushButton(Games);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        horizontalLayout_3->addWidget(Quit);

        Sound = new QPushButton(Games);
        Sound->setObjectName(QString::fromUtf8("Sound"));

        horizontalLayout_3->addWidget(Sound);


        verticalLayout->addLayout(horizontalLayout_3);

        Name_2 = new QLabel(Games);
        Name_2->setObjectName(QString::fromUtf8("Name_2"));
        Name_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Name_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        Enter = new QPushButton(Games);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setFlat(false);

        verticalLayout_3->addWidget(Enter);

        alias = new QLabel(Games);
        alias->setObjectName(QString::fromUtf8("alias"));

        verticalLayout_3->addWidget(alias);

        Name = new QTextEdit(Games);
        Name->setObjectName(QString::fromUtf8("Name"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Name->sizePolicy().hasHeightForWidth());
        Name->setSizePolicy(sizePolicy);
        Name->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(Name);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        logoMJ3 = new QLabel(Games);
        logoMJ3->setObjectName(QString::fromUtf8("logoMJ3"));

        gridLayout_2->addWidget(logoMJ3, 0, 2, 1, 1);

        logoMJ1 = new QLabel(Games);
        logoMJ1->setObjectName(QString::fromUtf8("logoMJ1"));

        gridLayout_2->addWidget(logoMJ1, 0, 0, 1, 1);

        logoMJ2 = new QLabel(Games);
        logoMJ2->setObjectName(QString::fromUtf8("logoMJ2"));

        gridLayout_2->addWidget(logoMJ2, 0, 1, 1, 1);

        Puzzle = new QPushButton(Games);
        Puzzle->setObjectName(QString::fromUtf8("Puzzle"));

        gridLayout_2->addWidget(Puzzle, 1, 0, 1, 1);

        TrashTime = new QPushButton(Games);
        TrashTime->setObjectName(QString::fromUtf8("TrashTime"));

        gridLayout_2->addWidget(TrashTime, 1, 1, 1, 1);

        HomeEvolve = new QPushButton(Games);
        HomeEvolve->setObjectName(QString::fromUtf8("HomeEvolve"));

        gridLayout_2->addWidget(HomeEvolve, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Easy = new QPushButton(Games);
        Easy->setObjectName(QString::fromUtf8("Easy"));

        horizontalLayout->addWidget(Easy);

        Medium = new QPushButton(Games);
        Medium->setObjectName(QString::fromUtf8("Medium"));

        horizontalLayout->addWidget(Medium);

        Hard = new QPushButton(Games);
        Hard->setObjectName(QString::fromUtf8("Hard"));

        horizontalLayout->addWidget(Hard);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Games);
        QObject::connect(Quit, &QPushButton::clicked, Games, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Games);
    } // setupUi

    void retranslateUi(QWidget *Games)
    {
        Games->setWindowTitle(QCoreApplication::translate("Games", "Form", nullptr));
        Quit->setText(QCoreApplication::translate("Games", "Quit", nullptr));
        Sound->setText(QCoreApplication::translate("Games", "Sound off/on", nullptr));
        Name_2->setText(QCoreApplication::translate("Games", "Name", nullptr));
        Enter->setText(QCoreApplication::translate("Games", "Enter", nullptr));
        alias->setText(QCoreApplication::translate("Games", "Enter your alias :", nullptr));
        Name->setDocumentTitle(QCoreApplication::translate("Games", "Pseudo", nullptr));
        Name->setHtml(QCoreApplication::translate("Games", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><title>Pseudo</title><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        logoMJ3->setText(QCoreApplication::translate("Games", "logoMJ3", nullptr));
        logoMJ1->setText(QCoreApplication::translate("Games", "logoMJ1", nullptr));
        logoMJ2->setText(QCoreApplication::translate("Games", "logoMJ2", nullptr));
        Puzzle->setText(QCoreApplication::translate("Games", "Puzzle", nullptr));
        TrashTime->setText(QCoreApplication::translate("Games", "Trash time", nullptr));
        HomeEvolve->setText(QCoreApplication::translate("Games", "Home evolve", nullptr));
        Easy->setText(QCoreApplication::translate("Games", "Easy", nullptr));
        Medium->setText(QCoreApplication::translate("Games", "Medium", nullptr));
        Hard->setText(QCoreApplication::translate("Games", "Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Games: public Ui_Games {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMES_H
