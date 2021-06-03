#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
    public:
        Contact();

        int setFirstName();
        int setLastName();
        int setNickname();
        int setLogin();
        int setPostalAdress();
        int setEmailAdress();
        int setFavoriteMeal();
        int setUnderwearColor();
        int setDarkestSecret();
        int setPhoneNumber();
        int setBirthdayDate();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getLogin() const;
        std::string getPostalAdress() const;
        std::string getEmailAdress() const;
        std::string getFavoriteMeal() const;
        std::string getUnderwearColor() const;
        std::string getDarkestSecret() const;
        std::string getPhoneNumber() const;
        std::string getBirthdayDate() const;

        std::string setupFirstName();
        std::string setupLastName();
        std::string setupNickname();

    private:
        std::string first_name;
        std::string _last_name;
        std::string nickmane;
        std::string login;
        std::string postal_adress;
        std::string email_adress;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
        std::string phone_number;
        std::string birthday_date;
};

#endif