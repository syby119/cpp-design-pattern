#pragma once

#include <map>
#include <memory>
#include <string>

#include "flyweight.h"

class FlyweightFactory {
public:
    FlyweightFactory() = default;
    ~FlyweightFactory() = default;

    Flyweight* getFlyweight(const std::string& key);

private:
    std::map<std::string, std::unique_ptr<Flyweight>> _pool;
};