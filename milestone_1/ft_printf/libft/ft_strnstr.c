/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@studenti.42firenze.it>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:25 by mafagina          #+#    #+#             */
/*   Updated: 2024/12/05 16:25:31 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i <= len)
	{
		c = 0;
		while (big[i + c] == little[c] && big[i + c] != '\0' && i + c < len)
			c++;
		if (little[c] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int     main()
// {
// 	char    str[] = "oh no not the empty string !";
// 	char    find[] = "";
// 	printf("%s", ft_strnstr(str, find, 0));
// }
