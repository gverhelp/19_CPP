#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string Name);
        Character(Character const & copy);
        Character& operator=(const Character &copy);
        virtual ~Character();

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:
        std::string _Name;
        AMateria    *_Inventory[4];
        int         _comptInv;
};

#endif