/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:09 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:10 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}
// #include <stdio.h>
// int main() {
//     char buffer[] = "ciao";
//     ft_bzero(buffer, sizeof(buffer));    
//     for (int i = 0; i < sizeof(buffer) - 1; i++) {
//         printf("%d ", buffer[i]);
//     }
//     return 0;
// }
