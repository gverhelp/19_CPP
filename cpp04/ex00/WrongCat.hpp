#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & copy);
        WrongCat& operator=(const WrongCat &copy);
        virtual ~WrongCat();

        /*virtual*/ void makeSound() const;
};

#endif