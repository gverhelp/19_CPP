#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy):
AWeapon(copy)
{
    *this = copy;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &copy)
{
    if (this != &copy)
    {
        AWeapon::operator=(copy);
    }
    return (*this);
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}