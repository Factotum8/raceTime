#ifndef PARTY_H
#define PARTY_H
#include <qstring.h>

class Party
{
public:
     QString secondname;
     int id;

public:
    Party();
    void set_id ( int id );
    void set_secondname ( int secondname );

    int get_id ();
    QString get_secondname ();
};

#endif // PARTY_H
