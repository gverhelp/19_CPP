#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde
{
    public:
        ZombieHorde(int n);
        ~ZombieHorde();

        std::string getName();
        std::string getType();

    private:
        int nbrZombie;
        Zombie *newZombie;
};

#endif