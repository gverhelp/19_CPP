#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();

        void setType(std::string type);

        std::string const& getType();

    private:
        std::string Type;
};

#endif