#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n-------------- ScavTrap --------------\n\n";

    ScavTrap champ("Kayn");

    champ.getEnergyPoints();
    champ.attack("Diana");
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

	std::cout << "\n-------------- FragTrap --------------\n\n";

    FragTrap champ2("Ekko");

    champ2.getEnergyPoints();
    champ2.attack("Viktor");
    champ2.getEnergyPoints();

    champ2.getHitPoints();
    champ2.takeDamage(200);
    champ2.getHitPoints();

    champ2.beRepaired(200);
    champ2.getHitPoints();
    champ2.getEnergyPoints();

    champ2.takeDamage(45);
    champ2.getHitPoints();

    champ2.takeDamage(2);
    champ2.getHitPoints();

    champ2.highFivesGuys();
    return (0);
}