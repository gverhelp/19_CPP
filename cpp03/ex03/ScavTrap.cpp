#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
ClapTrap(100, 100, 50, 50, 20, 0, "")
{
    std::cout << "Default ScavTrap constructor has been called.\n";
    Name = "";
}

ScavTrap::ScavTrap(std::string newName):
ClapTrap(100, 100, 50, 50, 20, 0, newName)
{
    std::cout << "First Overloaded ScavTrap constructor has been called.\n";
}

ScavTrap::ScavTrap(int type)
{
    std::cout << "Second Overloaded ScavTrap constructor has been called.\n";
    (void)type;
    energyPoints = 50;
    maxEnergyPoints = 50;
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

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap::attack method called.\n";
    this->attackk(target);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
}