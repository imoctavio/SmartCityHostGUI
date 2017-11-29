#include "temp_graph_node2.h"
#include "ui_temp_graph_node2.h"

temp_graph_node2::temp_graph_node2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp_graph_node2)
{
    ui->setupUi(this);
}

temp_graph_node2::~temp_graph_node2()
{
    delete ui;
}
