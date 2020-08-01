#pragma once
#include<string>
#include<iostream>
#include<stdexcept>
#include<memory>

namespace kmj{
class password_generator{
public:
    virtual std::string generate() = 0;
    virtual std::string allowed_chars() const = 0;
    virtual size_t length() const = 0;
    virtual void add(std::unique_ptr<password_generator> generator) = 0;
    virtual ~password_generator() = default;
protected:
private:
};
}
