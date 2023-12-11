#include "phonebook.hpp"
#include "contact.hpp"

// Constructor of Contact
Contact::Contact()
{}

// Destructor of Contact
Contact::~Contact()
{}

// 'ADD' command
void Contact::add(void)
{
    while (firstname.empty())
    {
        std::cout << "First name : ";
        std::getline(std::cin, firstname);
    }
    while (lastname.empty())
    {
        std::cout << "Last name : ";
        std::getline(std::cin, lastname);
    }
    while (nickname.empty())
    {
        std::cout << "Nickname : ";
        std::getline(std::cin, nickname);
    }
    while (phonenumber.empty())
    {
        std::cout << "Phone number : ";
        std::getline(std::cin, phonenumber);
    }
    while (darkestsecret.empty())
    {
        std::cout << "Darkest secret : ";
        std::getline(std::cin, darkestsecret);
    }
    std::cout << "First name: " << firstname << std::endl;
    std::cout << "Last name: " << lastname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phonenumber << std::endl;
    std::cout << "Darkest secret: " << darkestsecret << std::endl;
}