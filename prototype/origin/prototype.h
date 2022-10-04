#pragma once
#include <string>

class Prototype {
public:
    virtual ~Prototype() = default;

    virtual void print() = 0;
};

class PrototypeA: public Prototype {
public:
    PrototypeA();
    
    PrototypeA(const PrototypeA& rhs);

    void print() override;

private:
    std::string _state;
};