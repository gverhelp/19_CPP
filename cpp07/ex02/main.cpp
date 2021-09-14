#include "Array.hpp"

int main()
{
    unsigned int myLen;

    std::cout << "Type the size of the Array :" << std::endl;
    std::cin >> myLen;

    Array<int> myArray(myLen);

    std::cout << "Size of the array: " << myArray.size() << std::endl;
    std::cout << "Creation of the array (initialized with 0):" << std::endl;
    for (unsigned int a = 0; a < myLen; a++)
    {
        std::cout << myArray[a] << std::endl;
        myArray[a] = a;
    }

    std::cout << "Content of the Array :" << std::endl;
    for (unsigned int a = 0; a < myLen; a++)
        std::cout << myArray[a] << std::endl;

    std::cout << "Throw the exception:" << std::endl;
    try
    {
        std::cout << myArray[myLen + 1] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}