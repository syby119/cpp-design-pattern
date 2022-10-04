#pragma once

class Visitor;

class Element {
public:
    virtual ~Element() = default;
    virtual void accept(const Visitor& visitor) = 0;
};

class ElementA: public Element {
public:
    void accept(const Visitor& visitor) override;
};

class ElementB: public Element {
public:
    void accept(const Visitor& visitor) override;
};