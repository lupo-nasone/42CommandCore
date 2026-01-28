/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:35:43 by mafagina          #+#    #+#             */
/*   Updated: 2025/10/02 15:01:02 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << static_cast<char>(toupper((argv[i][j])));
	}
	std::cout << "\n";
	return (0);
}