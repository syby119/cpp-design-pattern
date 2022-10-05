#pragma once

class Abstraction {
public:
    virtual ~Abstraction() = default;

    virtual void service() = 0;

    virtual void operation() = 0;
};

class ConcreteA: public Abstraction {
public:
    void service() override;

    virtual void operation() = 0;
};

class ConcreteB: public Abstraction {
public:
    void service() override;

    virtual void operation() = 0;
};

class ConcreteA1: public ConcreteA {
public:
    void operation() override;
};

class ConcreteA2: public ConcreteA {
public:
    void operation() override;
};

class ConcreteB1: public ConcreteB {
public:
    void operation() override;
};

class ConcreteB2: public ConcreteB {
public:
    void operation() override;
};