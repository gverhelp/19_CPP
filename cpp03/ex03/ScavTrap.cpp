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
    if ((energyPoints - 20) < 0)
        std::cout << "SC4V-TP <" << Name << "> n'a pas assez d'énergie pour attaquer.\n";
    else
    {
        energyPoints -= 20;
        std::cout << "SC4V-TP <" << Name << "> attaque <" << target << "> ce qui lui coute 20 points d'énergie et cause <" << attackDamage << "> points de dégâts !\n";
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
}