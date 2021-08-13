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
    _CatBrain = new Brain;
    *_CatBrain = *(copy._CatBrain);
}

Cat& Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        delete this->_CatBrain;
        _CatBrain = new Brain(*copy._CatBrain);
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