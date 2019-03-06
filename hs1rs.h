#ifndef HS1RS_H
#define HS1RS_H

#include <QMainWindow>

namespace Ui {
class HS1RS;
}

class HS1RS : public QMainWindow
{
    Q_OBJECT

public:
    explicit HS1RS(QWidget *parent = 0);
    ~HS1RS();

private:
    Ui::HS1RS *ui;
};

#endif // HS1RS_H
