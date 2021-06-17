#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
    public:
        FragTrap(std::string newName);
        FragTrap(FragTrap const & copy);
        FragTrap & operator=(FragTrap const & rhs);
        ~FragTrap();

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);

    private:
        int hitPoints;
        int maxHitPoints;
        int energyPoints;
        int maxEnergyPoints;
        int level;
        int meleeAttackDamage;
        int rangedAttackDamage;
        int armorDamageReduction;
        std::string Name;
};

#endif