#include "builder.h"
#include "director.h"

Director::Director(Builder* builder): _builder(builder) { }

void Director::setBuilder(Builder* builder) {
    _builder = builder;
}

Product* Director::constructProduct() {
    _builder->buildStep1();
    _builder->buildStep2();
    _builder->buildStep3();
    _builder->buildStep4();

    return _builder->getProduct();
}