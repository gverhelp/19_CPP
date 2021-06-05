#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << this << " : A Zombie has been created!" << std::endl;
    Name = name;
}

Zombie::Zombie(std::string name, std::string type)
{
    std::cout << this << " : A Zombie has been created!" << std::endl;
    Name = name;
    Type = type;
}

Zombie::~Zombie()
{
    std::cout << this << " : A Zombie just died, poor Zombie..." << std::endl;
}

void Zombie::advert()
{
    std::cout << Name << " (" << Type << ")> Braiiiiiiiiiinnnssssss...." << std::endl;
}

void Zombie::setType(std::string type)
{
    Type = type;
}
