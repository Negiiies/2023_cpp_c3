#ifndef ADD_AND_PRINT_HPP_
#define ADD_AND_PRINT_HPP_

#include <iostream>
#include <string>
#include <vector>

template <typename el1, typename el2>
auto add_and_print(el1 a, el2 b)
{
    std::cout << a + b << std::endl;
    return a + b;
}

#endif /* ADD_AND_PRINTS_HPP_ */