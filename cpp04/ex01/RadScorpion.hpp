#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(std::string const & name, int apcost, int damage);
        RadScorpion(RadScorpion const &copy);
        RadScorpion& operator=(const RadScorpion &copy);
        virtual ~RadScorpion();
};

#endif