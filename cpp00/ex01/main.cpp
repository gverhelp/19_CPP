# include "phonebook.hpp"

int main()
{
    int         how_many_contact;
    std::string str;
    Phonebook   phonebook;

    how_many_contact = 0;
    std::cout << "\nWelcome to your phonebook!" << std::endl;
    std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
    while (std::cin >> str)
    {
        if (str == "ADD")
        {
            if (how_many_contact < 8)
            {
                how_many_contact++;
                std::cout << "You have chosen to add a contact." << std::endl;
                phonebook.AddContact(how_many_contact);
                std::cout << "\nContact well registered!" << std::endl;
            }
            else
            {
                std::cout << "Something wrong happened." << std::endl;
                std::cout << "You have already added 8 contacts. There's no more memory left in your phone." << std::endl;
            }
            std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
        }
        else if (str == "affiche")
        {
            phonebook.SearchContact(1);
        }
        else if (str == "SEARCH")
        {
            std::cout << "Here's the list of your contacts." << std::endl;
            std::cout << "Wich contact do you want to look for? Type his index." << std::endl;
        }
        else if (str == "EXIT")
        {
            std::cout << "You left the phonebook.\nGoodbye!" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "You wrote something wrong." << std::endl;
            std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
        }
    }
    return (0);
}