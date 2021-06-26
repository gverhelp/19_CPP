#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string newName);
        ClapTrap(ClapTrap const & copy);
        ClapTrap & operator=(ClapTrap const & rhs);
        ~ClapTrap();

        void getHitPoints() const;
        void getEnergyPoints() const;

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        int hitPoints;
        int maxHitPoints;
        int energyPoints;
        int maxEnergyPoints;
        int attackDamage;
        int armorDamageReduction;
        std::string Name;
};

#endif