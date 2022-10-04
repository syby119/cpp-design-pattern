#include <memory>
#include <vector>
#include "element.h"

int main() {
    std::vector<std::unique_ptr<Element>> elements;
    elements.emplace_back(std::make_unique<ElementA>());
    elements.emplace_back(std::make_unique<ElementB>());

    for (auto &element : elements) {
        element->func1();
    }

    for (auto &element : elements) {
        element->func2();
    }

    return 0;
}