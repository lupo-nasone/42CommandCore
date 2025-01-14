/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:50 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:51 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include <string.h>
// void to_uppercase(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// int main(void)
// {
// 	char str[] = "hello, world!";
// 	printf("Original string: %s\n", str);
// 	ft_striteri(str, to_uppercase);
// 	printf("Modified string: %s\n", str);
// 	return 0;
// }
