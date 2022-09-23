#pragma once

class Library {
public:
    Library() = default;

    virtual ~Library() = default;
    
    void run();
    
protected:
    void step1();

    void step3();

    void step5();

    virtual bool step2();

    virtual void step4();
};