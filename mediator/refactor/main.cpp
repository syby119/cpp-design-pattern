#include "mediator.h"
#include "component.h"

int main() {
    Mediator1 m;

    ComponentA a(&m);
    ComponentB b(&m);
    ComponentC c(&m);

    m.addComponentA(&a);
    m.addComponentB(&b);
    m.addComponentC(&c);

    a.operationA();
    b.operationB();
    c.operationC();

    return 0;
}