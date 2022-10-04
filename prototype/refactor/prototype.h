#pragma once
#include <string>

class Prototype {
public:
    virtual ~Prototype() = default;

    virtual Prototype* clone() = 0;

    virtual void print() = 0;
protected:
    Prototype() = default;
};

class PrototypeA: public Prototype {
public:
    PrototypeA();

    PrototypeA(const PrototypeA& rhs);

    Prototype* clone() override;

    void print() override;
private:
    std::string _state;
};