#include <memory>
#include "product.h"

class Application {
public:
    Application() = default;
    ~Application() = default;

    void runA() {
        auto product = std::make_unique<ProductA>();
    }

    void runB() {
        auto product = std::make_unique<ProductB>();
    }
};

int main() {
    Application app;
    app.runA();
    app.runB();

    return 0;
}