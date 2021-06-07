#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack();

    private:
        std::string NameB;
        Weapon WeaponB;
};

#endif