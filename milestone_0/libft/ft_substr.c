/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:22:10 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:22:11 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s[start], len + 1);
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//     char sorgente[] = "Ciao, Mondo!";
//     printf("%s\n", ft_substr(sorgente, 6, 3));
//     return 0;
// }
