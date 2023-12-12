/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:37 by kvisouth          #+#    #+#             */
/*   Updated: 2023/12/12 13:15:04 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <string>

int main()
{
	PhoneBook phonebook;
	std::string input = "";
	std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;

		for (int i = 0; i < input.length(); i++)
			input[i] = toupper(input[i]);

		if (input == "EXIT")
			break;

		else if (input == "ADD")
			phonebook.add();
		
		else if (input == "SEARCH")
			phonebook.search();
		
		else
			std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;

	}
	std::cout << std::endl;
	return 0;
}