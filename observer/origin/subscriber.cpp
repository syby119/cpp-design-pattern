#include <iostream>
#include "subscriber.h"

void SubscriberA::response() {
    std::cout << "SubscriberA::response()" << std::endl;
}

void SubscriberB::response() {
    std::cout << "SubscriberB::response()" << std::endl;
}

void SubscriberC::response() {
    std::cout << "SubscriberC::response()" << std::endl;
}