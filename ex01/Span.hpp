#pragma once
#include<vector>
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
            T it = begin;
            while (it != end)
            {
                addNumber(*it);
                it++;
            }
        }
        ~Span();
};



