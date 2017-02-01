#ifndef LISTRACERS_H
#define LISTRACERS_H

#include <QWidget>

#include "formracer.h"

namespace Ui {
class ListRacers;
}

class ListRacers : public QWidget
{
    Q_OBJECT

public:
    explicit ListRacers(QWidget *parent = 0);
    ~ListRacers();

private:
    Ui::ListRacers *ui;
};

#endif // LISTRACERS_H
