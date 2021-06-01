#include "phonebook.hpp"

Contact::Contact() {}

void Contact::setFirstName()
{
    std::cout << "First name : ";
    std::cin >> first_name;
}

void Contact::setLastName()
{
    std::cout << "Last name : ";
    std::cin >> last_name;
}

void Contact::setNickname()
{
    std::cout << "Nickame : ";
    std::cin >> nickmane;
}

void Contact::setLogin()
{
    std::cout << "Login : ";
    std::cin >> login;
}

void Contact::setPostalAdress()
{
    std::cout << "Postal address : ";
    std::cin >> postal_adress;
}

void Contact::setEmailAdress()
{
    std::cout << "Email adress : ";
    std::cin >> email_adress;
}

void Contact::setFavoriteMeal()
{
    std::cout << "Favorite Meal : ";
    std::cin >> favorite_meal;
}

void Contact::setUnderwearColor()
{
    std::cout << "Underwear color : ";
    std::cin >> underwear_color;
}

void Contact::setDarkestSecret()
{
    std::cout << "Darkest secret : ";
    std::cin >> darkest_secret;
}

void Contact::setPhoneNumber()
{
    std::cout << "Phone number : ";
    std::cin >> phone_number;
}

void Contact::setBirthdayDate()
{
    std::cout << "Birthday date : ";
    std::cin >> birthday_date;
}

std::string Contact::getFirstName() const
{
    return (first_name);
}

std::string Contact::getLastName() const
{
    return (last_name);
}

std::string Contact::getNickname() const
{
    return (nickmane);
}

std::string Contact::getLogin() const
{
    return (login);
}

std::string Contact::getPostalAdress() const
{
    return (postal_adress);
}

std::string Contact::getEmailAdress() const
{
    return (email_adress);
}

std::string Contact::getFavoriteMeal() const
{
    return (favorite_meal);
}

std::string Contact::getUnderwearColor() const
{
    return (underwear_color);
}

std::string Contact::getDarkestSecret() const
{
    return (darkest_secret);
}

std::string Contact::getPhoneNumber() const
{
    return (phone_number);
}

std::string Contact::getBirthdayDate() const
{
    return (birthday_date);
}

std::string Contact::setupFirstName()
{
    std::string new_FirstName;
    std::string space;
    int         count_space;

    count_space = 0;
    new_FirstName = first_name;
    if (new_FirstName.size() == 10)
        return (new_FirstName);
    else if (new_FirstName.size() < 10)
    {
        while (count_space + new_FirstName.size() < 10)
        {
            space += " ";
            count_space++;
        }
        std::cout << space;
    }
    else if (new_FirstName.size() > 10)
    {
        new_FirstName.erase(9, new_FirstName.size() - 9);
        new_FirstName.append(".");
    }
    return (new_FirstName);
}

std::string Contact::setupLastName()
{
    std::string new_LastName;
    std::string space;
    int         count_space;

    count_space = 0;
    new_LastName = last_name;
    if (new_LastName.size() == 10)
        return (new_LastName);
    else if (new_LastName.size() < 10)
    {
        while (count_space + new_LastName.size() < 10)
        {
            space += " ";
            count_space++;
        }
        std::cout << space;
    }
    else if (new_LastName.size() > 10)
    {
        new_LastName.erase(9, new_LastName.size() - 9);
        new_LastName.append(".");
    }
    return (new_LastName);
}

std::string Contact::setupNickname()
{
    std::string new_Nickname;
    std::string space;
    int         count_space;

    count_space = 0;
    new_Nickname = nickmane;
    if (new_Nickname.size() == 10)
        return (new_Nickname);
    else if (new_Nickname.size() < 10)
    {
        while (count_space + new_Nickname.size() < 10)
        {
            space += " ";
            count_space++;
        }
        std::cout << space;
    }
    else if (new_Nickname.size() > 10)
    {
        new_Nickname.erase(9, new_Nickname.size() - 9);
        new_Nickname.append(".");
    }
    return (new_Nickname);
}