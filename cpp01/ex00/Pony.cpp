#include "Pony.hpp"

Pony::Pony(std::string nname, std::string aage, std::string sspeed, std::string ccolor)
{
    std::cout << "BRLUHUHHUHUH !" << std::endl;
    name = nname;
    age = aage;
    speed = sspeed;
    color = ccolor;
}

Pony::~Pony()
{
    std::cout << "HUUUUUUUUUUE UDADA !\n" << std::endl;
}

void Pony::getPony()
{
    std::cout << "Pssss.... Hey! Psssssss! Don't be surprised, yeah I'm a horse and yeah I can talk.\nLet me introduce myself." << std::endl;
    std::cout << "Ok so my name is " << name << " and I'm a " << age << " years old " << color << " horse." << std::endl;
    std::cout << "Also, I'm fast as fuck boii I have a speed of " << speed << "." << std::endl;
}