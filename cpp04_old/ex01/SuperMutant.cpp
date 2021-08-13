#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const &copy):
Enemy(copy)
{
    *this = copy;
}

SuperMutant& SuperMutant::operator=(const SuperMutant &copy)
{
    if (this != &copy)
    {
        Enemy::operator=(copy);
    }
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}