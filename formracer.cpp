#include "formracer.h"
#include "ui_formracer.h"

FormRacer::FormRacer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRacer)
{
    ui->setupUi(this);
}

FormRacer::~FormRacer()
{
    delete ui;
}
