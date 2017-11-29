#ifndef TEMP_GRAPH_NODE1_H
#define TEMP_GRAPH_NODE1_H

#include <QDialog>

namespace Ui {
class Temp_Graph_Node1;
}

class Temp_Graph_Node1 : public QDialog
{
    Q_OBJECT

public:
    explicit Temp_Graph_Node1(QWidget *parent = 0);
    ~Temp_Graph_Node1();

private:
    Ui::Temp_Graph_Node1 *ui;
};

#endif // TEMP_GRAPH_NODE1_H
