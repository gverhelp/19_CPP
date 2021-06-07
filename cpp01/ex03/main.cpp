#include "ZombieHorde.hpp"
#include <string>

int main()
{
    int inputNbr;

    std::cout << "Hi, welcome to the Zombie Horde simulator. You will be able to create your own Horde of Zombies." << std::endl;
    std::cout << "How to do? Just tell me how much Zombies you want to have in your Horde! I'll do the rest." << std::endl;
    std::cout << "=> ";
    std::cin >> inputNbr;
    ZombieHorde newZombieHorde(inputNbr);
    newZombieHorde.announce();
    return (0);
}