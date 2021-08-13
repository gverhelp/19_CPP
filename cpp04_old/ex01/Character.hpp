#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character
{
    public:
        Character(std::string const &name);
        Character(Character const &copy);
        Character& operator=(const Character &copy);
        virtual ~Character();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);
        std::string getName() const;
        void introduce() const;

    private:
        std::string _Name;
        int _Ap;
        AWeapon *_Weapon;
};

std::ostream & operator<<(std::ostream &o, Character const & rhs);

#endif