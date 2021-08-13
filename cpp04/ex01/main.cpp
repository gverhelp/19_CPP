#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "\n***** My main : Default and Overload *****\n\n";
    Dog *dog1 = new Dog;
    Cat *cat1 = new Cat;
    Dog *dog2 = new Dog(*dog1);
    Cat *cat2 = new Cat(*cat1);

    delete dog1;
    delete cat1;
    delete dog2;
    delete cat2;

    std::cout << "\n***** My main : Default and Overload *****\n\n";
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