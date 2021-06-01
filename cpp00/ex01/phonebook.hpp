#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    public:
        Phonebook();
        void AddContact(int id_contact);
        void ShowContact(int id_contact);
        void SearchContact(int id_contact);
        void SetupFirstName();

    private:
        Contact contact[7];
};

#endif