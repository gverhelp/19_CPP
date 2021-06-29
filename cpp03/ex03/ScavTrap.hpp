#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string newName);
        ScavTrap(int type);
        ScavTrap(ScavTrap const & copy);
        ScavTrap & operator=(ScavTrap const & copy);
        ~ScavTrap();

        void attack(std::string const & target);
        void guardGate();
};

#endif