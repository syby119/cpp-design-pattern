#pragma once
#include "component.h"

class Decorator : public Component {
public:
    Decorator(Component* component);

    virtual ~Decorator() = default;
protected:
    Component* _component;
};

class DecoratorC: public Decorator {
public:
    DecoratorC(Component* component);

    void execute() override;

    virtual ~DecoratorC() = default;
private:
    void funC();
};

class DecoratorD: public Decorator {
public:
    DecoratorD(Component* component);

    void execute() override;
    
    virtual ~DecoratorD() = default;
private:
    void funD();
};