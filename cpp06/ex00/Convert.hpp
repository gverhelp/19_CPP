#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>
# include <climits>

class Convert
{
    public:
        Convert();
        Convert(std::string toConvert);
        Convert(Convert const &copy);
        Convert& operator=(const Convert &copy);
        ~Convert();

        std::string getChar() const;
        std::string getInt() const;
        std::string getFloat() const;
        std::string getDouble() const;

        void        toChar();
        void        toInt();
        void        toFloat();
        void        toDouble();
        void        ToAllTypes();

    private:
        std::string _toConvert;
        char        _c;
        int         _i;
        float       _f;
        double      _d;
};

std::ostream &operator<<(std::ostream &o, const Convert &rhs);

#endif