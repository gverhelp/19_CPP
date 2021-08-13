#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(std::string const & name, int apcost, int damage);
        PlasmaRifle(PlasmaRifle const &copy);
        PlasmaRifle& operator=(const PlasmaRifle &copy);
        virtual ~PlasmaRifle();

        virtual void attack() const;
};

#endif