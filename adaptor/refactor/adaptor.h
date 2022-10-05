#pragma once
#include <memory>

class ITarget {
public:
    virtual ~ITarget() = default;

    virtual void process() = 0;
};

class Adaptor: public ITarget {
public:
    Adaptor();

    void process() override;
private:
    std::unique_ptr<class Adaptee> _adaptee;
};