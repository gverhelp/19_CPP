#include "FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap(100, 100, 100, 100, 30, 0, "")
{
    std::cout << "Default FragTrap constructor has been called.\n";
}

FragTrap::FragTrap(std::string newName):
ClapTrap(100, 100, 100, 100, 30, 0, newName)
{
    std::cout << "Overloaded FragTrap constructor has been called.\n";
}

FragTrap::FragTrap(FragTrap const & copy):
ClapTrap(copy)
{
    std::cout << "Copy FragTrap constructor has been called.\n";
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called.\n";
}

void FragTrap::attack(std::string const & target)
{
    if ((energyPoints - 20) < 0)
        std::cout << "FR4G-TP <" << Name << "> n'a pas assez d'énergie pour attaquer.\n";
    else
    {
        energyPoints -= 20;
        std::cout << "FR4G-TP <" << Name << "> attaque <" << target << "> ce qui lui coute 20 points d'énergie et cause <" << attackDamage << "> points de dégâts !\n";
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : High fives? *clap.. tchik.. clap.. clip.. clop*.\n";
}