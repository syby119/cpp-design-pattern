#pragma once

#define THREAD_SAFE

#ifdef THREAD_SAFE
#include <atomic>
#include <mutex>
#endif

class Singleton {
public:
    Singleton(const Singleton& rhs) = delete;

    Singleton& operator=(const Singleton& rhs) = delete;

    static Singleton* getInstance();

private:
    static Singleton* _instance;
#ifdef THREAD_SAFE
    static std::once_flag _instanceCreated;
#endif

    Singleton();
};