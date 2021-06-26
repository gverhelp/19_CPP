#include "FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap(100, 100, 100, 100, 30, 0)
{
    std::cout << "Default FragTrap constructor has been called.\n";
    Name = "";
}

FragTrap::FragTrap(std::string newName):
ClapTrap(100, 100, 100, 100, 30, 0)
{
    std::cout << "Overloaded FragTrap constructor has been called.\n";
    Name = newName;
}

FragTrap::FragTrap(FragTrap const & copy)
{
    std::cout << "Copy FragTrap constructor has been called.\n";
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called.\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FraTrap : High fives? *clap.. tchik.. clap.. clip.. clop*.\n";
}