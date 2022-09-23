#pragma once
#include "library.h"

class Application: public Library {
public:
    Application() = default;

    ~Application() = default;

private:
    bool step2() override;

    void step4() override;
};