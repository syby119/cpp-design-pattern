#include <memory>
#include "product.h"
#include "abstract_factory.h"

class Application {
public:
    Application(AbstractFactory* factory): _factory(factory) { }
    
    ~Application() = default;

    void setAbstractFactory(AbstractFactory* factory) {
        _factory = factory;
    }

    void run() {
        std::unique_ptr<Product1> product1 { _factory->createProduct1() };
        std::unique_ptr<Product2> product2 { _factory->createProduct2() };
    }
private:
    AbstractFactory* _factory;
};

int main() {
    std::unique_ptr<AbstractFactory> factory;

    factory.reset(new ConcreteFactory1);
    Application app(factory.get());
    app.run();

    factory.reset(new ConcreteFactory2);
    app.setAbstractFactory(factory.get());
    app.run();

    return 0;
}