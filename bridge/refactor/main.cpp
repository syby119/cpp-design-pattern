#include "abstraction.h"
#include "implementor.h"

int main() {
    ConcreteA a1(new Implementor1);
    ConcreteA a2(new Implementor2);
    ConcreteB b1(new Implementor1);
    ConcreteB b2(new Implementor2);

    a1.service();
    a2.service();
    b1.service();
    b2.service();

    return 0;
}