#include "temp_graph_node1.h"
#include "ui_temp_graph_node1.h"

Temp_Graph_Node1::Temp_Graph_Node1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Temp_Graph_Node1)
{
    ui->setupUi(this);
}

Temp_Graph_Node1::~Temp_Graph_Node1()
{
    delete ui;
}
