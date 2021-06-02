# include "phonebook.hpp"

int main()
{
    std::string str;
    Phonebook   phonebook;

    std::cout << "\nWelcome to your phonebook!" << std::endl;
    while (1)
    {
        std::cout << "\nWhat do you want to do? ADD, SEARCH or EXIT?" << std::endl;
        std::cout << "=> ";
        getline(std::cin, str);
        if (str == "ADD")
            phonebook.AddContact();
        else if (str == "SEARCH")
        {
            if (phonebook.getNbrContact() == 0)
                std::cout << "\nYour phonebook is empty." << std::endl;
            else
            {
                phonebook.ShowContact();
                phonebook.SearchContact();
            }
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