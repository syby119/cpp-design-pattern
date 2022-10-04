#include <iostream>
#include "builder.h"

Product* Builder::getProduct() {
    return _product;
}

void BuilderA::buildStep1() {
    _product = new ProductA;
    _product->setA("_a set from BuilderA");
}

void BuilderA::buildStep2() {
    _product->setB("_b set from BuilderA");
}

void BuilderA::buildStep3() {
    _product->setC("_c set from BuilderA");
}

void BuilderA::buildStep4() {
    _product->setD("_d set from BuilderA");
}

void BuilderB::buildStep1() {
    _product = new ProductB;
    _product->setA("_a set from BuilderB");
}

void BuilderB::buildStep2() {
    _product->setB("_b set from BuilderB");
}

void BuilderB::buildStep3() {
    _product->setC("_c set from BuilderB");
}

void BuilderB::buildStep4() {
    _product->setD("_d set from BuilderB");
}