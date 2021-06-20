#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "Default NinjaTrap constructor has been called.\n";
    hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    armorDamageReduction = 0;
    Name = "";
}

NinjaTrap::NinjaTrap(std::string newName)
{
    std::cout << "Overloaded FrapTrap constructor has been called.\n";
    hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    armorDamageReduction = 0;
    Name = newName;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy)
{
    std::cout << "Copy NinjaTrap constructor has been called.\n";
    *this = copy;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &copy)
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

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap destructor has been called.\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
    std::cout << "NINJ4-TP <" << Name << "> détruit FR4G-TP <" << frag.getName() << "> dans un duel singulier en lui infligeant 40 points de dégât !\n";
    frag.takeDamage(40);
    frag.getHitPoints();
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
    std::cout << "NINJ4-TP <" << Name << "> est désemparé face à la puissance de SC4V-TP <" << scav.getName() << ">, qui lui inflige 57 points de dégât !\n";
    this->takeDamage(57);
    this->getHitPoints();
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
    std::cout << "NINJ4-TP <" << Name << "> aspire toute l'énergie de CL4P-TP <" << clap.getName() << "> grâce à sa technique interdite !\n";
    clap.losingEnergy(200);
    clap.getEnergyPoints();
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
    std::cout << "NINJ4-TP <" << Name << "> s'entraine contre son acolyte NINJ4-TP <" << ninja.getName() << ">. Après plusieurs heures de combat, NINJ4-TP <" << Name << "> a perdu 78 points de vie et toute son énergie !\n";
    std::cout << "Pour ce qui est de NINJ4-TP <" << ninja.getName() << ">, il a perdu 45 points de vie et 54 points d'énergie !\n";
    this->takeDamage(78);
    this->losingEnergy(200);
    this->getHitPoints();
    this->getEnergyPoints();
    ninja.takeDamage(45);
    ninja.losingEnergy(54);
    ninja.getHitPoints();
    ninja.getEnergyPoints();
}