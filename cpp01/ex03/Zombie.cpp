#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie()
{
    std::cout << "A Zombie has been created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie.. was... cool..." << std::endl;
}

void Zombie::setZombie(std::string name, std::string type)
{
    Name = name;
    Type = type;
}

void Zombie::announce()
{
    std::cout << Name << " (" << Type << ")> Braaaaaiiiiinnnnnnssssssss...." << std::endl;
}