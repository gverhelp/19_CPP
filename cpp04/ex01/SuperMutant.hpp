#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(std::string const & name, int apcost, int damage);
        SuperMutant(SuperMutant const &copy);
        SuperMutant& operator=(const SuperMutant &copy);
        virtual ~SuperMutant();

        virtual void takeDamage(int damage);
};

#endif