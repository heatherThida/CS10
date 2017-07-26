#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBasicTimer>
#include <QMouseEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //event handlers
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void mouseMoveEvent(QMouseEvent *);

private:
    Ui::MainWindow *ui;
    //ball
    int bx,by; // current position of the ball
    int bw,bh; // size of the ball
    int bdx,bdy; // velocity of the ball

    //paddle
    int px, py;   //current position
    int pw, ph; //size

    //adding timer to move
    QBasicTimer timer;

};

#endif // MAINWINDOW_H
