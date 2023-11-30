/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:27:19 by kvisouth          #+#    #+#             */
/*   Updated: 2023/11/30 17:05:15 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Expected behavior:

$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>

*/

#include <iostream>

int main(int ac, char **av)
{
	// If there is no arguments after ./megaphone, it prints this.
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	// If there is arguments after ./megaphone, it prints them in uppercase using 'toupper' on each character.
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]); 
		}
	}
	std::cout << std::endl; // This 'cout' is to print a new line.
	return 0;
}

/*

printf is forbidden in the cpp modules to force us to print with std::cout
what is std::cout ?

std is a namespace in C++ that contains many standard C++ functions and objects.
Namespaces are used to organize code elements and prevent naming collisions.

:: is the scope resolution operator in C++.
It's used to access items within namespaces or classes.
In this case, std:: is used to specify that cout is part of the std namespace.

cout is an output stream object in C++ from the iostream library,
used to display output to the console. It's an instance of the ostream class.

<< is the insertion operator in C++. It's used to insert data into the output stream.
In this case, a string litteral is being inserted into the cout object.

Which results in the string being printed to the console.

*/