#pragma once
#include <string>

class Handler {
public:
    virtual ~Handler() = default;
    virtual bool canHandle(const std::string& request) = 0;
    virtual void handle(const std::string& request) = 0;
};

class HandlerA: public Handler {
public:
    bool canHandle(const std::string& request) override;
    void handle(const std::string& request) override;
};

class HandlerB: public Handler {
public:
    bool canHandle(const std::string& request) override;
    void handle(const std::string& request) override;
};