#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default DiamondTrap constructor has been called.\n";
    Name = "";
    FragTrap(1);
    ScavTrap(1);
}

DiamondTrap::DiamondTrap(std::string newName)
{
    std::cout << "Overloaded DiamondTrap constructor has been called.\n";
    Name = newName;
    this->setName(Name);
    FragTrap(1);
    ScavTrap(1);
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
    std::cout << "Copy DiamondTrap constructor has been called.\n";
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
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

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor has been called.\n";
}

void DiamondTrap::getNameDiamond()
{
    std::cout << "My name is <" << Name << ">.\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is <" << Name << "> and my CL4P-TP name is <" << this->getName() << ">.\n";
}