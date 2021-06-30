#include "FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap(100, 100, 100, 100, 30, 0, "")
{
    std::cout << "Default FragTrap constructor has been called.\n";
}

FragTrap::FragTrap(std::string newName):
ClapTrap(100, 100, 100, 100, 30, 0, newName)
{
    std::cout << "First Overloaded FragTrap constructor has been called.\n";
}

FragTrap::FragTrap(int type)
{
    std::cout << "Second Overloaded FrapTrap constructor has been called.\n";
    (void)type;
    hitPoints = 100;
    maxHitPoints = 100;
    attackDamage = 30;
    armorDamageReduction = 0;
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

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : High fives? *clap.. tchik.. clap.. clip.. clop*.\n";
}