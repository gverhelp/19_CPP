#include "FragTrap.hpp"

int main()
{
    FragTrap champ("Kayn");

    champ.rangedAttack("Dr.Mundo");
    champ.meleeAttack("Zed");

    champ.getHitPoints();
    champ.takeDamage(200);
    champ.getHitPoints();

    champ.beRepaired(200);
    champ.getHitPoints();

    champ.takeDamage(45);
    champ.getHitPoints();

    champ.takeDamage(2);
    champ.getHitPoints();

    champ.getEnergyPoints();
    champ.vaulthunter_dot_exe("Ekko");
    champ.getEnergyPoints();
    sleep(1);

    champ.vaulthunter_dot_exe("Seraphine");
    champ.getEnergyPoints();
    sleep(1);

    champ.vaulthunter_dot_exe("Lilia");
    champ.getEnergyPoints();
    sleep(1);

    champ.vaulthunter_dot_exe("Gnar");
    champ.getEnergyPoints();
    sleep(1);

    champ.vaulthunter_dot_exe("Syndra");
    champ.getEnergyPoints();
    return (0);
}