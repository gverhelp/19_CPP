#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
    public:
        Victim();
        Victim(std::string newName);
        Victim(Victim const & copy);
        Victim& operator=(const Victim &copy);
        ~Victim();

        void introduce() const;
        virtual void getPolymorphed() const;

    protected:
        std::string _Name;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif