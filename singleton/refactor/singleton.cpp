#include <atomic>
#include <iostream>

#include "singleton.h"

#ifdef THREAD_SAFE
std::mutex Singleton::_mutex;
std::atomic<Singleton*> Singleton::_instance;
#else
Singleton* Singleton::_instance = nullptr;
#endif

Singleton::Singleton() {
    std::cout << "Singleton()" << std::endl;
}

Singleton* Singleton::getInstance() {
#ifdef THREAD_SAFE
    Singleton* handle = _instance.load(std::memory_order_acquire);
    if (handle == nullptr) {
        std::lock_guard<std::mutex> lock(_mutex);
        handle = _instance.load(std::memory_order_relaxed);
        if (handle == nullptr) {
            handle = new Singleton;
            _instance.store(handle, std::memory_order_release);
        }
    }

    return handle;
#else 
    if (_instance == nullptr) {
        _instance = new Singleton();
    }

    return _instance;
#endif
}