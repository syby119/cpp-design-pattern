#include <iostream>
#include "aggregate.h"

int main() {
    Aggregate<int> aggregate;
    for (int i = 0; i < 10; ++i) {
        aggregate.push_back(i * 2);
    }

    for (auto it = aggregate.begin(); it != aggregate.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}