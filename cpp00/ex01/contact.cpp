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
			return ;
		firstname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Last name : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		lastname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		nickname = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		phonenumber = input;
	}
	input = "";
	while (input.empty())
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		darkestsecret = input;
	}
	index = i;
}

// Print all contacts
void Contact::print_contacts(void)
{
	if (firstname.empty() && lastname.empty() && nickname.empty() && phonenumber.empty() && darkestsecret.empty())
		return ;
	std::cout << "===============================" << std::endl;
	std::cout << "index : " << index + 1 << std::endl;
	std::cout << "First name : " << firstname << std::endl;
	std::cout << "Last name : " << lastname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
}