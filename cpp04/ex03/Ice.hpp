#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & copy);
        Ice& operator=(const Ice &copy);
        virtual ~Ice();

        virtual AMateria* clone () const;
        virtual void use(ICharacter& target);
};

#endif