#ifndef HW2_H
#define HW2_H

#include <QMainWindow>

namespace Ui {
class hw2;
}

class hw2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit hw2(QWidget *parent = 0);
    ~hw2();

private:
    Ui::hw2 *ui;
};

#endif // HW2_H
