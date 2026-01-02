#include "easyfind.hpp"
#include <iostream>


int main()
{
   try
   {
       std::vector<int> ab;
       ab.push_back(5);
       ab.push_back(8);
       ab.push_back(30);
       ab.push_back(59);

       std::vector<int>::iterator it = easyfind(ab, 5);
       std::cout << *it << std::endl;

       std::list<int> bs;
       bs.push_front(3);
       bs.push_front(6);
       bs.push_front(8);
       bs.push_front(9);
       

       std::list<int>::iterator it1 = easyfind(bs, 6);
       std::cout << *it1 << std::endl;
       return 0;
   }
   catch(const std::exception& e)
   {
    std::cerr << "not fond" << '\n';
   }
   
}
