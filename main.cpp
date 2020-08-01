#include<iostream>
#include"password_generator.hpp"
#include"basic_password_generator.hpp"
#include"digit_generator.hpp"
#include"composite_password_generator.hpp"


using namespace std;
using namespace kmj;

int main(int argc, char* argv[]){

    composite_password_generator generator;

    generator.add(std::make_unique<symbol_generator>(2));
    generator.add(std::make_unique<digit_generator>(2));
    generator.add(std::make_unique<upper_letter_generator>(2));
    generator.add(std::make_unique<lower_letter_generator>(2));

    auto password = generator.generate();
    std::cout<<password<<std::endl;

    return 0;
}

