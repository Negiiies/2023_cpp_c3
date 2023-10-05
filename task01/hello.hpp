#ifndef HELLO_HPP_
#define HELLO_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "Language.hpp"

void hello(std::string name);
void hello(std::string name, Language lang);
void hello(Language lang);

#endif /* HELLO_HPP_ */