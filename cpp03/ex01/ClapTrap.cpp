#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor has been called.\n";
    hitPoints = 0;
    maxHitPoints = 0;
    energyPoints = 0;
    maxEnergyPoints = 0;
    attackDamage = 0;
    armorDamageReduction = 0;
    Name = "";
}

ClapTrap::ClapTrap(std::string newName)
{
    std::cout << "First Overloaded ClapTrap constructor has been called.\n";
    hitPoints = 0;
    maxHitPoints = 0;
    energyPoints = 0;
    maxEnergyPoints = 0;
    attackDamage = 0;
    armorDamageReduction = 0;
    Name = newName;
}

ClapTrap::ClapTrap(int hitpoints, int maxhitspoints, int energypoint, int maxenergypoints, int attackdamage, int armordamagereduction, std::string newName)
{
    std::cout << "Second Overloaded ClapTrap constructor has been called.\n";
    hitPoints = hitpoints;
    maxHitPoints = maxhitspoints;
    energyPoints = energypoint;
    maxEnergyPoints = maxenergypoints;
    attackDamage = attackdamage;
    armorDamageReduction = armordamagereduction;
    Name = newName;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "ClapTrap copy constructor has been called.\n";
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor has been called.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
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

void ClapTrap::attack(std::string const & target)
{
    if ((energyPoints - 20) < 0)
        std::cout << "CL4P-TP <" << Name << "> n'a pas assez d'énergie pour attaquer.\n";
    else
    {
        energyPoints -= 20;
        std::cout << "CL4P-TP <" << Name << "> attaque <" << target << "> ce qui lui coute 20 points d'énergie et cause <" << attackDamage << "> points de dégâts !\n";
    }
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
    energyPoints += amount;
    if (energyPoints > maxEnergyPoints)
        energyPoints = maxEnergyPoints;
    std::cout << "CL4P-TP <" << Name << "> se fait heal de <" << amount << "> points de vie et récupère <" << amount << "> points d'énergie !\n";
}