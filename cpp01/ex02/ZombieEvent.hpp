#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        Zombie  *newZombie(std::string name);
        void    randomChump();
        int     setZombieType(Zombie &newZombie);
        bool    checkType(std::string type);

    private:
        std::string Name[5];
        std::string Type[10];
};

#endif