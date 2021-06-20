#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string newName);
        ClapTrap(ClapTrap const & copy);
        ClapTrap & operator=(ClapTrap const & copy);
        ~ClapTrap();

        void getHitPoints() const;
        void getEnergyPoints() const;
        std::string getName() const;

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void losingEnergy(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
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