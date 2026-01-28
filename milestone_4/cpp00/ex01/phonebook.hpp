/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:41:56 by mafagina          #+#    #+#             */
/*   Updated: 2025/09/29 16:41:57 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	int		contacts_number;
	int		size;
public:
	Phonebook();
	void	addContact();
	void	searchContact();
};

#endif