#include <atomic>
#include <iostream>

#include "singleton.h"

Singleton* Singleton::_instance = nullptr;
#ifdef THREAD_SAFE
std::once_flag Singleton::_instanceCreated;
#endif

Singleton::Singleton() {
    std::cout << "Singleton()" << std::endl;
}

Singleton* Singleton::getInstance() {
#ifdef THREAD_SAFE
    std::call_once(
        _instanceCreated, 
        []() { _instance = new Singleton(); }
    );
#else 
    if (_instance == nullptr) {
        _instance = new Singleton();
    }
#endif

    return _instance;
}