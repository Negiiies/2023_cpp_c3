#include "hello.hpp"
#include <iostream>

void hello()
{
    std::cout << "Hello stranger!\n";
}

void hello(std::string name)
{
    std::cout << "Hello " << name << "!\n";
}