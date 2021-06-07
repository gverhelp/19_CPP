#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    WeaponA = &weapon;
    NameA = name;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << NameA << " attacks with his " << WeaponA->getType() << std::endl;
}