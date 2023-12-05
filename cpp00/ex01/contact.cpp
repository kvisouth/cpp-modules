#include "phonebook.hpp"

// Constructor of Contact
Contact::Contact()
{}

// Destructor of Contact
Contact::~Contact()
{}

// 'ADD' command
void Contact::add(void)
{
    std::getline(std::cin, firstname);
    std::getline(std::cin, lastname);
    std::getline(std::cin, nickname);
    std::getline(std::cin, phonenumber);
    std::getline(std::cin, darkestsecret);
}