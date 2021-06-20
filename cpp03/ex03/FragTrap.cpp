#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor has been called.\n";
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage = 20;
    armorDamageReduction = 5;
    Name = "";
}

FragTrap::FragTrap(std::string newName)
{
    std::cout << "Overloaded FrapTrap constructor has been called.\n";
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage = 20;
    armorDamageReduction = 5;
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
        level = copy.level;
        meleeAttackDamage = copy.meleeAttackDamage;
        rangedAttackDamage = copy.rangedAttackDamage;
        armorDamageReduction = copy.armorDamageReduction;
        Name = copy.Name;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called.\n";
}

std::string FragTrap::getName() const
{
    return (Name);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int randomAttack;
    std::string attacks[5] = {"Reaping slash", "Blade reach", "Shadow step", "Umbral trespass", "Darkin scythe"};

    srand(time(NULL));
    randomAttack = rand() % 5;
    energyPoints -= 25;
    if (energyPoints< 0)
    {
        std::cout << "FR4G-TP <" << Name << "> n'a plus assez d'énergie pour attaquer !\n";
        energyPoints = 0;
    }
    else
        std::cout << "FR4G-TP <" << Name << "> utilise l'attaque <" << attacks[randomAttack] << "> sur <" << target << ">, ce qui lui coute 25 points d'énergie !\n";
}