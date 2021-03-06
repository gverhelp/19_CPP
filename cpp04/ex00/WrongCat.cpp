#include "WrongCat.hpp"

WrongCat::WrongCat() :
WrongAnimal("Wrong Cat")
{
    std::cout << "Default WrongCat constructor has been called.\n";
}

WrongCat::WrongCat(WrongCat const &copy) :
WrongAnimal(copy)
{
    std::cout << "Copy WrongCat constructor has been called.\n";
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
    {
       WrongAnimal::operator=(copy);
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat has been called.\n";
}

void WrongCat::makeSound() const
{
    std::cout << "MeaWOOF MeaWOOF.\n";
}