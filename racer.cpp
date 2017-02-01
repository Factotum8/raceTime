#include "racer.h"

Racer::Racer()
{
    start.setHMS (0,0,0,0);
    finish.setHMS (0,0,0,0);
    delta.setHMS (0,0,0,0);
}

void Racer::set_start (QTime values){

    this->start = values;
}

void Racer::set_finish(QTime values){

    this->finish = values;
}
void Racer::set_delta (QTime values){

    this->delta = values;
}

QTime Racer::get_start (){

    return start;
}

QTime Racer::get_finish(){

    return finish;
}

QTime Racer::get_delta (){

    return delta;
}
