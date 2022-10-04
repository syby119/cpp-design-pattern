#include <memory>
#include <vector>
#include "element.h"
#include "visitor.h"

int main() {
    std::vector<std::unique_ptr<Visitor>> visitors;
    visitors.emplace_back(std::make_unique<Visitor1>());
    visitors.emplace_back(std::make_unique<Visitor2>());

    std::vector<std::unique_ptr<Element>> elements;
    elements.emplace_back(std::make_unique<ElementA>());
    elements.emplace_back(std::make_unique<ElementB>());

    for (auto& visitor : visitors) {
        for (auto& element : elements) {
            element->accept(*visitor);
        }
    }

    return 0;
}