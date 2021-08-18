#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const & copy);
        Cat& operator=(const Cat &copy);
        virtual ~Cat();

        virtual void makeSound() const;
};

#endif