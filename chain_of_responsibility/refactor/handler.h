#pragma once
#include <string>

class Handler {
public:
    Handler();
    virtual ~Handler() = default;

    Handler* getNext() const;
    void setNext(Handler* handler);

    virtual void handle(const std::string& request) = 0;
protected:
    Handler* _next;
    virtual bool canHandle(const std::string& request) = 0;
};

class HandlerA: public Handler {
public:
    void handle(const std::string& request) override;
private:
    bool canHandle(const std::string& request) override;
};

class HandlerB: public Handler {
public:
    void handle(const std::string& request) override;
private:
    bool canHandle(const std::string& request) override;
};