#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor has been called.\n";
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
    std::cout << "SC4V-TP <" << newName << "> has been created!\n";
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
    std::cout << "SC4V-TP <" << Name << "> has been destroyed!\n";
}

void ScavTrap::getHitPoints() const
{
    if (hitPoints <= 0)
        std::cout << "SC4V-TP <" << Name << "> ne possède plus de points de vie. Sadge.\n";
    else
        std::cout << "SC4V-TP <" << Name << "> possède <" << hitPoints << "> points de vie !\n";
}

void ScavTrap::getEnergyPoints() const
{
    std::cout << "SC4V-TP <" << Name << "> possède <" << energyPoints << "> points d'énergie !\n";
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << Name << "> attaque <" << target << "> à distance, causant <" << rangedAttackDamage << "> points de dégâts !\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << Name << "> attaque <" << target << "> en mélée, causant <" << meleeAttackDamage << "> points de dégâts !\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
    int damageTook;

    damageTook = amount - armorDamageReduction;
    if (damageTook < 0)
        damageTook = 0;
    hitPoints -= damageTook;
    std::cout << "SC4V-TP <" << Name << "> se fait attaquer et prend <" << damageTook << "> points de dégâts !\n";
    if (hitPoints <= 0)
        hitPoints = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    if (hitPoints > maxHitPoints)
        hitPoints = maxHitPoints;
    std::cout << "SC4V-TP <" << Name << "> se fait heal de <" << amount << "> points de vie !\n";
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