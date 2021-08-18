#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Default Cure constructor has been called.\n";
}

Cure::Cure(Cure const &copy) :
AMateria(copy)
{
    std::cout << "Copy Cure constructor has been called.\n";
    *this = copy;
}

Cure& Cure::operator=(const Cure &copy)
{
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Destructor Cure has been called.\n";
}

AMateria* Cure::clone () const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "*heals " << target.getName() << "'s wounds*\n";
}