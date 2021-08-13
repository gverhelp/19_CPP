#include "Dog.hpp"

Dog::Dog() :
Animal("Dog")
{
    std::cout << "Default Dog constructor has been called.\n";
}

Dog::Dog(Dog const &copy) :
Animal(copy)
{
    std::cout << "Copy Dog constructor has been called.\n";
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog has been called.\n";
}

void Dog::makeSound() const
{
    std::cout << "Woof woof !\n";
}