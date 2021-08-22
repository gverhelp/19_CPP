#include "B.hpp"

B::B()
{
    std::cout << "B class has been created." << std::endl;
}

B::B(B const &copy)
{
    *this = copy;
}

B& B::operator=(B const &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

B::~B()
{
    std::cout << "B class has been destroyed." << std::endl;
}