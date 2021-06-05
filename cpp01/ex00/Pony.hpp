#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
    public:
        Pony(std::string nname, std::string aage, std::string sspeed, std::string ccolor);
        ~Pony();

        void getPony();

    private:
        std::string name;
        std::string age;
        std::string speed;
        std::string color;
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif