#include "temp_graph_node3.h"
#include "ui_temp_graph_node3.h"

temp_graph_node3::temp_graph_node3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp_graph_node3)
{
    ui->setupUi(this);
}

temp_graph_node3::~temp_graph_node3()
{
    delete ui;
}
