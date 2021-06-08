#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    pFixe = 0;
}

Fixed::Fixed(Fixed const& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& copy)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
    {

    }
    pFixe = copy.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    pFixe = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (pFixe);
}