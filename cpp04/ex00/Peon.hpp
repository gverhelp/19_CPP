#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        Peon(std::string newName);
        Peon(Peon const & copy);
        Peon& operator=(const Peon &copy);
        ~Peon();

        virtual void getPolymorphed() const;
};

#endif