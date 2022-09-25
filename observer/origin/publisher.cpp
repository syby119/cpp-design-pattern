#include <iostream>
#include "publisher.h"

void Publisher::attach(SubscriberA* subscriber) {
    _subscriberA = subscriber;
}

void Publisher::attach(SubscriberB* subscriber) {
    _subscriberB = subscriber;
}

void Publisher::attach(SubscriberC* subscriber) {
    _subscriberC = subscriber;
}

void Publisher::detach(SubscriberA* subscriber) {
    if (subscriber == _subscriberA) {
        _subscriberA = nullptr;
    }
}

void Publisher::detach(SubscriberB* subscriber) {
    if (subscriber == _subscriberB) {
        _subscriberB = nullptr;
    }
}

void Publisher::detach(SubscriberC* subscriber) {
    if (subscriber == _subscriberC) {
        _subscriberC = nullptr;
    }
}

void Publisher::notify() {
    std::cout << "Publisher::notify()" << std::endl;
    
    if (_subscriberA != nullptr) {
        _subscriberA->response();
    }

    if (_subscriberB != nullptr) {
        _subscriberB->response();
    }

    if (_subscriberC != nullptr) {
        _subscriberC->response();
    }
}
