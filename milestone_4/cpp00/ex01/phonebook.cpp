/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:41:53 by mafagina          #+#    #+#             */
/*   Updated: 2025/10/02 15:14:39 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : contacts_number(0), size(0) {}

void	Phonebook::addContact()
{
    if (size == 8)
        std::cout << "Contact number " << (contacts_number + 1)
                  << " will be replaced with this one." << std::endl;
    contacts[contacts_number].setContact();
    contacts_number = (contacts_number + 1) % 8;
    if (size < 8)
        size++;
}

void	Phonebook::searchContact()
{
	int index;
	
	if (size == 0) {
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < size; i++)
		contacts[i].checkContact(i);
	std::cout << "Contact number: ";
	std::cin >> index;
	std::cin.ignore(); // to clear the newline character from the input buffer
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(2147483647, '\n');
		std::cout << "input is not a number" << std::endl;
	}
	else if (index <= 0 || index > size)
		std::cout << "invalid number" << std::endl;
	else
		contacts[index - 1].printContact();
}