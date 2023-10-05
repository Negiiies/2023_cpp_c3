#ifndef MIN_HPP_
#define MIN_HPP_

template <typename el1, typename el2>
auto min(el1 min1, el2 min2)
{
    if (min1 <= min2) {
        return min1;
    } else {
        return min2;
    }
}

#endif /* MIN_HPP_ */