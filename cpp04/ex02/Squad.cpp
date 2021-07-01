#include "Squad.hpp"

Squad::Squad()
{

}

Squad::Squad(Squad const &copy)
{
    *this = copy;
}

Squad& Squad::operator=(const Squad &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

Squad::~Squad()
{

}

int Squad::getCount() const
{
    return (nbOfUnits);
}

ISpaceMarine* Squad::getUnit(int) const
{

}

int Squad::push(ISpaceMarine*)
{

}
