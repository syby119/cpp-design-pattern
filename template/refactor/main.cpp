#include <memory>
#include "application.h"

int main() {
    auto app = std::make_unique<Application>();
    app->run();

    return 0;
}