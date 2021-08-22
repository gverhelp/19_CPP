#ifndef A_HPP
# define A_HPP

class A;

# include <iostream>
# include "Base.hpp"

class A: public Base
{
    public:
        A();
        A(A const &copy);
        A& operator=(A const &copy);
        virtual ~A();
};

#endif