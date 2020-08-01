#pragma once
#include"password_generator.hpp"

namespace kmj{
class basic_password_generator : public password_generator{
public:
    explicit basic_password_generator(size_t const len) noexcept : len(len){}
    virtual std::string generate() override{
        throw std::runtime_error("not implemented");
    }
    virtual void add(std::unique_ptr<password_generator>) override{
        throw std::runtime_error("not implemented");
    }
    virtual size_t length() const noexcept override final{
        return len;
    }
protected:
private:
    size_t len; 


};
}