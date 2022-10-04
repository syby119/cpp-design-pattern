#include <algorithm>
#include <iostream>
#include "node.h"

Node::Node(const std::string& name): _name(name) { }

void Node::add(Node* child) {
    if (child) {
        _children.push_back(child);
    }
}

void Node::remove(Node* child) {
    auto iter = std::find(_children.begin(), _children.end(), child);
    if (iter != _children.end()) {
        _children.erase(iter);
    }
}

std::vector<Node*> Node::getChildren() const {
    return _children;
}

void Node::execute() {
    std::cout << "Node " << _name << " execute()" << std::endl;
}