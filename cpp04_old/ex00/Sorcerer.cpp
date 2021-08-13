#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    std::cout << "Default Sorcerer constructor has been called.\n";
}

Sorcerer::Sorcerer(std::string newName, std::string newTitle)
{
    _Name = newName;
    _Title = newTitle;
    std::cout << _Name << ", " << _Title << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
    std::cout << "Copy Sorcerer constructor has been called.\n";
    *this = copy;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
        _Title = copy._Title;
    }
    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << _Name << ", " << _Title << ", is dead. Consequences will never be the same!\n";
}

void Sorcerer::introduce() const
{
    std::cout << "I'm " << _Name << ", " << _Title << ", and I like ponies!\n";
}

void Sorcerer::polymorph(Victim const &copy) const
{
    copy.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    rhs.introduce();
    return (o);
}