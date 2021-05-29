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
    contact[id_contact].getFirstName();
    contact[id_contact].getLastName();
    contact[id_contact].getNickname();
    contact[id_contact].getLogin();
    contact[id_contact].getPostalAdress();
    contact[id_contact].getEmailAdress();
    contact[id_contact].getPhoneNumber();
    contact[id_contact].getBirthdayDate();
    contact[id_contact].getFavoriteMeal();
    contact[id_contact].getUnderwearColor();
    contact[id_contact].getDarkestSecret();
}