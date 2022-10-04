#include "composite.h"

int main() {
    Composite root("root");
    Composite mid("mid");
    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");
    Leaf leaf3("leaf3");

    root.add(&mid);
    root.add(&leaf3);
    mid.add(&leaf1);
    mid.add(&leaf2);

    root.execute();

    return 0;
}