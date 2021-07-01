# include "Fixed.hpp"

Fixed::Fixed() :
pFixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	pFixe = (i << bits);
}

Fixed::Fixed(const float i) :
pFixe(i)
{
	std::cout << "Float constructor called" << std::endl;
	pFixe = roundf(i * (1 << bits));
}

Fixed::Fixed(Fixed const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(Fixed const& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
		pFixe = copy.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (pFixe);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
	pFixe = raw;
}

int Fixed::toInt(void) const
{
	return (pFixe >> bits);
}

float Fixed::toFloat(void) const
{
	return ((float)pFixe / (1 << bits));
}

std::ostream &operator<<(std::ostream &output_stream, const Fixed &f)
{
  	return (output_stream << f.toFloat());
}

bool Fixed::operator<(Fixed const& copy) const { return pFixe < copy.pFixe; }
bool Fixed::operator>(Fixed const& copy) const { return pFixe > copy.pFixe; }
bool Fixed::operator<=(Fixed const& copy) const { return pFixe < copy.pFixe || pFixe == copy.pFixe; }
bool Fixed::operator>=(Fixed const& copy) const { return pFixe > copy.pFixe || pFixe == copy.pFixe; }
bool Fixed::operator==(Fixed const& copy) const { return pFixe == copy.pFixe; }
bool Fixed::operator!=(Fixed const& copy) const { return !(pFixe == copy.pFixe); }

Fixed Fixed::operator+(Fixed const& copy) const { return Fixed(toFloat() + copy.toFloat()); }
Fixed Fixed::operator-(Fixed const& copy) const { return Fixed(toFloat() - copy.toFloat()); }
Fixed Fixed::operator*(Fixed const& copy) const { return Fixed(toFloat() * copy.toFloat()); }
Fixed Fixed::operator/(Fixed const& copy) const { return Fixed(toFloat() / copy.toFloat()); }

Fixed& Fixed::operator++()
{
    pFixe++;
    return *this;
}

Fixed  Fixed::operator++(int)
{
    Fixed copy(*this);
    pFixe++;
    return copy;
}

Fixed& Fixed::operator--()
{
    pFixe++;
    return *this;
}

Fixed  Fixed::operator--(int)
{
    Fixed copy(*this);
    pFixe--;
    return copy;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) { return a < b ? a : b; }
Fixed const& Fixed::min(Fixed const& a, Fixed const& b) { return a < b ? a : b; }
Fixed& Fixed::max(Fixed& a, Fixed& b) { return a > b ? a : b; }
Fixed const& Fixed::max(Fixed const& a, Fixed const& b) { return a > b ? a : b; }