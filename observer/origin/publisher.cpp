#include <iostream>
#include "publisher.h"

void Publisher::notify(SubscriberA* subscriber) {
    std::cout << "Publisher::notify(SubscriberA*)" << std::endl;
    subscriber->response();
}

void Publisher::notify(SubscriberB* subscriber) {
    std::cout << "Publisher::notify(SubscriberA*)" << std::endl;
    subscriber->response();
}

void Publisher::notify(SubscriberC* subscriber) {
    std::cout << "Publisher::notify(SubscriberA*)" << std::endl;
    subscriber->response();
}