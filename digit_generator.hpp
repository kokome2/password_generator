#pragma once
#include"basic_password_generator.hpp"

namespace kmj{

class digit_generator : public basic_password_generator{

public:
    explicit digit_generator(size_t const len) noexcept : basic_password_generator(len){}
    virtual std::string allowed_chars() const override{
        return "0123456789";
    }
protected:
private:
};

class symbol_generator : public basic_password_generator{
public:
    explicit symbol_generator(size_t const len) noexcept : basic_password_generator(len){}
    virtual std::string allowed_chars() const override{
        return "!@#$%^&*(){}[]?<>";
    }
protected:
private:
};

class upper_letter_generator : public basic_password_generator{
public:
    explicit upper_letter_generator(size_t const len) noexcept : basic_password_generator(len){}
    virtual std::string allowed_chars() const override{
        return "ABCDEFGHIJKLMNOPQRSTUVXYWZ";
    }
protected:
private:
};

class lower_letter_generator : public basic_password_generator{
public:
    explicit lower_letter_generator(size_t const len) noexcept : basic_password_generator(len){}
    virtual std::string allowed_chars() const override{
        return "abcdefghijklmnopqrstuvxwz";
    }
protected:
private:
};
}