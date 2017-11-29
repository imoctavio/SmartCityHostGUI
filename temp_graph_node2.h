#ifndef TEMP_GRAPH_NODE2_H
#define TEMP_GRAPH_NODE2_H

#include <QDialog>

namespace Ui {
class temp_graph_node2;
}

class temp_graph_node2 : public QDialog
{
    Q_OBJECT

public:
    explicit temp_graph_node2(QWidget *parent = 0);
    ~temp_graph_node2();

private:
    Ui::temp_graph_node2 *ui;
};

#endif // TEMP_GRAPH_NODE2_H
