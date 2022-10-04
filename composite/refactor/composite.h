#pragma once

#include <string>
#include <vector>

class Component {
public:
    Component(const std::string& name);

    virtual ~Component() = default;

    virtual void execute() = 0;

protected:
    std::string _name;
};

class Composite: public Component {
public:
    Composite(const std::string& name);

    void add(Component* child);
    void remove(Component* child);
    std::vector<Component*> getChildren() const;

    void execute() override;

private:
    std::vector<Component*> _children;
};

class Leaf: public Component {
public:
    Leaf(const std::string& name);

    void execute() override;
};