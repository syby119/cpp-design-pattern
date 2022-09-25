#pragma once

#include <list>
#include "subscriber.h"

class Publisher {
public:
    void attach(Subscriber* subscriber);

    void detach(Subscriber* subscriber);

    void notify();
private:
    std::list<Subscriber*> _subscribers;
};