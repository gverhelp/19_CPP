#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string newName);
        DiamondTrap(DiamondTrap const & copy);
        DiamondTrap & operator=(DiamondTrap const & copy);
        virtual ~DiamondTrap();

        void attack(std::string const & target);
        void whoAmI();

    private :
        std::string Name;
};

#endif