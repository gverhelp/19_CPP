#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor has been called.\n";
    _Type = "";
}

WrongAnimal::WrongAnimal(std::string newType)
{
    std::cout << "Overloaded WrongAnimal constructor has been called.\n";
    _Type = newType;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "Copy WrongAnimal constructor has been called.\n";
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
    {
        _Type = copy._Type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal has been called.\n";
}

std::string const WrongAnimal::getType() const
{
    return (_Type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "What is this animal??\n";
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & rhs)
{
    std::cout << rhs.getType() << std::endl;
    return (o);
}