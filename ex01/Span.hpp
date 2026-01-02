#pragma once
#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>
#include <limits.h>

class Span
{
    private:
        std::vector<int>arr;
        unsigned int size;
    public:
        Span(unsigned int num);
        Span(const Span &other);
        Span &operator = (const Span &other);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        template <typename T>
        void add_range(T begin, T end)
        {
            size_t count = std::distance(begin , end);
            if(arr.size() + count > size)
                throw std::runtime_error("not enough space in span");
            arr.insert(arr.end(), begin, end);
            
        }
        ~Span();
};



