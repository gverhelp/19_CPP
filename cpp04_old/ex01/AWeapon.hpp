#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &copy);
        AWeapon& operator=(const AWeapon &copy);
        virtual ~AWeapon();

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

    protected:
        std::string _Name;
        int _Damage;
        int _APCost;
};

std::ostream & operator<<(std::ostream & o, AWeapon const & rhs);

#endif