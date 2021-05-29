#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    public:
        Phonebook();
        void AddContact(int id_contact);
        void ShowContact();
        void SearchContact(int id_contact);

    private:
        Contact contact[8];
};

#endif