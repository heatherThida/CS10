/********************************************************************************
** Form generated from reading UI file 'hw2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HW2_H
#define UI_HW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hw2
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hw2)
    {
        if (hw2->objectName().isEmpty())
            hw2->setObjectName(QStringLiteral("hw2"));
        hw2->resize(400, 300);
        menuBar = new QMenuBar(hw2);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        hw2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(hw2);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        hw2->addToolBar(mainToolBar);
        centralWidget = new QWidget(hw2);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hw2->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(hw2);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hw2->setStatusBar(statusBar);

        retranslateUi(hw2);

        QMetaObject::connectSlotsByName(hw2);
    } // setupUi

    void retranslateUi(QMainWindow *hw2)
    {
        hw2->setWindowTitle(QApplication::translate("hw2", "hw2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hw2: public Ui_hw2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HW2_H
