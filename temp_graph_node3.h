#ifndef TEMP_GRAPH_NODE3_H
#define TEMP_GRAPH_NODE3_H

#include <QDialog>

namespace Ui {
class temp_graph_node3;
}

class temp_graph_node3 : public QDialog
{
    Q_OBJECT

public:
    explicit temp_graph_node3(QWidget *parent = 0);
    ~temp_graph_node3();

private:
    Ui::temp_graph_node3 *ui;
};

#endif // TEMP_GRAPH_NODE3_H
