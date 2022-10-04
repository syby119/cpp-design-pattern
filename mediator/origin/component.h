#pragma once
#include <vector>

class ComponentA {
public:    
    void operationA();
    
    void reactA();

    void notify(class ComponentB* b);
};

class ComponentB {
public:
    void operationB();

    void reactB();

    void notify(class ComponentC* c);
};

class ComponentC {
public:
    void operationC();

    void reactC();

    void notify(class ComponentA* a);

    void notify(class ComponentB* b);
};