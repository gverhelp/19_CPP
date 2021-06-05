#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    Name[0] = "Hamtaro";
    Name[1] = "Sam";
    Name[2] = "Ichigo";
    Name[3] = "Sasuke";
    Name[4] = "Steve";

    Type[0] = "Runner";
    Type[1] = "Voodoo Zombie";
    Type[2] = "Ghoul";
    Type[3] = "Screamer";
    Type[4] = "Stalker";
    Type[5] = "Exploder";
    Type[6] = "Armored";
    Type[7] = "Tank";
    Type[8] = "Animal Zombie";
    Type[9] = "";
}

ZombieEvent::~ZombieEvent() {}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie(name);

    std::cout << "Nice! Welcome to you, Mr." << name << "." << std::endl;
    return (newZombie);
}

void ZombieEvent::randomChump()
{
    int randomName;
    int randomType;

    srand(time(NULL));
    randomName = rand() % 5;
    srand(time(NULL));
    randomType = rand() % 9;

    Zombie newZombie(Name[randomName], Type[randomType]);

    newZombie.advert();
}

int ZombieEvent::setZombieType(Zombie &newZombie)
{
    std::cout << "Chose one of these types to finish to create your new Zombie:" << std::endl;
    for (int a = 0; a <= 8; a++)
        std::cout << Type[a] << std::endl;
    std::cout << "=> ";
    if (!getline(std::cin, Type[9]))
        return (-1);
    while (Type[9] == "" || !checkType(Type[9]))
    {
        std::cout << "=> ";
        if (!getline(std::cin, Type[9]))
            return (-1);
    }
    std::cout << "Your new Zombie will be a(n) " << Type[9] << "." << std::endl;
    newZombie.setType(Type[9]);
    return (0);
}

bool ZombieEvent::checkType(std::string type)
{
    for (int a = 0; a <= 8; a++)
        if (type == Type[a])
            return (true);
    return (false);
}