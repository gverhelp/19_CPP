# include "contact.hpp"
# include <iostream>

int main()
{
    std::string str;
    Contact cont{};

    std::cout << "What do you want to do? ADD a contact ? SEARCH someone? EXIT ?" << std::endl;
    while (std::cin >> str)
    {
        if (str == "ADD")
        {
            std::cout << "Add contact" << std::endl;
//            ft_add_contact(&contact);
        }
        else if (str == "SEARCH")
        {
            std::cout << "Search contact" << std::endl;
        }
        else if (str == "EXIT")
        {
            std::cout << "FINITO FRERO" << std::endl;
            return (0);
        }
        else
            std::cout << "What do you want to do? ADD a contact ? SEARCH someone? EXIT ?" << std::endl;
    }
    return (0);
}