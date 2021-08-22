#ifndef BASE_HPP
# define BASE_HPP

class Base;

#include <iostream>

class Base
{
    public:
        virtual ~Base() { std::cout << "Base class has been destroyed." << std::endl; }
};

#endif