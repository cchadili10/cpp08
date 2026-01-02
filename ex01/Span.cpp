#include "Span.hpp"


Span::Span(unsigned int num) : size(num) {}
Span::Span(const Span &other) : arr(other.arr), size(other.size) {}
Span &Span::operator=(const Span &other)
{
    if(this != &other)
    {
        arr = other.arr;
        size = other.size;
    }
    return *this;
}

void Span::addNumber(int num)
{
    if(arr.size() < size)
        arr.push_back(num);
    else
        throw std::runtime_error("span  is full");
}

int Span::longestSpan() const
{
    if(arr.size() <= 1)
        throw std::runtime_error("span not have longestSpan");
    std::vector<int>::const_iterator max = std::max_element(arr.begin(), arr.end());
    std::vector<int>::const_iterator min = std::min_element(arr.begin(), arr.end());
    return( *max - *min);
}

int Span::shortestSpan() const
{
    if(arr.size() <= 1)
        throw std::runtime_error("span not have shortestSpan");
    std::vector<int> sort_ = arr;
    int value = INT_MAX;
    std::sort(sort_.begin(), sort_.end());
    for (size_t i = 0; i < sort_.size() - 1; i++)
    {
        value = std::min(value, sort_.at(i + 1) - sort_.at(i));
    }
    return value;
}

Span::~Span(){}