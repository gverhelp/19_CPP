#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
    public:
        Squad();
        Squad(Squad const &copy);
        Squad& operator=(const Squad &copy);
        virtual ~Squad();

        virtual int getCount() const;
        virtual ISpaceMarine *getUnit(int) const;
        virtual int push(ISpaceMarine*);

    private:
        int nbOfUnits;

};

#endif