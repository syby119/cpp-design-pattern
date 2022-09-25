#pragma once 

class Subscriber {
public:
    virtual void response() = 0;
};

class SubscriberA: public Subscriber {
    void response() override;
};

class SubscriberB: public Subscriber {
    void response() override;
};

class SubscriberC: public Subscriber {
    void response() override;
};
