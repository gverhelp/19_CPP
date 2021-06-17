#include "FragTrap.hpp"

int main()
{
    FragTrap fragou("Garreth");

    fragou.rangedAttack("King Kong");
    fragou.meleeAttack("un gros serpent");
    fragou.takeDamage(50);
    fragou.takeDamage(6);
    fragou.takeDamage(-30);
    fragou.beRepaired(5);
    return (0);
}