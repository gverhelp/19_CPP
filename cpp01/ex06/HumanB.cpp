#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    NameB = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    std::cout << NameB << " attacks with his " << WeaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    WeaponB = &weapon;
}