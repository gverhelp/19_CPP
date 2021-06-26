#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ScavTrap champ("Kayn");
	FragTrap champ2("Ekko");
    DiamondTrap champ3("Annie");

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

    std::cout << "\n------------ DiamondTrap ------------\n\n";

    champ3.attack("Sejuani");
    
    champ3.getNameDiamond();

    champ3.getHitPoints();
    champ3.takeDamage(200);
    champ3.getHitPoints();

    champ3.beRepaired(200);
    champ3.getHitPoints();

    champ3.takeDamage(45);
    champ3.getHitPoints();

    champ3.takeDamage(2);
    champ3.getHitPoints();

    champ3.whoAmI();
    champ3.highFivesGuys();
    champ3.guardGate();
    return (0);
}