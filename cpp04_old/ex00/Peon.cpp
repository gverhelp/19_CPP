#include "Peon.hpp"

Peon::Peon()
{
    std::cout << "Default Peon constructor has been called.\n";
}

Peon::Peon(std::string newName):
Victim(newName)
{
    std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const &copy)
{
    std::cout << "Copy Peon constructor has been called.\n";
    *this = copy;
}

Peon& Peon::operator=(const Peon &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
    }
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const
{
    std::cout << _Name << " has been turned into a pink pony!\n";
}
