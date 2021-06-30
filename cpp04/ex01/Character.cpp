#include "Character.hpp"

Character::Character(std::string const &name)
{
    _Name = name;
    _Ap = 40;
}

Character::Character(Character const &copy)
{
    *this = copy;
}

Character& Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
    }
    return (*this);
}

Character::~Character()
{

}

void Character::recoverAP()
{
    _Ap += 10;
    if (_Ap > 40)
        _Ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _Weapon = weapon; 
}

void Character::attack(Enemy *enemy)
{
    if (_Weapon && _Ap >= _Weapon->getAPCost())
    {
        std::cout << _Name << " attacks " << enemy->getType() << " with a " << _Weapon->getName() << std::endl;
        _Weapon->attack();
        enemy->takeDamage(_Weapon->getDamage());
        _Ap -= _Weapon->getAPCost();
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::string Character::getName() const
{
    return (_Name);
}

void Character::introduce() const
{
    std::cout << _Name << " has " << _Ap << " AP";
    if (!_Weapon)
        std::cout << " and is unarmed\n";
    else
        std::cout << " and wields a " << _Weapon->getName() << std::endl; 
}

std::ostream & operator<<(std::ostream &o, Character const & rhs)
{
    rhs.introduce();
    return (o);
}