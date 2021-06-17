#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor has been called.\n";
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
    std::cout << "FR4G-TP <" << newName << "> is right here!\n";
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
    std::cout << "FR4G-TP <" << Name << "> is .. not right here anymore...\n";
}

void FragTrap::getHitPoints() const
{
    if (hitPoints <= 0)
        std::cout << "FR4G-TP <" << Name << "> ne possède plus de points de vie. Sadge.\n";
    else
        std::cout << "FR4G-TP <" << Name << "> possède <" << hitPoints << "> points de vie !\n";
}

void FragTrap::getEnergyPoints() const
{
    std::cout << "FR4G-TP <" << Name << "> possède <" << energyPoints << "> points d'énergie !\n";
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << Name << "> attaque <" << target << "> à distance, causant <" << rangedAttackDamage << "> points de dégâts !\n";
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << Name << "> attaque <" << target << "> en mélée, causant <" << meleeAttackDamage << "> points de dégâts !\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    int damageTook;

    damageTook = amount - armorDamageReduction;
    if (damageTook < 0)
        damageTook = 0;
    hitPoints -= damageTook;
    std::cout << "FR4G-TP <" << Name << "> se fait attaquer et prend <" << damageTook << "> points de dégâts !\n";
    if (hitPoints <= 0)
        hitPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    if (hitPoints > maxHitPoints)
        hitPoints = maxHitPoints;
    std::cout << "FR4G-TP <" << Name << "> se fait heal de <" << amount << "> points de vie !\n";
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