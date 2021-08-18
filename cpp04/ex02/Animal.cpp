#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor has been called.\n";
    _Type = "";
}

Animal::Animal(std::string newType)
{
    std::cout << "Overloaded Animal constructor has been called.\n";
    _Type = newType;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Copy Animal constructor has been called.\n";
    *this = copy;
}

Animal& Animal::operator=(const Animal &copy)
{
    if (this != &copy)
    {
        _Type = copy._Type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor Animal has been called.\n";
}

std::string const Animal::getType() const
{
    return (_Type);
}

std::ostream & operator<<(std::ostream & o, Animal const & rhs)
{
    std::cout << rhs.getType() << std::endl;
    return (o);
}