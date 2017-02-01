#ifndef FORMRACER_H
#define FORMRACER_H

#include <QWidget>

namespace Ui {
class FormRacer;
}

class FormRacer : public QWidget
{
    Q_OBJECT

public:
    explicit FormRacer(QWidget *parent = 0);
    ~FormRacer();

private:
    Ui::FormRacer *ui;
};

#endif // FORMRACER_H
