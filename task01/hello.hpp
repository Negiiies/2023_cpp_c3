#ifndef HELLO_HPP_
#define HELLO_HPP_

#include "Language.hpp"
#include <iostream>
#include <string>
#include <vector>

void hello(std::string name);
void hello(std::string name, Language lang);
void hello(Language lang);

#endif /* HELLO_HPP_ */