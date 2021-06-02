#include "phonebook.hpp"

Phonebook::Phonebook()
{
    nbr_contact = 0;
}

void Phonebook::AddContact()
{
    if (nbr_contact < 8)
    {
        std::cout << "\nYou have chosen to add a contact.\n" << std::endl;
        contact[nbr_contact].setFirstName();
        contact[nbr_contact].setLastName();
        contact[nbr_contact].setNickname();
        contact[nbr_contact].setLogin();
        contact[nbr_contact].setPostalAdress();
        contact[nbr_contact].setEmailAdress();
        contact[nbr_contact].setPhoneNumber();
        contact[nbr_contact].setBirthdayDate();
        contact[nbr_contact].setFavoriteMeal();
        contact[nbr_contact].setUnderwearColor();
        contact[nbr_contact].setDarkestSecret();
        nbr_contact++;
        std::cout << "\nContact well registered!\n" << std::endl;
    }
    else
    {
        std::cout << "\nSomething wrong happened." << std::endl;
        std::cout << "You have already added 8 contacts. There's no more memory left in your phone." << std::endl;
        return ;
    }
    
}

void Phonebook::ShowContact()
{
    Phonebook phonebook;
    int a;

    a = 0;
    std::cout << "\nHere's the list of your contacts." << std::endl;
    std::cout << " |First Name| Last Name|  Nickname" << std::endl;
    while (a < nbr_contact)
    {
        std::cout << a + 1 << "|" << contact[a].setupFirstName() << "|" << contact[a].setupLastName() << "|" << contact[a].setupNickname() << std::endl;
        a++;
    }
}

void Phonebook::SearchContact()
{
    std::string ind;
    int index;

    index = 0;
    std::cout << "\nWich contact do you want to look for? Type his index." << std::endl;
    std::cout << "=> ";
    getline(std::cin, ind);
    std::stringstream ss;
    ss << ind;
    ss >> index;
    if (index > nbr_contact || index == 0)
    {
        std::cout << "\nThe index you typed is not valid." << std::endl;
        return ;
    }
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

int Phonebook::getNbrContact() const
{
    return (nbr_contact);
}