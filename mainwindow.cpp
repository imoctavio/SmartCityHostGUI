#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second_window.h"
#include "temp_graph_node1.h"
#include "temp_graph_node2.h"
#include "temp_graph_node3.h"


//#include <QMessageBox>


#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap meshPic(":/images/images/images.jpg"); //  this is the obeject and location of the imange (Using the resource file location)
    int w = ui->picLabel->width();
    int h = ui->picLabel->height();
    ui->picLabel->setPixmap(meshPic.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    second_window newWindow;
    newWindow.setModal(true);
    newWindow.exec();
}

void MainWindow::on_actionTemp_Graph_triggered()// This class opens the graph from node 1
{
    Temp_Graph_Node1 graph_node1; // Temp_Graph_Node1 (Instance of the class) cretes the object graph_node1 which open the new windof that display the new box
    graph_node1.setModal(true);
    graph_node1.exec(); // This exexcure the action of opening the graph for node 1
}

void MainWindow::on_actionTemp_Graph_2_triggered()// This class opens the graph from node 2
{
    Temp_Graph_Node1 graph_node1; // Temp_Graph_Node2 (Instance of the class) cretes the object graph_node2 which open the new windof that display the new box
    graph_node1.setModal(true);
    graph_node1.exec(); // This exexcure the action of opening the graph for node 2
}




void MainWindow::on_actionTemp_Graph_3_triggered() // This class opens the graph from node 3
{
    Temp_Graph_Node1 graph_node1; // Temp_Graph_Node3 (Instance of the class) cretes the object graph_node3 which open the new windof that display the new box
    graph_node1.setModal(true);
    graph_node1.exec(); // This exexcure the action of opening the graph for node 3
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
