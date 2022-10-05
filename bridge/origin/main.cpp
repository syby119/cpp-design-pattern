#include "abstraction.h"

int main() {
    ConcreteA1 a1;
    ConcreteA2 a2;
    ConcreteB1 b1;
    ConcreteB2 b2;

    a1.service();
    a2.service();
    b1.service();
    b2.service();

    return 0;
}