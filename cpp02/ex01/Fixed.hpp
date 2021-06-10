#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int intNbr);
        Fixed(const float doubleNbr);

        Fixed& operator=(Fixed const &copy);

        ~Fixed();

        void    setRawBits(int const raw);
        int     getRawBits() const;
        int     toInt() const;
        float   toFloat() const;

    private:
        int                 pFixe;
        static const int    bits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif