#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "\n***** My main *****\n\n";
    int size;
    int compt;

    compt = 0;
    std::cout << "How many Animals do you want?\n";
    std::cin >> size;
    
    Animal *animal[size];
    while (compt < size)
    {
        if (compt % 2)
            animal[compt] = new Cat();
        else
            animal[compt] = new Dog();
        compt++;
    }
    compt = 0;
    while (compt < size)
    {
        std::cout << "----- Animal : " << compt << " -----\n";
        std::cout << animal[compt]->getType() << std::endl;
        animal[compt]->makeSound();
        compt++;
    }
    compt = 0;
    while (compt < size)
    {
        delete animal[compt];
        compt++;
    }

    std::cout << "\n***** Given main *****\n\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //should not create a leak
    delete i;

}