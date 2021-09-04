#include "Dog.hpp"

Dog::Dog() :
Animal("Dog")
{
    std::cout << "Default Dog constructor has been called.\n";
    _DogBrain = new Brain();
}

Dog::Dog(Dog const &copy) :
Animal(copy)
{
    std::cout << "Copy Dog constructor has been called.\n";
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy)
{
    std::cout << "Assignation Dog operator has been called.\n";
    if (this != &copy)
    {
        delete this->_DogBrain;
        _DogBrain = new Brain(*copy._DogBrain);
        Animal::operator=(copy);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog has been called.\n";
    delete _DogBrain;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof !\n";
}