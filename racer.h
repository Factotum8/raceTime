#ifndef RACER_H
#define RACER_H

#include <QTime>

#include "party.h"

class Racer: public Party
{
public:

    QTime start;
    QTime finish;
    QTime delta;

    Racer();

    void set_start (QTime values);
    void set_finish(QTime values);
    void set_delta (QTime values);

    QTime get_start ();
    QTime get_finish();
    QTime get_delta ();
};

#endif // RACER_H
