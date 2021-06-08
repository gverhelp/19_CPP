#include "Brain.hpp"

Brain::Brain()
{
    neurons = 180000;
    std::cout << "What's a Human without his brain?\n";
}

Brain::~Brain()
{
    std::cout << "Brain... doesn't respond anymore....\n";
}

Brain const* Brain::identify() const
{
    return (this); 
}