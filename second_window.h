#ifndef SECOND_WINDOW_H
#define SECOND_WINDOW_H

#include <QDialog>

namespace Ui {
class second_window;
}

class second_window : public QDialog
{
    Q_OBJECT

public:
    explicit second_window(QWidget *parent = 0);
    ~second_window();

private slots:
    void serialReceived(); //This will open the serial port data or the inormation from SAMR21

    void on_goToNode1_clicked();

    void on_goToNode2_clicked();

    void on_goToNode3_clicked();

private:
    Ui::second_window *ui;
};

#endif // SECOND_WINDOW_H
