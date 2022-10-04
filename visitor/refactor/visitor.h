#pragma once

class ElementA;
class ElementB;

class Visitor {
public:
    virtual ~Visitor() = default;
    virtual void visit(ElementA& a) const = 0;
    virtual void visit(ElementB& b) const = 0;
};

class Visitor1: public Visitor {
public:
    void visit(ElementA& a) const override;
    void visit(ElementB& b) const override;
};

class Visitor2: public Visitor {
public:
    void visit(ElementA& a) const override;
    void visit(ElementB& b) const override;
};