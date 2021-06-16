#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(FragTrap const & copy)
{
    *this = copy;
}

FragTrap::~FragTrap()
{

}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        ///////////////////////////
    }
    return (*this);
}