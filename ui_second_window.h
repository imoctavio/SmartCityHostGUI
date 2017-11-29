/********************************************************************************
** Form generated from reading UI file 'second_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_WINDOW_H
#define UI_SECOND_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_second_window
{
public:
    QPushButton *goToNode1;
    QPushButton *goToNode2;
    QPushButton *goToNode3;
    QWidget *layoutWidget;
    QHBoxLayout *Node1Layout;
    QLabel *labelNode1;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *Node2Layout;
    QLabel *labelNode2;
    QLCDNumber *Node2Temp;
    QWidget *layoutWidget2;
    QHBoxLayout *Node3Layout;
    QLabel *labelNode3;
    QLCDNumber *Node3Temp;

    void setupUi(QDialog *second_window)
    {
        if (second_window->objectName().isEmpty())
            second_window->setObjectName(QStringLiteral("second_window"));
        second_window->resize(486, 452);
        goToNode1 = new QPushButton(second_window);
        goToNode1->setObjectName(QStringLiteral("goToNode1"));
        goToNode1->setGeometry(QRect(70, 120, 111, 29));
        goToNode2 = new QPushButton(second_window);
        goToNode2->setObjectName(QStringLiteral("goToNode2"));
        goToNode2->setGeometry(QRect(70, 260, 111, 29));
        goToNode3 = new QPushButton(second_window);
        goToNode3->setObjectName(QStringLiteral("goToNode3"));
        goToNode3->setGeometry(QRect(70, 400, 111, 29));
        layoutWidget = new QWidget(second_window);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 231, 81));
        Node1Layout = new QHBoxLayout(layoutWidget);
        Node1Layout->setObjectName(QStringLiteral("Node1Layout"));
        Node1Layout->setContentsMargins(0, 0, 0, 0);
        labelNode1 = new QLabel(layoutWidget);
        labelNode1->setObjectName(QStringLiteral("labelNode1"));

        Node1Layout->addWidget(labelNode1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        Node1Layout->addWidget(label);

        layoutWidget1 = new QWidget(second_window);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 170, 231, 81));
        Node2Layout = new QHBoxLayout(layoutWidget1);
        Node2Layout->setObjectName(QStringLiteral("Node2Layout"));
        Node2Layout->setContentsMargins(0, 0, 0, 0);
        labelNode2 = new QLabel(layoutWidget1);
        labelNode2->setObjectName(QStringLiteral("labelNode2"));

        Node2Layout->addWidget(labelNode2);

        Node2Temp = new QLCDNumber(layoutWidget1);
        Node2Temp->setObjectName(QStringLiteral("Node2Temp"));

        Node2Layout->addWidget(Node2Temp);

        layoutWidget2 = new QWidget(second_window);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 310, 231, 81));
        Node3Layout = new QHBoxLayout(layoutWidget2);
        Node3Layout->setObjectName(QStringLiteral("Node3Layout"));
        Node3Layout->setContentsMargins(0, 0, 0, 0);
        labelNode3 = new QLabel(layoutWidget2);
        labelNode3->setObjectName(QStringLiteral("labelNode3"));

        Node3Layout->addWidget(labelNode3);

        Node3Temp = new QLCDNumber(layoutWidget2);
        Node3Temp->setObjectName(QStringLiteral("Node3Temp"));

        Node3Layout->addWidget(Node3Temp);


        retranslateUi(second_window);

        QMetaObject::connectSlotsByName(second_window);
    } // setupUi

    void retranslateUi(QDialog *second_window)
    {
        second_window->setWindowTitle(QApplication::translate("second_window", "Dialog", Q_NULLPTR));
        goToNode1->setText(QApplication::translate("second_window", "Go to Node 1", Q_NULLPTR));
        goToNode2->setText(QApplication::translate("second_window", "Go to Node 2", Q_NULLPTR));
        goToNode3->setText(QApplication::translate("second_window", "Go to Node 3", Q_NULLPTR));
        labelNode1->setText(QApplication::translate("second_window", "Node #1", Q_NULLPTR));
        label->setText(QApplication::translate("second_window", "TextLabel", Q_NULLPTR));
        labelNode2->setText(QApplication::translate("second_window", "Node #2", Q_NULLPTR));
        labelNode3->setText(QApplication::translate("second_window", "Node #3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class second_window: public Ui_second_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_WINDOW_H
