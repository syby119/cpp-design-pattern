#include "component.h"
#include "decorator.h"

int main() {
    ComponentA a;
    ComponentB b;
    DecoratorC ac(&a);
    DecoratorC bc(&b);
    DecoratorD ad(&a);
    DecoratorD bd(&b);

    ac.execute();
    bc.execute();
    ad.execute();
    bd.execute();

    return 0;
}