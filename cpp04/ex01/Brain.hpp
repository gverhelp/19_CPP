#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const & copy);
        Brain& operator=(const Brain &copy);
        virtual ~Brain();

    private :
        std::string ideas[100];
};

#endif