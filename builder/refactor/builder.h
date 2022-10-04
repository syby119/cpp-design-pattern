#pragma once
#include "product.h"

class Builder {
public:
    virtual void buildStep1() = 0;
    virtual void buildStep2() = 0;
    virtual void buildStep3() = 0;
    virtual void buildStep4() = 0;

    Product* getProduct();

protected:
    Product* _product;
};

class BuilderA: public Builder {
    void buildStep1() override;
    void buildStep2() override;
    void buildStep3() override;
    void buildStep4() override;
};

class BuilderB: public Builder {
    void buildStep1() override;
    void buildStep2() override;
    void buildStep3() override;
    void buildStep4() override;
};