#pragma once

class Mediator;

class ComponentA {
public:
    ComponentA(Mediator* mediator);
    
    void operationA();
    
    void reactA();
private:
    Mediator* _mediator;
};

class ComponentB {
public:
    ComponentB(Mediator* mediator);
    
    void operationB();

    void reactB();
private:
    Mediator* _mediator;
};

class ComponentC {
public:
    ComponentC(Mediator* mediator);
    
    void operationC();

    void reactC();
private:
    Mediator* _mediator;
};