#include "ScavTrap.hpp"

int main()
{
    ScavTrap champ("Kayn");

    champ.attack("Dr.Mundo");

    champ.getHitPoints();
    champ.takeDamage(200);
    champ.getHitPoints();

    champ.beRepaired(200);
    champ.getHitPoints();

    champ.takeDamage(45);
    champ.getHitPoints();

    champ.takeDamage(2);
    champ.getHitPoints();

    champ.guardGate();
    return (0);
}