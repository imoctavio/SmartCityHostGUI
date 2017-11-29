/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionNode_2;
    QAction *actionNode_3;
    QAction *actionTemp_Graph;
    QAction *actionTemp_Graph_2;
    QAction *actionTemp_Graph_3;
    QWidget *centralWidget;
    QLabel *picLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen_Node;
    QMenu *menuNode_1;
    QMenu *menuNode_2;
    QMenu *menuNode_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(541, 407);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral("images/exit.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon);
        actionNode_2 = new QAction(MainWindow);
        actionNode_2->setObjectName(QStringLiteral("actionNode_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/newNode.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionNode_2->setIcon(icon1);
        actionNode_3 = new QAction(MainWindow);
        actionNode_3->setObjectName(QStringLiteral("actionNode_3"));
        actionNode_3->setIcon(icon1);
        actionTemp_Graph = new QAction(MainWindow);
        actionTemp_Graph->setObjectName(QStringLiteral("actionTemp_Graph"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/tempGraph.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemp_Graph->setIcon(icon2);
        actionTemp_Graph_2 = new QAction(MainWindow);
        actionTemp_Graph_2->setObjectName(QStringLiteral("actionTemp_Graph_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/tempGraph.png"), QSize(), QIcon::Active, QIcon::On);
        actionTemp_Graph_2->setIcon(icon3);
        actionTemp_Graph_3 = new QAction(MainWindow);
        actionTemp_Graph_3->setObjectName(QStringLiteral("actionTemp_Graph_3"));
        actionTemp_Graph_3->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        picLabel = new QLabel(centralWidget);
        picLabel->setObjectName(QStringLiteral("picLabel"));
        picLabel->setGeometry(QRect(130, 10, 251, 201));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 220, 453, 65));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 541, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpen_Node = new QMenu(menuFile);
        menuOpen_Node->setObjectName(QStringLiteral("menuOpen_Node"));
        menuNode_1 = new QMenu(menuOpen_Node);
        menuNode_1->setObjectName(QStringLiteral("menuNode_1"));
        menuNode_2 = new QMenu(menuOpen_Node);
        menuNode_2->setObjectName(QStringLiteral("menuNode_2"));
        menuNode_3 = new QMenu(menuOpen_Node);
        menuNode_3->setObjectName(QStringLiteral("menuNode_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuOpen_Node->menuAction());
        menuFile->addAction(actionExit);
        menuOpen_Node->addAction(menuNode_1->menuAction());
        menuOpen_Node->addAction(menuNode_2->menuAction());
        menuOpen_Node->addAction(menuNode_3->menuAction());
        menuNode_1->addAction(actionTemp_Graph);
        menuNode_2->addAction(actionTemp_Graph_2);
        menuNode_3->addAction(actionTemp_Graph_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionNode_2->setText(QApplication::translate("MainWindow", "Node 2", Q_NULLPTR));
        actionNode_3->setText(QApplication::translate("MainWindow", "Node 3", Q_NULLPTR));
        actionTemp_Graph->setText(QApplication::translate("MainWindow", "Temp. Graph", Q_NULLPTR));
        actionTemp_Graph_2->setText(QApplication::translate("MainWindow", "Temp. Graph", Q_NULLPTR));
        actionTemp_Graph_3->setText(QApplication::translate("MainWindow", "Temp. Graph", Q_NULLPTR));
        picLabel->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#1d6ee7;\">       Welcome to SJSU                                    Smart City Mesh Network</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Click to Begin", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File ", Q_NULLPTR));
        menuOpen_Node->setTitle(QApplication::translate("MainWindow", "Open Node ", Q_NULLPTR));
        menuNode_1->setTitle(QApplication::translate("MainWindow", "Node 1", Q_NULLPTR));
        menuNode_2->setTitle(QApplication::translate("MainWindow", "Node 2", Q_NULLPTR));
        menuNode_3->setTitle(QApplication::translate("MainWindow", "Node 3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
