#include "contact.hpp"

Contact::Contact()
{
    
}

void ft_add_contact(Contact *contact)
{
    std::cout << "First name ?" << std::endl;
    std::cin >> contact->first_name;
    std::cout << "Last name ?" << std::endl;
    std::cin >> contact->last_name;
    std::cout << "Nickame ?" << std::endl;
    std::cin >> contact->nickmane;
    std::cout << "Login ?" << std::endl;
    std::cin >> contact->login;
    std::cout << "Postal address ?" << std::endl;
    std::cin >> contact->postal_adress;
    std::cout << "Email adress ?" << std::endl;
    std::cin >> contact->email_adress;
    std::cout << "Phone number ?" << std::endl;
    std::cin >> contact->phone_number;
    std::cout << "Birthday date ?" << std::endl;
    std::cin >> contact->birthday_date;
    std::cout << "Favorite meal ?" << std::endl;
    std::cin >> contact->favorite_meal;
    std::cout << "Underwear color ?" << std::endl;
    std::cin >> contact->underwear_color;
    std::cout << "Darkest secret ?" << std::endl;
    std::cin >> contact->darkest_secret;
}