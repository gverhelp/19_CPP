#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <unistd.h>

int main()
{
	ScavTrap champ("Kayn");
	FragTrap champ2("Ekko");

    std::cout << "\n-------------- ScavTrap --------------\n\n";

    champ.rangedAttack("Diana");
    champ.meleeAttack("Renekton");

    champ.getHitPoints();
    champ.takeDamage(200);
    champ.getHitPoints();

    champ.beRepaired(200);
    champ.getHitPoints();

    champ.takeDamage(45);
    champ.getHitPoints();

    champ.takeDamage(2);
    champ.getHitPoints();

    champ.challengeNewcomer();
    sleep(1);

	champ.challengeNewcomer();

	std::cout << "\n-------------- FragTrap --------------\n\n";

    champ2.rangedAttack("Viktor");
    champ2.meleeAttack("Elise");

    champ2.getHitPoints();
    champ2.takeDamage(200);
    champ2.getHitPoints();

    champ2.beRepaired(200);
    champ2.getHitPoints();

    champ2.takeDamage(45);
    champ2.getHitPoints();

    champ2.takeDamage(2);
    champ2.getHitPoints();

    champ2.getEnergyPoints();
    champ2.vaulthunter_dot_exe("Skarner");
    champ2.getEnergyPoints();
    sleep(1);

    champ2.vaulthunter_dot_exe("Qiyana");
    champ2.getEnergyPoints();
    sleep(1);

    champ2.vaulthunter_dot_exe("Hecarim");
    champ2.getEnergyPoints();
    sleep(1);

    champ2.vaulthunter_dot_exe("Sivir");
    champ2.getEnergyPoints();
    sleep(1);

    champ2.vaulthunter_dot_exe("Kai'sa");
    champ2.getEnergyPoints();
    return (0);
}