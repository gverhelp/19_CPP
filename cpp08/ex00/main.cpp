#include "easyfind.hpp"

int main()
{
    std::cout << "\n----- Test 1 - Function found a number -----" << std::endl;
    try
    {
        std::vector<int> v1;
        for (int a = 0; a < 5; a++)
            v1.push_back(a);
        std::cout << easyfind(v1, 3) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 2 - Function didn't find a number (Exception) -----" << std::endl;
    try
    {
        std::vector<int> v1;

        for (int a = 0; a < 5; a++)
            v1.push_back(a);
        std::cout << easyfind(v1, 9) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 3 - Container is empty (Exception) -----" << std::endl;
    try
    {
        std::vector<int> v1;

        std::cout << easyfind(v1, 4) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}