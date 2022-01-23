/********************************************************************************
** Form generated from reading UI file 'puzzle.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUZZLE_H
#define UI_PUZZLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Puzzle
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *Answer;
    QRadioButton *Rep1;
    QRadioButton *Rep2;
    QRadioButton *Rep3;
    QPushButton *Confirm;
    QLabel *Question;
    QHBoxLayout *horizontalLayout_4;
    QLabel *level;
    QSpacerItem *horizontalSpacer;
    QPushButton *Sound;
    QHBoxLayout *horizontalLayout_3;
    QLabel *nb_pieces;
    QLabel *combo;
    QProgressBar *progressBar;
    QLabel *Image_finale;
    QHBoxLayout *horizontalLayout;
    QPushButton *ChangeGame;
    QPushButton *Play;
    QPushButton *Quit;
    QPushButton *Rules;
    QGroupBox *Puzzle_2;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *Puzzle)
    {
        if (Puzzle->objectName().isEmpty())
            Puzzle->setObjectName(QString::fromUtf8("Puzzle"));
        Puzzle->resize(672, 433);
        gridLayout = new QGridLayout(Puzzle);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 20);
        Answer = new QLabel(Puzzle);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));

        verticalLayout->addWidget(Answer);

        Rep1 = new QRadioButton(Puzzle);
        Rep1->setObjectName(QString::fromUtf8("Rep1"));
        Rep1->setStyleSheet(QString::fromUtf8("QRadioButton { color: white};"));

        verticalLayout->addWidget(Rep1);

        Rep2 = new QRadioButton(Puzzle);
        Rep2->setObjectName(QString::fromUtf8("Rep2"));
        Rep2->setStyleSheet(QString::fromUtf8("QRadioButton { color: white};"));

        verticalLayout->addWidget(Rep2);

        Rep3 = new QRadioButton(Puzzle);
        Rep3->setObjectName(QString::fromUtf8("Rep3"));
        Rep3->setStyleSheet(QString::fromUtf8("QRadioButton { color: white};"));

        verticalLayout->addWidget(Rep3);


        horizontalLayout_2->addLayout(verticalLayout);

        Confirm = new QPushButton(Puzzle);
        Confirm->setObjectName(QString::fromUtf8("Confirm"));
        Confirm->setAutoFillBackground(false);
        Confirm->setStyleSheet(QString::fromUtf8("QPushButton { color: white;background-color:lightblue};"));
        Confirm->setFlat(false);

        horizontalLayout_2->addWidget(Confirm);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        Question = new QLabel(Puzzle);
        Question->setObjectName(QString::fromUtf8("Question"));
        Question->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));

        gridLayout->addWidget(Question, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        level = new QLabel(Puzzle);
        level->setObjectName(QString::fromUtf8("level"));
        level->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));

        horizontalLayout_4->addWidget(level);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        Sound = new QPushButton(Puzzle);
        Sound->setObjectName(QString::fromUtf8("Sound"));

        horizontalLayout_4->addWidget(Sound);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        nb_pieces = new QLabel(Puzzle);
        nb_pieces->setObjectName(QString::fromUtf8("nb_pieces"));
        nb_pieces->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));

        horizontalLayout_3->addWidget(nb_pieces);

        combo = new QLabel(Puzzle);
        combo->setObjectName(QString::fromUtf8("combo"));
        combo->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));
        combo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(combo);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        progressBar = new QProgressBar(Puzzle);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 6, 0, 1, 1);

        Image_finale = new QLabel(Puzzle);
        Image_finale->setObjectName(QString::fromUtf8("Image_finale"));
        Image_finale->setStyleSheet(QString::fromUtf8("QLabel { color: white};"));
        Image_finale->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Image_finale, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        ChangeGame = new QPushButton(Puzzle);
        ChangeGame->setObjectName(QString::fromUtf8("ChangeGame"));

        horizontalLayout->addWidget(ChangeGame);

        Play = new QPushButton(Puzzle);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setStyleSheet(QString::fromUtf8("QPushButton {background-color:green ; color:white;};"));

        horizontalLayout->addWidget(Play);

        Quit = new QPushButton(Puzzle);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        horizontalLayout->addWidget(Quit);

        Rules = new QPushButton(Puzzle);
        Rules->setObjectName(QString::fromUtf8("Rules"));
        Rules->setStyleSheet(QString::fromUtf8("QPushButton {background-color:orange ; color:white;};"));

        horizontalLayout->addWidget(Rules);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        Puzzle_2 = new QGroupBox(Puzzle);
        Puzzle_2->setObjectName(QString::fromUtf8("Puzzle_2"));
        Puzzle_2->setStyleSheet(QString::fromUtf8("QGroupBox { color: white};"));
        gridLayout_2 = new QGridLayout(Puzzle_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(Puzzle_2, 2, 0, 1, 1);


        retranslateUi(Puzzle);
        QObject::connect(Quit, &QPushButton::clicked, Puzzle, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Puzzle);
    } // setupUi

    void retranslateUi(QWidget *Puzzle)
    {
        Puzzle->setWindowTitle(QCoreApplication::translate("Puzzle", "Form", nullptr));
        Answer->setText(QCoreApplication::translate("Puzzle", "Answer", nullptr));
        Rep1->setText(QCoreApplication::translate("Puzzle", "Rep1", nullptr));
        Rep2->setText(QCoreApplication::translate("Puzzle", "Rep2", nullptr));
        Rep3->setText(QCoreApplication::translate("Puzzle", "Rep3", nullptr));
        Confirm->setText(QCoreApplication::translate("Puzzle", "Confirm", nullptr));
        Question->setText(QCoreApplication::translate("Puzzle", "Question", nullptr));
        level->setText(QCoreApplication::translate("Puzzle", "level", nullptr));
        Sound->setText(QCoreApplication::translate("Puzzle", "Sound off/on", nullptr));
        nb_pieces->setText(QCoreApplication::translate("Puzzle", "nb_piece", nullptr));
        combo->setText(QCoreApplication::translate("Puzzle", "combo", nullptr));
        Image_finale->setText(QCoreApplication::translate("Puzzle", "Image_finale", nullptr));
        ChangeGame->setText(QCoreApplication::translate("Puzzle", "Change game", nullptr));
        Play->setText(QCoreApplication::translate("Puzzle", "Play", nullptr));
        Quit->setText(QCoreApplication::translate("Puzzle", "Quit", nullptr));
        Rules->setText(QCoreApplication::translate("Puzzle", "Rules", nullptr));
        Puzzle_2->setTitle(QCoreApplication::translate("Puzzle", "Puzzle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Puzzle: public Ui_Puzzle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUZZLE_H
