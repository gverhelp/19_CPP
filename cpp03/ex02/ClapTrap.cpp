#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor has been called.\n";
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "Copy ClapTrap constructor has been called.\n";
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor has been called.\n";
}

void ClapTrap::getHitPoints() const
{
    if (hitPoints <= 0)
        std::cout << "CL4P-TP <" << Name << "> ne possède plus de points de vie. Sadge.\n";
    else
        std::cout << "CL4P-TP <" << Name << "> possède <" << hitPoints << "> points de vie !\n";
}

void ClapTrap::getEnergyPoints() const
{
    std::cout << "CL4P-TP <" << Name << "> possède <" << energyPoints << "> points d'énergie !\n";
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "CL4P-TP <" << Name << "> attaque <" << target << "> à distance, causant <" << rangedAttackDamage << "> points de dégâts !\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "CL4P-TP <" << Name << "> attaque <" << target << "> en mélée, causant <" << meleeAttackDamage << "> points de dégâts !\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int damageTook;

    damageTook = amount - armorDamageReduction;
    if (damageTook < 0)
        damageTook = 0;
    hitPoints -= damageTook;
    std::cout << "CL4P-TP <" << Name << "> se fait attaquer et prend <" << damageTook << "> points de dégâts !\n";
    if (hitPoints <= 0)
        hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    if (hitPoints > maxHitPoints)
        hitPoints = maxHitPoints;
    std::cout << "CL4P-TP <" << Name << "> se fait heal de <" << amount << "> points de vie !\n";
}