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

class ComponentAC: public ComponentA {
public:
    ComponentAC() = default;

    virtual ~ComponentAC() = default;

    void execute() override;
private:
    void funC();
};

class ComponentAD: public ComponentA {
public:
    ComponentAD() = default;

    virtual ~ComponentAD() = default;

    void execute() override;
private:
    void funD();
};

class ComponentBC: public ComponentB {
public:
    ComponentBC() = default;

    virtual ~ComponentBC() = default;

    void execute() override;

private:
    void funC();
};

class ComponentBD: public ComponentB {
public:
    ComponentBD() = default;

    virtual ~ComponentBD() = default;

    void execute() override;
private:
    void funD();
};