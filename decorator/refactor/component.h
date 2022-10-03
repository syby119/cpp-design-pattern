#pragma once

class Component {
public:
    Component() = default;

    virtual ~Component() = default;

    virtual void execute() = 0;
};

class ComponentA: public Component {
public:
    ComponentA() = default;

    virtual ~ComponentA() = default;

    void execute() override;
};

class ComponentB: public Component {
public:
    ComponentB() = default;

    virtual ~ComponentB() = default;

    void execute() override;
};