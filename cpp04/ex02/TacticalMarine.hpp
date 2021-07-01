#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const &copy);
        TacticalMarine& operator=(const TacticalMarine &copy);
        virtual ~TacticalMarine();

        virtual ISpaceMarine *clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif