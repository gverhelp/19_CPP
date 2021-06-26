#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string newName);
        ClapTrap(int hitpoints, int maxhitspoints, int energypoint, int maxenergypoints, int attackdamage, int armordamagereduction, std::string newName);
        ClapTrap(ClapTrap const & copy);
        ClapTrap & operator=(ClapTrap const & rhs);
        ~ClapTrap();

        void setName(std::string newName);

        std::string getName() const;
        void getHitPoints() const;
        void getEnergyPoints() const;

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        int hitPoints;
        int maxHitPoints;
        int energyPoints;
        int maxEnergyPoints;
        int attackDamage;
        int armorDamageReduction;
        std::string Name;
};

#endif