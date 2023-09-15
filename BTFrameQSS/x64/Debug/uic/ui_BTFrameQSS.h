/********************************************************************************
** Form generated from reading UI file 'BTFrameQSS.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTFRAMEQSS_H
#define UI_BTFRAMEQSS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BTFrameQSSClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BTFrameQSSClass)
    {
        if (BTFrameQSSClass->objectName().isEmpty())
            BTFrameQSSClass->setObjectName(QString::fromUtf8("BTFrameQSSClass"));
        BTFrameQSSClass->resize(600, 400);
        menuBar = new QMenuBar(BTFrameQSSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        BTFrameQSSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BTFrameQSSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BTFrameQSSClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BTFrameQSSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BTFrameQSSClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BTFrameQSSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BTFrameQSSClass->setStatusBar(statusBar);

        retranslateUi(BTFrameQSSClass);

        QMetaObject::connectSlotsByName(BTFrameQSSClass);
    } // setupUi

    void retranslateUi(QMainWindow *BTFrameQSSClass)
    {
        BTFrameQSSClass->setWindowTitle(QApplication::translate("BTFrameQSSClass", "BTFrameQSS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BTFrameQSSClass: public Ui_BTFrameQSSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTFRAMEQSS_H
