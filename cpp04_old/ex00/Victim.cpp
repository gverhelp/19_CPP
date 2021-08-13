#include "Victim.hpp"

Victim::Victim()
{
    std::cout << "Default Victim constructor has been called.\n";
}

Victim::Victim(std::string newName)
{
    _Name = newName;
    std::cout << "Some random victim called " << _Name << " just appeared!\n";
}

Victim::Victim(Victim const & copy)
{
    std::cout << "Copy Victim constructor has been called.\n";
    *this = copy;
}

Victim& Victim::operator=(const Victim &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
    }
    return (*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << _Name << " just died for no apparent reason!\n";
}

void Victim::introduce() const
{
    std::cout << "I'm " << _Name << " and I like otters!\n";
}

void Victim::getPolymorphed() const
{
    std::cout << _Name << " has been turned into a cute little sheep!\n";
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
    rhs.introduce();
    return (o);
}