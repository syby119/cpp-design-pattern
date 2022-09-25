#pragma once
#include "subscriber.h"

class Publisher {
public:
    void notify(SubscriberA* subscriber);

    void notify(SubscriberB* subscriber);

    void notify(SubscriberC* subscriber);
};