#pragma once
#include <memory>

class Abstraction {
public:
    Abstraction(class Implementor* implementor);

    virtual ~Abstraction() = default;

    virtual void service() = 0;

    void operation();
private:
    std::unique_ptr<class Implementor> _implementor;
};

class ConcreteA: public Abstraction {
public:
    ConcreteA(class Implementor* implementor);

    void service() override;
};

class ConcreteB: public Abstraction {
public:
    ConcreteB(class Implementor* implementor);

    void service() override;
};