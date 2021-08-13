#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		Fixed(Fixed const& copy);
        Fixed& operator=(Fixed const& copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator<(Fixed const& copy) const;
		bool operator>(Fixed const& copy) const;
		bool operator<=(Fixed const& copy) const;
		bool operator>=(Fixed const& copy) const;
		bool operator==(Fixed const& copy) const;
		bool operator!=(Fixed const& copy) const;

		Fixed operator+(Fixed const& copy) const;
		Fixed operator-(Fixed const& copy) const;
		Fixed operator*(Fixed const& copy) const;
		Fixed operator/(Fixed const& copy) const;

		Fixed& operator++();
		Fixed  operator++(int);
		Fixed& operator--();
		Fixed  operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(Fixed const& a, Fixed const& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(Fixed const& a, Fixed const& b);

	private:
		int 				pFixe;
		static const int    bits = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif