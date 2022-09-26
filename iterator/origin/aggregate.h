#pragma once

template <typename T>
struct AggregateNode {
    AggregateNode(T value, AggregateNode<T>* prev, AggregateNode<T>* next)
        : value(value), prev(prev), next(next) { }
    T value;
    AggregateNode<T>* prev;
    AggregateNode<T>* next;
};

template <typename T>
class Aggregate {
public:
    using NodePtr = AggregateNode<T>*;
public:
    Aggregate(): head(new AggregateNode<T>(T(), nullptr, nullptr)) {
        head->prev = head;
        head->next = head;
    }

    Aggregate(const Aggregate& rhs): head(new AggregateNode<T>(T(), nullptr, nullptr)) {
        head->prev = head;
        head->next = head;

        for (NodePtr rNode = rhs.head; rNode != rhs.head; rNode = rNode->next) {
            push_back(rNode->value);
        }
    }

    ~Aggregate() {
        clear();
        delete head;
    }

    Aggregate& operator=(const Aggregate& rhs) {
        clear();
        for (NodePtr rNode = rhs.head; rNode != rhs.head; rNode = rNode->next) {
            push_back(rNode->value);
        }
    }

    void push_back(const T& value) {
        NodePtr node = new AggregateNode<T>(value, head->prev, head);
        head->prev->next = node;
        head->prev = node;
    }

    void clear() {
        NodePtr p = head->next;
        while (p != head) {
            NodePtr next = p->next;
            delete p;
            p = next;
        }
    }

public:
    NodePtr head;
};