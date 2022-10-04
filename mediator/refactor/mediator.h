#pragma once
#include <vector>

class Mediator {
public:
    virtual ~Mediator() = default;

    virtual void addComponentA(class ComponentA* a) = 0;
    virtual void addComponentB(class ComponentB* b) = 0;
    virtual void addComponentC(class ComponentC* c) = 0;
    
    virtual void notify(class ComponentA* sender) = 0;
    virtual void notify(class ComponentB* sender) = 0;
    virtual void notify(class ComponentC* sender) = 0;
};

class Mediator1: public Mediator {
public:
    void addComponentA(class ComponentA* a) override;
    void addComponentB(class ComponentB* b) override;
    void addComponentC(class ComponentC* c) override;

    // A->B B->C C->AB
    void notify(class ComponentA* sender) override;
    void notify(class ComponentB* sender) override;
    void notify(class ComponentC* sender) override;

private:
    std::vector<class ComponentA*> _componentAs;
    std::vector<class ComponentB*> _componentBs;
    std::vector<class ComponentC*> _componentCs;
};
