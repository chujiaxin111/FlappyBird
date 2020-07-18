/********************************************************************************
** Form generated from reading UI file 'beforegame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFOREGAME_H
#define UI_BEFOREGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeforeGame
{
public:
    QLabel *label;

    void setupUi(QWidget *BeforeGame)
    {
        if (BeforeGame->objectName().isEmpty())
            BeforeGame->setObjectName(QStringLiteral("BeforeGame"));
        BeforeGame->resize(584, 448);
        label = new QLabel(BeforeGame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 584, 448));
        label->setMinimumSize(QSize(584, 448));
        label->setMaximumSize(QSize(584, 448));
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/BirdGame/Resources/image/b1.jpg")));
        label->setMargin(0);

        retranslateUi(BeforeGame);

        QMetaObject::connectSlotsByName(BeforeGame);
    } // setupUi

    void retranslateUi(QWidget *BeforeGame)
    {
        BeforeGame->setWindowTitle(QApplication::translate("BeforeGame", "Form", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BeforeGame: public Ui_BeforeGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFOREGAME_H
