/********************************************************************************
** Form generated from reading UI file 'Loading.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoadingClass)
    {
        if (LoadingClass->objectName().isEmpty())
            LoadingClass->setObjectName(QString::fromUtf8("LoadingClass"));
        LoadingClass->resize(600, 400);
        menuBar = new QMenuBar(LoadingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        LoadingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoadingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LoadingClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LoadingClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        LoadingClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LoadingClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LoadingClass->setStatusBar(statusBar);

        retranslateUi(LoadingClass);

        QMetaObject::connectSlotsByName(LoadingClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoadingClass)
    {
        LoadingClass->setWindowTitle(QApplication::translate("LoadingClass", "Loading", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingClass: public Ui_LoadingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
