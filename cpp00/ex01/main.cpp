# include "phonebook.hpp"

int main()
{
    int         how_many_contact;
    std::string str;
    Phonebook   phonebook;

    how_many_contact = 0;
    std::cout << "\nWelcome to your phonebook!" << std::endl;
    while (1)
    {
        std::cout << "\nWhat do you want to do? ADD, SEARCH or EXIT?" << std::endl;
        std::cout << "=> ";
        getline(std::cin, str);
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
        else if (str == "SEARCH")
        {
            phonebook.ShowContact(how_many_contact);
            phonebook.SearchContact(how_many_contact);
        }
        else if (str == "EXIT")
        {
            std::cout << "\nYou left the phonebook.\nGoodbye!" << std::endl;
            return (0);
        }
        else
            std::cout << "\nYou typed something wrong." << std::endl;
    }
    return (0);
}