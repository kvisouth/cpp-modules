/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:37 by kvisouth          #+#    #+#             */
/*   Updated: 2023/12/04 18:30:44 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <string>

//Constructor of PhoneBook
PhoneBook::PhoneBook(void) : max(8)
{
}

int main()
{
    PhoneBook phonebook;
    std::string input = "";
    std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;
    while (1)
    {
        std::cout << "phonebook> ";
        // std::cin >> input;
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        for (int i = 0; i < input.length(); i++)
            input[i] = toupper(input[i]);
        if (input == "EXIT")
            break;

        else if (input == "ADD"){
            std::cout << "Call ADD method" << std::endl; }

        else if (input == "SEARCH"){
            std::cout << "Call SEARCH method" << std::endl; }
        
        else
            std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;

    }
    return 0;
}