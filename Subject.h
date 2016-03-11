//
// Created by Tristan Whitcher on 3/10/16.
//

#ifndef GARAGECONTROLLER_SUBJECT_H
#define GARAGECONTROLLER_SUBJECT_H


#include <vector>
#include "Event.h"
#include "Observer.h"

class Subject {

    std::vector<Observer*> observers;

public:
    void attach(Observer* observer);
    void notifyObserver(Event event);
};


#endif //GARAGECONTROLLER_SUBJECT_H
