#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size = " <<  mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }


    std::cout << std::endl;
    const MutantStack<int> mb(mstack);
    MutantStack<int>::const_iterator it1 = mb.begin();
    MutantStack<int>::const_iterator ite1 = mb.end();
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }

    std::cout << std::endl;
    const MutantStack<int> mr(mstack);
    MutantStack<int>::const_reverse_iterator it2 = mr.rbegin();
    MutantStack<int>::const_reverse_iterator ite2 = mr.rend();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    
    return 0;
}