#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Default Ice constructor has been called.\n";
}

Ice::Ice(Ice const &copy) :
AMateria(copy)
{
    std::cout << "Copy Ice constructor has been called.\n";
    *this = copy;
}

Ice& Ice::operator=(const Ice &copy)
{
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Destructor Ice has been called.\n";
}

AMateria* Ice::clone () const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "*shoots an ice bolt at " << target.getName() << "*\n";
}