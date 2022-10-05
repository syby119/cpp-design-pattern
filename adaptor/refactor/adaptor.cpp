#include "adaptee.h"
#include "adaptor.h"

Adaptor::Adaptor(): _adaptee(new Adaptee) { }

void Adaptor::process() {
    _adaptee->bar();
    _adaptee->foo();
}