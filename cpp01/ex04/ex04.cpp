#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;

    std::cout << "Normal string :\n";
    std::cout << brain << std::endl;
    std::cout << "\nPointeur :\n";
    std::cout << *brainPtr << std::endl;
    std::cout << "\nReference :\n";
    std::cout << brainRef << std::endl;
    return (0);
}