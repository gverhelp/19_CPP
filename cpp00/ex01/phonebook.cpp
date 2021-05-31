#include "phonebook.hpp"

Phonebook::Phonebook() {}

void Phonebook::AddContact(int id_contact)
{
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
}

void Phonebook::ShowContact()
{

}

void Phonebook::SearchContact(int id_contact)
{
    std::cout << "First name : " << contact[id_contact].getFirstName() << std::endl;
    std::cout << "Last name : " << contact[id_contact].getLastName() << std::endl;
    std::cout << "Nickname : " << contact[id_contact].getNickname() << std::endl;
    std::cout << "Login : " << contact[id_contact].getLogin() << std::endl;
    std::cout << "Postal adress : " << contact[id_contact].getPostalAdress() << std::endl;
    std::cout << "Email Adress : " << contact[id_contact].getEmailAdress() << std::endl;
    std::cout << "Phone number : " << contact[id_contact].getPhoneNumber() << std::endl;
    std::cout << "Birthday date : " << contact[id_contact].getBirthdayDate() << std::endl;
    std::cout << "Favorite Meal : " << contact[id_contact].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color : " << contact[id_contact].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : " << contact[id_contact].getDarkestSecret() << std::endl;
}