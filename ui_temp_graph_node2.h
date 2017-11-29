/********************************************************************************
** Form generated from reading UI file 'temp_graph_node2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMP_GRAPH_NODE2_H
#define UI_TEMP_GRAPH_NODE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_temp_graph_node2
{
public:

    void setupUi(QDialog *temp_graph_node2)
    {
        if (temp_graph_node2->objectName().isEmpty())
            temp_graph_node2->setObjectName(QStringLiteral("temp_graph_node2"));
        temp_graph_node2->resize(400, 300);

        retranslateUi(temp_graph_node2);

        QMetaObject::connectSlotsByName(temp_graph_node2);
    } // setupUi

    void retranslateUi(QDialog *temp_graph_node2)
    {
        temp_graph_node2->setWindowTitle(QApplication::translate("temp_graph_node2", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class temp_graph_node2: public Ui_temp_graph_node2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMP_GRAPH_NODE2_H
