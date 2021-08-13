#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"
# include <iostream>

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(std::string const & name, int apcost, int damage);
        PowerFist(PowerFist const &copy);
        PowerFist& operator=(const PowerFist &copy);
        virtual ~PowerFist();

        virtual void attack() const;
};

#endif