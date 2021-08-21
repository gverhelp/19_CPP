#include "Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(std::string toConvert):
_toConvert(toConvert)
{

}

Convert::Convert(Convert const &copy)
{
    *this = copy;
}

Convert& Convert::operator=(const Convert &copy)
{
    if (this != &copy)
    {
        _toConvert = copy._toConvert;
        _c = copy._c;
        _i = copy._i;
        _f = copy._f;
        _d = copy._d;
    }
    return (*this);
}

Convert::~Convert()
{

}

std::string Convert::getChar() const
{
    std::string ret;
    float f;
    std::stringstream ss;

    ss << _c;
    f = atof(_toConvert.c_str());
    if (f < CHAR_MIN || f > CHAR_MAX || std::isnan(f))
        ret = "impossible";
    else if (!isprint(_c))
        ret = "non displayable";
    else
        ret = "'" + ss.str() + "'";
    return (ret);
}

std::string Convert::getInt() const
{
    std::string ret;
    float f;
    std::stringstream ss;

    ss << _i;
    f = atof(_toConvert.c_str());
    if (f < INT_MIN || f > INT_MAX || std::isnan(f))
        ret = "impossible";
    else
        ret = ss.str();
    return (ret);
}

std::string Convert::getFloat() const
{
    std::string ret;
    std::stringstream ss;

    ss << _f;
    ret = ss.str();
    if (_f - _i == 0)
        ret.append(".0");
    ret.append("f");
    return (ret);
}

std::string Convert::getDouble() const
{
    std::string ret;
    std::stringstream ss;

    ss << _d;
    ret = ss.str();
    if (_f - _i == 0)
        ret.append(".0");
    return (ret);
}

void Convert::toChar()
{
    _c = static_cast<char>(atof(_toConvert.c_str()));
}

void Convert::toInt()
{
    _i = atoi(_toConvert.c_str());
}

void Convert::toFloat()
{
    _f = atof(_toConvert.c_str());
}

void Convert::toDouble()
{
    _d = static_cast<double>(atof(_toConvert.c_str()));
}

void Convert::ToAllTypes()
{
    toChar();
    toInt();
    toFloat();
    toDouble();
}

std::ostream &operator<<(std::ostream &o, const Convert &rhs)
{
    o << "Char: " << rhs.getChar() << std::endl;
    o << "int: " << rhs.getInt() << std::endl;
    o << "float: " << rhs.getFloat() << std::endl;
    o << "double: " << rhs.getDouble() << std::endl;
    return (o);
}