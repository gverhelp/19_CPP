#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer();
        Sorcerer(std::string newName, std::string newTitle);
        Sorcerer(Sorcerer const & copy);
        Sorcerer& operator=(const Sorcerer &copy);
        ~Sorcerer();

        void introduce() const;
        void polymorph(Victim const &copy) const;

    private:
        std::string _Name;
        std::string _Title;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif