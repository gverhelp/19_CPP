#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    public:
        Phonebook();

        int AddContact();
        int SearchContact();
        int IsDigit(std::string str);
        void ShowContact();

        int getNbrContact() const;

    private:
        Contact contact[8];
        int     nbr_contact;
};

#endif