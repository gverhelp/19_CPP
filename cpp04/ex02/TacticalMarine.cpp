#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
    std::cout << "Tactical Marine ready for battle!\n";
    *this = copy;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh...\n";
}

ISpaceMarine* TacticalMarine::clone() const
{
    return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *\n";
}