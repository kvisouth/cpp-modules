#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];    
        int index;
        const int max;
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
};


#endif