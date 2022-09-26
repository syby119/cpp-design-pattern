#include <iostream>
#include "aggregate.h"

int main() {
    Aggregate<int> aggregate;
    for (int i = 0; i < 10; ++i) {
        aggregate.push_back(i * 2);
    }

    auto p = aggregate.head->next;
    Aggregate<int>::NodePtr node = aggregate.head->next;
    while (node != aggregate.head) {
        std::cout << node->value << std::endl;
        node = node->next;
    }

    return 0;
}