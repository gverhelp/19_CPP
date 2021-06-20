#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string newName);
        NinjaTrap(NinjaTrap const & copy);
        NinjaTrap & operator=(NinjaTrap const & copy);
        ~NinjaTrap();

        void ninjaShoebox(FragTrap &frag);
        void ninjaShoebox(ScavTrap &scav);
        void ninjaShoebox(ClapTrap &clap);
        void ninjaShoebox(NinjaTrap &ninja);
};

#endif