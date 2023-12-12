#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
};


#endif