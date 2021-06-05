#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        Zombie(std::string name, std::string type);
        ~Zombie();

        void    setType(std::string type);
        void    advert();

    private:
        std::string Name;
        std::string Type;
};

#endif