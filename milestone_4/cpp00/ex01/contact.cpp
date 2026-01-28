/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:41:37 by mafagina          #+#    #+#             */
/*   Updated: 2025/10/06 15:55:51 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setContact()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Address: ";
	std::getline(std::cin, address);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if ((firstName == "" || lastName == "" || phoneNumber == "" || address == "" || darkest_secret == "") && !std::cin.eof())
	{
		std::cout << "all field must be filled!" << std::endl;
		setContact();
	}
}

void	Contact::checkContact(int i)
{
	std::cout << std::setw(10) << i + 1 << "|"
				<< std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|"
				<< std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|" 
				<< std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
}

void	Contact::printContact()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}