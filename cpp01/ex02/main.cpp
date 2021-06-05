#include "ZombieEvent.hpp"

int main()
{
//////////////////////////////////////////////// Zombie //////////////////////////////////////////////////
    std::cout << "\n/////////////////// Zombie ///////////////////\n" << std::endl;

    Zombie newZombie1("Garreth", "King of Zombies");
    newZombie1.advert();

///////////////////////////////////////////// Zombie Event ///////////////////////////////////////////////
    std::cout << "\n//////////////// Zombie Event ////////////////\n" << std::endl;

    std::string inputName;
    Zombie      *newZombie2;
    ZombieEvent newZombieEvent;

    std::cout << "Let's create a Zombie! First of all, give him a name." << std::endl;
    std::cout << "=> ";
    if (!getline(std::cin, inputName))
        return (-1);
    while (inputName == "")
    {
        if (!getline(std::cin, inputName))
            return (-1);
    }
    newZombie2 = newZombieEvent.newZombie(inputName);
    newZombie2->advert();
    std::cout << "Now, give him a type." << std::endl;
    newZombieEvent.setZombieType(*newZombie2);
    newZombie2->advert();
    delete newZombie2;

///////////////////////////////////////////// Random Zombie ///////////////////////////////////////////////
    std::cout << "\n//////////////// Random Zombie ////////////////\n" << std::endl;
    ZombieEvent randomZombie;
    randomZombie.randomChump();
    return (0);
}