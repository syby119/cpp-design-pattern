#include "component.h"

int main() {
    ComponentA a;
    ComponentB b;
    ComponentC c;

    a.operationA();
    a.notify(&b);

    b.operationB();
    b.notify(&c);

    c.operationC();
    c.notify(&a);
    c.notify(&b);

    return 0;
}