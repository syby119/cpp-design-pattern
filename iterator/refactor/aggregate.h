#pragma once
#include <cassert>

template <typename T>
struct AggregateNode {
    AggregateNode(T value, AggregateNode* prev, AggregateNode* next)
        : value(value), prev(prev), next(next) { }
    T value;
    AggregateNode<T>* prev;
    AggregateNode<T>* next;
};


template <typename T>
class AggregateIterator {
public:
    using NodePtr = AggregateNode<T>*;
public:
    AggregateIterator(): _node(nullptr) { }

    AggregateIterator(NodePtr node): _node(node) { }

    AggregateIterator(const AggregateIterator& rhs): _node(_node) { }

    AggregateIterator operator=(const AggregateIterator& rhs) {
        _node = rhs._node;
    }

    ~AggregateIterator() = default;

    AggregateIterator& operator++() {
        assert(_node != nullptr);
        _node = _node->next;
        return *this;
    }

    AggregateIterator operator++(int) {
        assert(_node != nullptr);
        AggregateIterator temp = *this;
        _node = _node->next;
        return temp;
    }

    AggregateIterator& operator--() {
        assert(_node != nullptr);
        _node = _node->prev;
        return *this;
    }

    AggregateIterator operator--(int) {
        assert(_node != nullptr);
        AggregateIterator temp = *this;
        _node = _node->prev;
        return temp;
    }

    bool operator==(const AggregateIterator& rhs) {
        return _node == rhs._node;
    }

    bool operator!=(const AggregateIterator& rhs) {
        return _node != rhs._node;
    }

    T& operator*() {
        return _node->value;
    }

    T* operator->() {
        return &(_node->value);
    }

private:
    NodePtr _node;
};

template <typename T>
class Aggregate {
public:
    using NodePtr  = AggregateNode<T>*;
    using Iterator = AggregateIterator<T>;
public:
    Aggregate(): head(new AggregateNode<T>(T(), nullptr, nullptr)) {
        head->prev = head;
        head->next = head;
    }

    Aggregate(const Aggregate& rhs): head(new AggregateNode<T>(T(), nullptr, nullptr)) {
        head->prev = head;
        head->next = head;

        for (AggregateNode* rNode = rhs.head; rNode != rhs.head; rNode = rNode->next) {
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

    Iterator begin() {
        return Iterator(head->next);
    }

    Iterator end() {
        return Iterator(head);
    }

    void clear() {
        NodePtr p = head->next;
        while (p != head) {
            NodePtr next = p->next;
            delete p;
            p = next;
        }
    }

private:
    NodePtr head;
};