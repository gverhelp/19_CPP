#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap champ("Kayn");
	FragTrap champ2("Ekko");

    std::cout << "\n-------------- ScavTrap --------------\n\n";

    champ.attack("Diana");

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

	std::cout << "\n-------------- FragTrap --------------\n\n";

    champ2.attack("Viktor");

    champ2.getHitPoints();
    champ2.takeDamage(200);
    champ2.getHitPoints();

    champ2.beRepaired(200);
    champ2.getHitPoints();

    champ2.takeDamage(45);
    champ2.getHitPoints();

    champ2.takeDamage(2);
    champ2.getHitPoints();

    champ2.highFivesGuys();
    return (0);
}