#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

    std::cout << "\n------------ DiamondTrap ------------\n\n";

    DiamondTrap champ3("Annie");

    champ3.getEnergyPoints();
    champ3.attack("Sejuani");
    champ3.getEnergyPoints();

    champ3.getHitPoints();
    champ3.takeDamage(200);
    champ3.getHitPoints();

    champ3.beRepaired(200);
    champ3.getHitPoints();
    champ3.getEnergyPoints();

    champ3.takeDamage(45);
    champ3.getHitPoints();

    champ3.takeDamage(2);
    champ3.getHitPoints();

    champ3.whoAmI();
    champ3.highFivesGuys();
    champ3.guardGate();
    return (0);
}