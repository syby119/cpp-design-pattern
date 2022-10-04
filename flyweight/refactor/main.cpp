#include "flyweight.h"
#include "flyweight_factory.h"

int main() {
    FlyweightFactory factory;
    factory.getFlyweight("A");
    factory.getFlyweight("B");
    factory.getFlyweight("A");
    factory.getFlyweight("B");
    
    return 0;
}