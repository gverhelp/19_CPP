#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
    std::cout << "* teleports from space *\n";
    *this = copy;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back...\n";
}

ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator());
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}