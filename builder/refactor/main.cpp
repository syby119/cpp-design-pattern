#include <memory>

#include "product.h"
#include "builder.h"
#include "director.h"

int main() {
    auto builderA = std::make_unique<BuilderA>();
    auto builderB = std::make_unique<BuilderB>();

    Director director(builderA.get());
    std::unique_ptr<Product> a { director.constructProduct() };
    a->print();

    director.setBuilder(builderB.get());
    std::unique_ptr<Product> b { director.constructProduct() };
    b->print();

    return 0;
}