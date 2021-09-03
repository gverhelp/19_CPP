#include "Point.hpp"

Point::Point():
_x(0),
_y(0)
{

}

Point::Point(Fixed const x, Fixed const y):
_x(x),
_y(y)
{

}

Point::Point(Point const &copy)
{
    *this = copy;
}

Point::~Point()
{
    
}

Point& Point::operator=(Point const &copy)
{
	if (this != &copy)
    {
        _x = copy._x;
        _y = copy._y;
	}
	return (*this);
}

Fixed Point::getX() const
{
    return (_x);
}

Fixed Point::getY() const
{
    return (_y);
}

std::ostream &operator<<(std::ostream &o, const Point &rhs)
{
    (void)rhs;
    return (o);
}