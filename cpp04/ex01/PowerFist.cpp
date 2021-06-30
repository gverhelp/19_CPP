#include "PowerFist.hpp"

PowerFist::PowerFist():
AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &copy):
AWeapon(copy)
{
    *this = copy;
}

PowerFist& PowerFist::operator=(const PowerFist &copy)
{
    if (this != &copy)
    {
        AWeapon::operator=(copy);
    }
    return (*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
}