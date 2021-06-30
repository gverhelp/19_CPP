#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
ClapTrap(100, 100, 50, 50, 20, 0, "")
{
    std::cout << "Default ScavTrap constructor has been called.\n";
}

ScavTrap::ScavTrap(std::string newName):
ClapTrap(100, 100, 50, 50, 20, 0, newName)
{
    std::cout << "Overloaded ScavTrap constructor has been called.\n";
}

ScavTrap::ScavTrap(ScavTrap const & copy):
ClapTrap(copy)
{
    std::cout << "Copy ScavTrap constructor has been called.\n";
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor has been called.\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
}