#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    public:
        Phonebook();

        void AddContact();
        void ShowContact();
        void SearchContact();

        int getNbrContact() const;

    private:
        Contact contact[8];
        int     nbr_contact;
};

#endif