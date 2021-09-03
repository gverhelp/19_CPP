#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(Fixed const x, Fixed const y);
        Point(Point const &copy);

        Point& operator=(Point const &copy);

        Fixed getX() const;
        Fixed getY() const;

        ~Point();

    private:
        Fixed _x;
        Fixed const x;
        Fixed _y;
        Fixed const y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &o, const Point &rhs);

#endif