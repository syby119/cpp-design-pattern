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
#ifdef THREAD_SAFE
    static std::atomic<Singleton*> _instance;
    static std::mutex _mutex;
#else
    static Singleton* _instance;
#endif

    Singleton();
};