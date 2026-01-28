/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:41:49 by mafagina          #+#    #+#             */
/*   Updated: 2025/10/02 15:02:23 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string input;

	while(true)
	{
		std::cout << "Type input: ADD, SEARCH, EXIT \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		for (int i = 0; input[i]; i++)
			input[i] = (char)std::toupper(input[i]);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		if (input == "EXIT")
			break;
	}
	return (0);
}