#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "expression.h"

int main() {
    std::string str = "a + b - c + d";
    std::map<char, int> map;
    map.insert(std::make_pair('a', 5));
    map.insert(std::make_pair('b', 2));
    map.insert(std::make_pair('c', 1));
    map.insert(std::make_pair('d', 6));

    std::unique_ptr<Expression> expression { analyse(str) };
    int result = expression->interpret(map);

    std::cout << "  " << str << "\n";
    std::cout << "= " << map['a'] << " + " << map['b'] << " - " << map['c'] << " + " << map['d'] << "\n";
    std::cout << "= " << result << std::endl;

    return 0;
}