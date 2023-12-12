/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:52 by kvisouth          #+#    #+#             */
/*   Updated: 2023/12/12 13:38:33 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//Constructor of PhoneBook
PhoneBook::PhoneBook(void)
{}

//Destructor of PhoneBook
PhoneBook::~PhoneBook(void)
{}

// 'ADD' command
void PhoneBook::add(void)
{
	static int index;
	this->contacts[index % 8].create_contact(index % 8);
	index++;
}

// 'SEARCH' command
void PhoneBook::search(void)
{
	std::cout << std::endl;
	std::cout << "  index   |first name|last name | nickname " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		this->contacts[i].print_contacts();
	}
	std::cout << std::endl;
	std::string input = "";
	std::cout << "Enter index for more information on the contact: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	if (input.length() == 1 && isdigit(input[0]))
	{
		std::cout << "I'll print the contact with index " << input << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}