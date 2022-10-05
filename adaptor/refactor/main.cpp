#include <memory>
#include "adaptor.h"

int main() {
    auto target_interface = std::make_unique<Adaptor>();
    target_interface->process();  

    return 0;
}