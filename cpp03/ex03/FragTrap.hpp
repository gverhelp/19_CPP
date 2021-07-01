#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string newName);
        FragTrap(int type);
        FragTrap(FragTrap const & copy);
        FragTrap & operator=(FragTrap const & copy);
        ~FragTrap();

        void attack(std::string const & target);
        void highFivesGuys();
};

#endif