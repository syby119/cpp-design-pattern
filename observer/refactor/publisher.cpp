#include <iostream>
#include "publisher.h"

void Publisher::attach(Subscriber* subscriber) {
    if (subscriber != nullptr) {
        _subscribers.push_back(subscriber);
    }
}

void Publisher::detach(Subscriber* subscriber) {
    _subscribers.remove(subscriber);
}

void Publisher::notify() {
    std::cout << "Publisher::notify()" << std::endl;
    for (auto subscriber : _subscribers) {
        subscriber->response();
    }
}