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
    _DogBrain = new Brain;
    *_DogBrain = *(copy._DogBrain);
}

Dog& Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        delete this->_DogBrain;
        _DogBrain = new Brain(*copy._DogBrain);
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