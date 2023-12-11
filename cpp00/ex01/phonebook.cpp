/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:52 by kvisouth          #+#    #+#             */
/*   Updated: 2023/12/11 16:24:09 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//Constructor of PhoneBook
PhoneBook::PhoneBook(void) : max(8)
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
	for (int i = 0; i < 8; i++)
	{
		this->contacts[i].print_contacts();
	}
	std::cout << std::endl;
}