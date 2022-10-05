#pragma once

class Implementor {
public:
    virtual ~Implementor() = default;

    virtual void operationImp() = 0;
};

class Implementor1: public Implementor {
public:
    void operationImp() override;
};

class Implementor2: public Implementor {
public:
    void operationImp() override;
};