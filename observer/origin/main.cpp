#include "publisher.h"
#include "subscriber.h"

int main() {
    Publisher publisher;
    SubscriberA subscriberA;
    SubscriberB subscriberB;
    SubscriberC subscriberC;

    publisher.attach(&subscriberA);
    publisher.attach(&subscriberB);
    publisher.attach(&subscriberC);
    
    publisher.notify();

    return 0;
}