#include <memory>
#include "factory.h"
#include "product.h"

class Application {
public:
    Application(Factory* factory): _factory(factory) { }

    ~Application() = default;

    void setFactory(Factory* factory) {
        _factory = factory;
    }

    void run() {
        auto product = _factory->createProduct();
    }
private:
    Factory* _factory;
};

int main() {
    std::unique_ptr<Factory> factory;
    
    factory.reset(new FactoryA);
    Application app(factory.get());
    app.run();
    
    factory.reset(new FactoryB);
    app.setFactory(factory.get());
    app.run();

    return 0;
}