#include "listracers.h"
#include "ui_listracers.h"

ListRacers::ListRacers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListRacers)
{
    ui->setupUi(this);


    this->move(10,10);

    QStringList    list_name ;

    for (int i=0;i<count_ir;i++){

        list_name<<    !!!!!!!!!!!  ir[i].get_name();

    }

    int i=0;

    foreach (QString str, list_name) {

        qDebug()<<"\nTabWidget FormIr(i) i:"<<i;

//        ui->tabWidget->addTab(new FormIr(i),str );
        ui->tabWidget->addTab(new FormRacer(), str);

        i++;

    }
}

ListRacers::~ListRacers()
{
    delete ui;
}
