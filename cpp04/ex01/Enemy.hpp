#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &copy);
        Enemy& operator=(const Enemy &copy);
        virtual ~Enemy();

        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);

    protected:
        int _Hp;
        std::string _Type;
};

std::ostream & operator<<(std::ostream &o, Enemy const & rhs);

#endif