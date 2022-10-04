#include "flyweight_factory.h"

Flyweight* FlyweightFactory::getFlyweight(const std::string& key) {
    auto iter = _pool.find(key);
    if (iter != _pool.end()) {
        return iter->second.get();
    } else {
        Flyweight* flyweight = new Flyweight;
        _pool[key] = std::move(std::unique_ptr<Flyweight>(flyweight));
        return flyweight;
    }
}