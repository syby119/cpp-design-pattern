#pragma once
#include "builder.h"

class Director {
public:
    Director(Builder* builder);

    void setBuilder(Builder* builder);

    Product* constructProduct();

private:
    Builder* _builder;
};