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
                phonebook.AddContact(how_many_contact);
                how_many_contact++;
            }
            else
            {
                std::cout << "\nSomething wrong happened." << std::endl;
                std::cout << "You have already added 8 contacts. There's no more memory left in your phone." << std::endl;
            }
        }
        else if (str == "affiche")
        {
            phonebook.SearchContact(0);
        }
        else if (str == "SEARCH")
        {
            std::cout << "\nHere's the list of your contacts." << std::endl;
            phonebook.ShowContact(how_many_contact);
            std::cout << "\nWich contact do you want to look for? Type his index." << std::endl;
//            phonebook.SearchContact();
        }
        else if (str == "EXIT")
        {
            std::cout << "\nYou left the phonebook.\nGoodbye!" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "\nYou typed something wrong." << std::endl;
        }
        std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
    }
    return (0);
}