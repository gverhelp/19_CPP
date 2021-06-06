#include "ZombieHorde.hpp"
#include <unistd.h>

ZombieHorde::ZombieHorde(int n)
{
    nbrZombie = n;
    newZombie = new Zombie[nbrZombie];

    for (int a = 0; a < nbrZombie; a++)
    {
        sleep(1);
        newZombie[a].setZombie(getName(), getType());
        newZombie[a].announce();
    }
    std::cout << "Shhhhht... A Horde of Zombie has just been created! Be careful!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    delete [] newZombie;
    std::cout << "Hey but.. ? They just all died ?" << std::endl;
}

std::string ZombieHorde::getName()
{
    int randomName;
    std::string names[10] = {"Perx", "Osku", "Retga", "Arpi", "Kou", "Marh", "Zare", "Derf", "Noui", "Ikrou"};

    srand(time(NULL));
    randomName = rand() % 10;
    return (names[randomName]);
}

std::string ZombieHorde::getType()
{
    int randomType;
    std::string types[10] = {"Runner", "Voodoo Zombie", "Ghoul", "Screamer", "Stalker", "Exploder", "Armored", "Tank", "Animal Zombie", "King of Zombies"};

    srand(time(NULL));
    randomType = rand() % 10;
    return (types[randomType]);
}
