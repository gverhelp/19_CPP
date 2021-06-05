#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();

        Zombie *newZombie(std::string name);
        void advert();

    private:
        std::string Name;
        std::string Type;
};

#endif