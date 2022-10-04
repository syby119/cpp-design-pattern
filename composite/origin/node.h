#pragma once

#include <string>
#include <vector>

class Node {
public:
    Node(const std::string& name);

    void add(Node* node);
    void remove(Node* node);
    std::vector<Node*> getChildren() const;

    void execute();

private:
    std::string _name;
    std::vector<Node*> _children;
};