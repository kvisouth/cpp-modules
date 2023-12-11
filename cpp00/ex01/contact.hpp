#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phonebook.hpp"

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        int index;
    public:
        Contact();
        ~Contact();
        void create_contact(int i);

};

#endif