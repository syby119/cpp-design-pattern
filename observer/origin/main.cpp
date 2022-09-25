#include "publisher.h"
#include "subscriber.h"

int main() {
    Publisher publisher;
    SubscriberA subscriberA;
    SubscriberB subscriberB;
    SubscriberC subscriberC;

    publisher.notify(&subscriberA);
    publisher.notify(&subscriberB);
    publisher.notify(&subscriberC);

    return 0;
}