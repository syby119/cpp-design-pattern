#include <algorithm>
#include <iostream>
#include "composite.h"

Component::Component(const std::string& name): _name(name) { }

Composite::Composite(const std::string& name): Component(name) { }

void Composite::add(Component* child) {
    if (child) {
        _children.push_back(child);
    }
}

void Composite::remove(Component* child) {
    auto iter = std::find(_children.begin(), _children.end(), child);
    if (iter != _children.end()) {
        _children.erase(iter);
    }
}

std::vector<Component*> Composite::getChildren() const {
    return _children;
}

void Composite::execute() {
    std::cout << "Component " << _name << " execute()" << std::endl;
    for (auto& child : _children) {
        child->execute();
    }
}

Leaf::Leaf(const std::string& name): Component(name) { }

void Leaf::execute() {
    std::cout << "Leaf " << _name << " execute()" << std::endl;
}
