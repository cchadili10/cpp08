# pragma once

#include <exception>
#include <algorithm>
#include <vector>
#include <list>

template <typename T> typename T::iterator easyfind(T &t, int num)
{
    typename T::iterator it = std::find(t.begin(), t.end(), num);
    if (it == t.end())
        throw std::exception();
    return it;
}