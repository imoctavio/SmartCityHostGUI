#include "second_window.h"
#include "ui_second_window.h"
#include "temp_graph_node1.h" // This includes the new window for the temperaure of node #1
#include "temp_graph_node2.h"
#include "temp_graph_node3.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

QSerialPort *serial;
second_window::second_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_window)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(QSerialPort::Baud38400);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial ->open(QIODevice::ReadWrite);
    serial->write("Ok,Ok OK OK OK DAMNIT");
    connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived()));

}

second_window::~second_window()
{
    delete ui;
    serial->close();// Check id I really want to close the terminal
}

void second_window::serialReceived()
{
    QByteArray ba;
    ba=serial->readAll();
    ui->label->setText(ba);
    qDebug()<<ba;

   }

void second_window::on_goToNode1_clicked() // This class will open the new window for the temperature graph of node #1 from second window
{
    Temp_Graph_Node1 graph_node1; // Temp_Graph_Node1 (Instance of the class) cretes the object graph_node1 which open the new windof that display the new box
    graph_node1.setModal(true);
    graph_node1.exec(); // This exexcure the action of opening the graph for node 1
}

void second_window::on_goToNode2_clicked() // This class will open the new window for the temperature graph of node #2 from second window
{
    temp_graph_node2 graph_node2; // Temp_Graph_Node2 (Instance of the class) cretes the object graph_node2 which open the new windof that display the new box
    graph_node2.setModal(true);
    graph_node2.exec(); // This exexcure the action of opening the graph for node 1
}


void second_window::on_goToNode3_clicked() // This class will open the new window for the temperature graph of node #3 from second window
{
    temp_graph_node3 graph_node3;// Temp_Graph_Node3 (Instance of the class) cretes the object graph_node1 which open the new windof that display the new box
    graph_node3.setModal(true);
    graph_node3.exec(); // This exexcure the action of opening the graph for node 3
}
