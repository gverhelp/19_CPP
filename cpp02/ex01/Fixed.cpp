#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNbr)
{
    (void)intNbr;
    //////////////////////////////////////////////
    std::cout << "Integer constructor called" << std::endl;
//    pFixe = intNbr;
}

Fixed::Fixed(const float doubleNbr)
{
    (void)doubleNbr;
    //////////////////////////////////////////////
    std::cout << "Double constructor called" << std::endl;
//    pFixe = doubleNbr;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation  operator called" << std::endl;
    if (this != &copy)
    {
        this->pFixe = copy.getRawBits();
    }
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    pFixe = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (pFixe);
}

int Fixed::toInt() const
{
    /////////////////////////////
    return (pFixe);
}

float Fixed::toFloat() const
{
    /////////////////////////////
    return (pFixe);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    /////////////////////////////
    o << rhs.getRawBits();
    return (o);
}