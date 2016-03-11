//
// Created by Tristan Whitcher on 3/10/16.
//

#ifndef GARAGECONTROLLER_MOTOR_H
#define GARAGECONTROLLER_MOTOR_H


#include "util/Subject.h"

class Motor : public Subject  {

    int position;
    bool active;
    bool up;
    bool enabled;

public:

    static const int FULLY_OPEN_POSITION = 10;
    static const int FULLY_CLOSED_POSITION = 1;

    Motor();

    void run();

    void overcurrent();

    void fullyOpen();

    void fullyClosed();

    void turnOn();
};


#endif //GARAGECONTROLLER_MOTOR_H
