#include "Character.hpp"

Character::Character():
_Name("Garreth"),
_comptInv(0)
{
    std::cout << "Default Character constructor has been called." << std::endl;
    int a = 0;
    while (a < 4)
    {
        _Inventory[a] = 0;
        a++;
    }
}

Character::Character(std::string Name):
_Name(Name),
_comptInv(0)
{
    std::cout << "Overloaded Character constructor has been called." << std::endl;
    int a = 0;
    while (a < 4)
    {
        _Inventory[a] = 0;
        a++;
    }
}

Character::Character(Character const &copy)
{
    std::cout << "Copy Character constructor has been called." << std::endl;
    *this = copy;
}

Character& Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        _Name = copy._Name;
        _comptInv = copy._comptInv;
        for (int a = 0; a < _comptInv; a++)
        {
            delete _Inventory[a];
        }
        for (int a = 0; a < 4; a++)
        {
            _Inventory[a] = 0;
        }
        for (int a = 0; a < _comptInv; a++)
        {
            _Inventory[a] = copy._Inventory[a]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Destructor Character has been called." << std::endl;
    for (int a = 0; a < _comptInv; a++)
        delete _Inventory[a];
}

std::string const & Character::getName() const
{
    return (_Name);
}

void Character::equip(AMateria* m)
{
    if (_comptInv >= 0 && _comptInv < 4)
    {
        for (int a = 0; a < 4; a++)
        {
            if (_Inventory[a] == 0)
            {
                _Inventory[_comptInv] = m;
                _comptInv++;
                return ;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (_Inventory[idx])
    {
        _Inventory[idx] = 0;
        _comptInv--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (_Inventory[idx] && idx >= 0 && idx < 4)
        _Inventory[idx]->use(target);
}