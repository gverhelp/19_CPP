#ifndef C_HPP
# define C_HPP

class C;

# include <iostream>
# include "Base.hpp"

class C: public Base
{
    public:
        C();
        C(C const &copy);
        C& operator=(C const &copy);
        virtual ~C();
};

#endif