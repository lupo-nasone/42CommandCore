/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:34 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:35 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = (unsigned char *)s;
	c = (unsigned char) c;
	i = 0;
	while ((str[i] != c) && (i + 1 < n))
		i++;
	if (str[i] == c && n != 0)
		return (&str[i]);
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     const char buffer[] = "Ciao, mondo!";
//     unsigned char byte_to_find = '1';
//     void *result = ft_memchr(buffer, byte_to_find, sizeof(buffer));
//     printf("%p\n", result);
// }
