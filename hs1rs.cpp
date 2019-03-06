#include "hs1rs.h"
#include "ui_hs1rs.h"

HS1RS::HS1RS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HS1RS)
{
    ui->setupUi(this);
}

HS1RS::~HS1RS()
{
    delete ui;
}
