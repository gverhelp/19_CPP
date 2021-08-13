#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & copy);
        Dog& operator=(const Dog &copy);
        virtual ~Dog();

        void makeSound() const;

    private:
        Brain *_DogBrain;
};

#endif