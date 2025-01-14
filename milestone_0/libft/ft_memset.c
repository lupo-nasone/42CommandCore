/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:39 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:40 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p++ = c;
	}
	return (s);
}
// #include <stdio.h>
// int main() {
// 	char buffer[10];
// 	ft_memset(buffer, '0', sizeof(buffer));

// 	printf("Buffer dopo memset: %s\n", buffer);
// 	return 0;
// }