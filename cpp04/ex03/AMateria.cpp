#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AMateria constructor has been called." << std::endl;
}

AMateria::AMateria(std::string const & type) : _Type(type)
{
    std::cout << "Overloaded AMateria constructor has been called." << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
    std::cout << "Copy AMateria constructor has been called." << std::endl;
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
    {
        _Type = copy._Type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor AMateria has been called." << std::endl;
}

std::string const & AMateria::getType() const
{
    return (_Type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}