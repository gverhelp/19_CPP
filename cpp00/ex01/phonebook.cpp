#include "phonebook.hpp"

Phonebook::Phonebook() {}

void Phonebook::AddContact(int id_contact)
{
    std::cout << "\nYou have chosen to add a contact.\n" << std::endl;
    contact[id_contact].setFirstName();
    contact[id_contact].setLastName();
    contact[id_contact].setNickname();
    contact[id_contact].setLogin();
    contact[id_contact].setPostalAdress();
    contact[id_contact].setEmailAdress();
    contact[id_contact].setPhoneNumber();
    contact[id_contact].setBirthdayDate();
    contact[id_contact].setFavoriteMeal();
    contact[id_contact].setUnderwearColor();
    contact[id_contact].setDarkestSecret();
    std::cout << "\nContact well registered!\n" << std::endl;
}

void Phonebook::ShowContact(int id_contact)
{
    Phonebook phonebook;
    int a;

    a = 0;
    std::cout << "\nHere's the list of your contacts." << std::endl;
    while (a < id_contact)
    {
        std::cout << a + 1 << "|" << contact[a].setupFirstName() << "|" << contact[a].setupLastName() << "|" << contact[a].setupNickname() << std::endl;
        a++;
    }
}

void Phonebook::SearchContact(int id_contact)
{
    int index;
    (void)id_contact;

    index = 0;
    std::cout << "\nWich contact do you want to look for? Type his index." << std::endl;
    std::cout << "=> ";
    std::cin >> index;
//////////////////////////////// getline + gérer le fait de devoir mettre que des int
    std::cout << "\nHere is all the informations about the contact you asked for : \n" << std::endl;
    std::cout << "First name : " << contact[index - 1].getFirstName() << std::endl;
    std::cout << "Last name : " << contact[index -1].getLastName() << std::endl;
    std::cout << "Nickname : " << contact[index - 1].getNickname() << std::endl;
    std::cout << "Login : " << contact[index - 1].getLogin() << std::endl;
    std::cout << "Postal adress : " << contact[index - 1].getPostalAdress() << std::endl;
    std::cout << "Email Adress : " << contact[index - 1].getEmailAdress() << std::endl;
    std::cout << "Phone number : " << contact[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Birthday date : " << contact[index - 1].getBirthdayDate() << std::endl;
    std::cout << "Favorite Meal : " << contact[index - 1].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color : " << contact[index - 1].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : " << contact[index - 1].getDarkestSecret() << std::endl;
}