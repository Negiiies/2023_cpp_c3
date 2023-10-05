#include <algorithm>
#include <string>
#include "add_and_print.hpp"

int main(void)
{
    add_and_print(1, 2);
    add_and_print(std::string{"hello "}, std::string{"world"});
}