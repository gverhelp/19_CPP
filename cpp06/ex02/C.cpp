#include "C.hpp"

C::C()
{
    std::cout << "C class has been created." << std::endl;
}

C::C(C const &copy)
{
    *this = copy;
}

C& C::operator=(C const &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

C::~C()
{
    std::cout << "C class has been destroyed." << std::endl;
}