#include "visitor.h"
#include "element.h"

void ElementA::accept(const Visitor& visitor) {
    visitor.visit(*this);
}

void ElementB::accept(const Visitor& visitor) {
    visitor.visit(*this);
}