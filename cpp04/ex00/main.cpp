#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal *a = new WrongAnimal();
    const WrongAnimal *b = new WrongCat();

    a->makeSound();
    b->makeSound();

    delete meta;
    delete j;
    delete i;
    delete a;
    delete b;
}