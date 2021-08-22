#include "A.hpp"

A::A()
{
    std::cout << "A class has been created." << std::endl;
}

A::A(A const &copy)
{
    *this = copy;
}

A& A::operator=(A const &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

A::~A()
{
    std::cout << "A class has been destroyed." << std::endl;
}