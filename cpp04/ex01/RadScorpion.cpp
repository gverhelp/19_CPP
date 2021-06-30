#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &copy):
Enemy(copy)
{
    *this = copy;
}

RadScorpion& RadScorpion::operator=(const RadScorpion &copy)
{
    if (this != &copy)
    {
        Enemy::operator=(copy);
    }
    return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}