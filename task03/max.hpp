#ifndef MAX_HPP_
#define MAX_HPP_

#include <iostream>

template <typename el1, typename el2>
auto max(el1 max1, el2 max2)
{
    if (max1 >= max2) {
        return max1;
    } else {
        return max2;
    }
}
#endif /* MAX_HPP_ */