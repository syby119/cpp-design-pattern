#include <memory>

#include "publisher.h"
#include "subscriber.h"

int main() {
    Publisher publisher;
    std::unique_ptr<Subscriber> subscribers[3] = {
        std::make_unique<SubscriberA>(),
        std::make_unique<SubscriberB>(),
        std::make_unique<SubscriberC>()
    };

    for (auto& subscriber : subscribers) {
        publisher.attach(subscriber.get());
    }

    publisher.notify();

    return 0;
}