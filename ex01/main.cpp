#include "Span.hpp"

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::vector<int> vec;
        vec.push_back(7);
        vec.push_back(8);
        vec.push_back(20);
        vec.push_back(8);
        vec.push_back(8);
        vec.push_back(8);
        Span test(4);
        test.add_range(vec.begin(), vec.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span sp(100000);
        for (size_t i = 0; i < 100000; i++)
        {
            sp.addNumber(i);
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
