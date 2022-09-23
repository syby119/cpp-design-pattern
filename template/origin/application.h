#pragma once
#include "library.h"

class Application: public Library {
public:
    Application() = default;

    ~Application() = default;

    void run();

private:
    bool step2();

    void step4();
};