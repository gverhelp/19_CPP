#include "ScavTrap.hpp"

int main()
{
    ScavTrap champ("Kayn");

    champ.getEnergyPoints();
    champ.attack("Dr.Mundo");
    champ.getEnergyPoints();

    champ.getHitPoints();
    champ.takeDamage(200);
    champ.getHitPoints();

    champ.beRepaired(200);
    champ.getHitPoints();
    champ.getEnergyPoints();

    champ.takeDamage(45);
    champ.getHitPoints();

    champ.takeDamage(2);
    champ.getHitPoints();

    champ.guardGate();
    return (0);
}