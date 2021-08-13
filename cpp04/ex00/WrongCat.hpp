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

        std::string const getType() const;
        void makeSound() const;

    protected :
        std::string _Type;
};

#endif