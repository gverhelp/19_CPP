#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constructor has been called.\n";
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage = 15;
    armorDamageReduction = 3;
    Name = "";
}

ScavTrap::ScavTrap(std::string newName)
{
    std::cout << "Overloaded ScavTrap constructor has been called.\n";
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage = 15;
    armorDamageReduction = 3;
    Name = newName;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    std::cout << "Copy ScavTrap constructor has been called.\n";
    *this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & copy)
{
    if (this != &copy)
    {
        hitPoints = copy.hitPoints;
        maxHitPoints = copy.maxHitPoints;
        energyPoints = copy.energyPoints;
        maxEnergyPoints = copy.maxEnergyPoints;
        level = copy.level;
        meleeAttackDamage = copy.meleeAttackDamage;
        rangedAttackDamage = copy.rangedAttackDamage;
        armorDamageReduction = copy.armorDamageReduction;
        Name = copy.Name;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor has been called.\n";
}

std::string ScavTrap::getName() const
{
    return (Name);
}

void ScavTrap::challengeNewcomer()
{
    int randomChall;
    std::string challenges[5] = {"Have to eat yaourt until the end of your life", "Have to play only Seraphine in ranked",
        "Have to do a tiktok dance", "Have not to use fan all summer long", "Have to pee in your drawer all your life long"};

    srand(time(NULL));
    randomChall = rand() % 5;
    std::cout << "SC4V-TP <" << Name << "> te confronte à un challenge. Ce dernier est le suivant : " << challenges[randomChall] << "\nBonne chance à toi...\n";
}