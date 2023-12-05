/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:52 by kvisouth          #+#    #+#             */
/*   Updated: 2023/12/05 18:27:40 by kvisouth         ###   ########.fr       */
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
    // std::cout << "Call ADD method" << std::endl;
    contacts[index].add();
}

// 'SEARCH' command
void PhoneBook::search(void)
{
    std::cout << "Call SEARCH method" << std::endl;
}