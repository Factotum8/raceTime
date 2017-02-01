#include "party.h"

Party::Party()
{
    this->id =  0;
    this->secondname = "null";
}

void Party::set_id ( int id ){

    this->id = id;
}

void Party::set_secondname ( int secondname ){

    this->secondname = secondname;
}

int Party::get_id (){

    return this->id;
}

QString Party::get_secondname (){

    return this->secondname;
}
