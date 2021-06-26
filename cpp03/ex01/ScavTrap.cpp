#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
ClapTrap(100, 100, 50, 50, 20, 0)
{
    std::cout << "Default ScavTrap constructor has been called.\n";
    Name = "";
}

ScavTrap::ScavTrap(std::string newName):
ClapTrap(100, 100, 50, 50, 20, 0)
{
    std::cout << "Overloaded ScavTrap constructor has been called.\n";
    Name = newName;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    std::cout << "Copy ScavTrap constructor has been called.\n";
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        hitPoints = copy.hitPoints;
        maxHitPoints = copy.maxHitPoints;
        energyPoints = copy.energyPoints;
        maxEnergyPoints = copy.maxEnergyPoints;
        attackDamage = copy.attackDamage;
        armorDamageReduction = copy.armorDamageReduction;
        Name = copy.Name;
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