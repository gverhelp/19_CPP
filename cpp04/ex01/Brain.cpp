#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor has been called.\n";
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Copy Brain constructor has been called.\n";
    *this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int a = 0; a < 100; a++)
            this->ideas[a] = copy.ideas[a];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor Brain has been called.\n";
}