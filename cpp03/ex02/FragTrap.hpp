#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string newName);
        FragTrap(FragTrap const & copy);
        FragTrap & operator=(FragTrap const & copy);
        ~FragTrap();

        void vaulthunter_dot_exe(std::string const & target);
};

#endif