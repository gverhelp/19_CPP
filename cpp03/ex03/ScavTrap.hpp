#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <time.h>
# include <stdlib.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string newName);
        ScavTrap(ScavTrap const & copy);
        ScavTrap & operator=(ScavTrap const & copy);
        ~ScavTrap();

        std::string getName() const;
        void challengeNewcomer();
};

#endif