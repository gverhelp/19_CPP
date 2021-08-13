#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string newType);
        Animal(Animal const & copy);
        Animal& operator=(const Animal &copy);
        virtual ~Animal();

        std::string const getType() const;
        virtual void makeSound() const;

    protected :
        std::string _Type;
};

std::ostream & operator<<(std::ostream & o, Animal const & rhs);

#endif