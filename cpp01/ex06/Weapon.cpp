#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    Type = type;
}

Weapon::~Weapon()
{
    
}

void Weapon::setType(std::string type)
{
    Type = type;
}

std::string const& Weapon::getType()
{
    return (Type);
}