#include "node.h"

void process(Node* node) {
    node->execute();
    auto children = node->getChildren();
    for (auto child : children) {
        process(child);
    }
}

int main() {
    Node root("root");
    Node mid("mid");
    Node leaf1("leaf1");
    Node leaf2("leaf2");
    Node leaf3("leaf3");

    root.add(&mid);
    root.add(&leaf3);
    mid.add(&leaf1);
    mid.add(&leaf2);

    process(&root);

    return 0;
}