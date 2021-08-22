#ifndef B_HPP
# define B_HPP

class B;

# include <iostream>
# include "Base.hpp"

class B: public Base
{
    public:
        B();
        B(B const &copy);
        B& operator=(B const &copy);
        virtual ~B();
};

#endif