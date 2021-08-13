#include "Cat.hpp"

Cat::Cat() :
Animal("Cat")
{
    std::cout << "Default Cat constructor has been called.\n";
}

Cat::Cat(Cat const &copy) :
Animal(copy)
{
    std::cout << "Copy Cat constructor has been called.\n";
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor Cat has been called.\n";
}

void Cat::makeSound() const
{
    std::cout << "Meoooowwww !\n";
}