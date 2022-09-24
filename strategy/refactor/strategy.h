#pragma once

class Strategy {
public:
    virtual void execute() = 0;
};

class StrategyA: public Strategy {
public:
    void execute() override;
};

class StrategyB: public Strategy {
public:
    void execute() override;
};

class StrategyC: public Strategy {
public:
    void execute() override;
};