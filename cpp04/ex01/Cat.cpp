#include "Cat.hpp"

Cat::Cat() :
Animal("Cat")
{
    std::cout << "Default Cat constructor has been called.\n";
    _CatBrain = new Brain();
}

Cat::Cat(Cat const &copy) :
Animal(copy)
{
    std::cout << "Copy Cat constructor has been called.\n";
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
    std::cout << "Assignation Cat operator has been called.\n";
    if (this != &copy)
    {
        delete this->_CatBrain;
        _CatBrain = new Brain(*copy._CatBrain);
        Animal::operator=(copy);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor Cat has been called.\n";
    delete _CatBrain;
}

void Cat::makeSound() const
{
    std::cout << "Meoooowwww !\n";
}