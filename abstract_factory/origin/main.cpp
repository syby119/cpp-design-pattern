#include <memory>
#include "product.h"

class Application {
public:
    Application() = default;
    ~Application() = default;

    void run1() {
        std::unique_ptr<Product1> product1 { new Product1A };
        std::unique_ptr<Product2> product2 { new Product2C };
    }

    void run2() {
        std::unique_ptr<Product1> product1 { new Product1B };
        std::unique_ptr<Product2> product2 { new Product2D };
    }
};

int main() {
    Application app;
    app.run1();
    app.run2();

    return 0;
}