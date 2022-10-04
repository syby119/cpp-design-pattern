#pragma once
#include <string>

class Subject {
public:
    virtual ~Subject() = default;

    virtual std::string process(const std::string& request) = 0;
};

class Proxy: Subject {
public:
    std::string process(const std::string& request) override;

private:
    bool connect(const std::string& request);
    void sendRequest(const std::string& request);
    std::string getResponse();
    bool disconnect(const std::string& request);
};