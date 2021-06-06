#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();

        void setZombie(std::string name, std::string type);
        void announce();

    private:
        std::string Name;
        std::string Type;
};

#endif