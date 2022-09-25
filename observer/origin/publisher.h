#pragma once
#include "subscriber.h"

class Publisher {
public:
    void notify();

    void attach(SubscriberA* subscriber);
    
    void attach(SubscriberB* subscriber);
    
    void attach(SubscriberC* subscriber);

    void detach(SubscriberA* subscriber);

    void detach(SubscriberB* subscriber);
    
    void detach(SubscriberC* subscriber);

private:
    SubscriberA* _subscriberA = nullptr;
    SubscriberB* _subscriberB = nullptr;
    SubscriberC* _subscriberC = nullptr;
};