#pragma once

#include <memory>
#include "subsystem.h"

class Facade {
public:
    Facade();
    
    void callA();
    void callB();
private:
    std::unique_ptr<Subsystem1> _system1;
    std::unique_ptr<Subsystem2> _system2;
    std::unique_ptr<Subsystem3> _system3;
};