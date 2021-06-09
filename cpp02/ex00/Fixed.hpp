#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed& operator=(Fixed const &copy);
        ~Fixed();

        void setRawBits(int const raw);
        int getRawBits() const;

    private:
        int pFixe;
        static const int bits = 8;
};

#endif