#pragma once

class Singleton {
public:
    Singleton();

    Singleton(const Singleton& rhs) = delete;

    Singleton& operator=(const Singleton& rhs) = delete;

    ~Singleton() = default;
};