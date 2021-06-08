#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const& copy);
        ~Fixed();
        Fixed& operator=(Fixed const& copy);

        void setRawBits(int const raw);
        int getRawBits() const;

    private:
        int pFixe;
        const static int bits = 8;
};

#endif