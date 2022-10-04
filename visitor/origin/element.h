#pragma once

class Element {
public:
    virtual ~Element() = default;

    virtual void func1() = 0;
    virtual void func2() = 0;
};

class ElementA: public Element {
public:
    void func1() override;
    void func2() override;
};

class ElementB: public Element {
public:
    void func1() override;
    void func2() override;
};