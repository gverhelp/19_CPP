#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <time.h>
# include <stdlib.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string newName);
        FragTrap(FragTrap const & copy);
        FragTrap & operator=(FragTrap const & copy);
        ~FragTrap();

        std::string getName() const;
        void vaulthunter_dot_exe(std::string const & target);
};

#endif