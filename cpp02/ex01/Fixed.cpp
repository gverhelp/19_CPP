#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int intNbr)
{
    std::cout << "Integer constructor called" << std::endl;
    pFixe = intNbr << bits;
}

Fixed::Fixed(const float floatNbr)
{
    std::cout << "Float constructor called" << std::endl;
    pFixe = roundf(floatNbr * (1 << bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator called" << std::endl;
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
    return (pFixe >> bits);
}

float Fixed::toFloat() const
{
    return ((float)pFixe / (1 << bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}
