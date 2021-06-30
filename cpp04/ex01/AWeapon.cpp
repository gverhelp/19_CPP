#include "AWeapon.hpp"

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    _Name = name;
    _APCost = apcost;
    _Damage = damage;
}

AWeapon::AWeapon(AWeapon const &copy)
{
    *this = copy;
}

AWeapon& AWeapon::operator=(const AWeapon &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
        _APCost = copy._APCost;
        _Damage = copy._Damage;
    }
    return (*this);
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
    return (_Name);
}

int AWeapon::getAPCost() const
{
    return (_APCost);
}

int AWeapon::getDamage() const
{
    return (_Damage);
}

std::ostream & operator<<(std::ostream & o, AWeapon const & rhs)
{
    o << rhs.getName();
    return (o);
}