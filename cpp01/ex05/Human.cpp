#include "Human.hpp"

Human::Human()
{
    std::cout << "A Human has just been created.\n";
}

Human::~Human()
{
    std::cout << "Oh no... A Human just died....\n";
}

Brain const* Human::identify() const
{
    return (brain.identify());
}

Brain const& Human::getBrain() const
{
    return (brain);
}