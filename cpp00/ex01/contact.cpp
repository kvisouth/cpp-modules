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
	std::cout << std::setw(10) << index << "|";
	if (firstname.length() > 10)
		std::cout << firstname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << firstname << "|";
	if (lastname.length() > 10)
		std::cout << lastname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << lastname << "|";
	if (nickname.length() > 10)
		std::cout << nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << nickname;
	std::cout << std::endl;
}