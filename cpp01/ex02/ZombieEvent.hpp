#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        Zombie *newZombie(std::string name);
        void setZombieType();

    private:
};

#endif