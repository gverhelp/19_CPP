#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
FragTrap(1), ScavTrap(1)
{
    std::cout << "Default DiamondTrap constructor has been called.\n";
    Name = "";
}

DiamondTrap::DiamondTrap(std::string newName):
FragTrap(1), ScavTrap(1)
{
    std::cout << "Overloaded DiamondTrap constructor has been called.\n";
    Name = newName;
    this->setName(Name);
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy):
ClapTrap(copy), FragTrap(1), ScavTrap(1)
{
    std::cout << "Copy DiamondTrap constructor has been called.\n";
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
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