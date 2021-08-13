#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    _Hp = hp;
    _Type = type;
}

Enemy::Enemy(Enemy const &copy)
{
    *this = copy;
}

Enemy& Enemy::operator=(const Enemy &copy)
{
    if (this != &copy)
    {
        _Hp = copy._Hp;
        _Type = copy._Type;
    }
    return (*this);
}

Enemy::~Enemy()
{

}

std::string Enemy::getType() const
{
    return (_Type);
}

int Enemy::getHP() const
{
    return (_Hp);
}

void Enemy::takeDamage(int damage)
{
    if (_Hp >= damage)
        _Hp -= damage;
    else
        _Hp = 0;
}

std::ostream & operator<<(std::ostream &o, Enemy const & rhs)
{
    o << rhs.getType() << " has " << rhs.getHP() << "hp.\n";
    return (o);
}