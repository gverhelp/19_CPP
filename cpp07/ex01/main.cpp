#include "iter.hpp"

int main()
{
    std::cout << "----- Integer list -----" << std::endl;
    int integer[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::iter(integer, 10, ft_print);

    std::cout << "\n----- String list -----" << std::endl;
    std::string str[] = {"xd", "lol", "haha", "mdr"};
    ::iter(str, 4, ft_print);

    std::cout << "\n----- Char list -----" << std::endl;
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    ::iter(c, 6, ft_print);

    std::cout << "\n----- Float list -----" << std::endl;
    float floatNumber[] = {1.234f, 45.04f, 2.0f, 34.34f};
    ::iter(floatNumber, 4, ft_print);

    std::cout << "\n----- Address list -----" << std::endl;
    int integer2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::iter(&integer2, 10, ft_print);
    return (0);
}