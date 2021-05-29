#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
    public:
        Contact();

    private:
        std::string first_name;
        std::string last_name;
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