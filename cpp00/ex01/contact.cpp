#include "phonebook.hpp"
#include "contact.hpp"

// Constructor of Contact
Contact::Contact()
{}

// Destructor of Contact
Contact::~Contact()
{}

// 'ADD' command
void Contact::create_contact(int i)
{
	std::string input = "";
	while (input.empty())
	{
		std::cout << "First name : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		firstname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Last name : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		lastname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		nickname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		phonenumber = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		darkestsecret = input;
	}
	index = i;
}