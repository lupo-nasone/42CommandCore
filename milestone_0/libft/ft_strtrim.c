/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:22:09 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:22:10 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	char		*dest;
	size_t		start;
	size_t		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	dest = ft_substr(s1, start, end - start + 1);
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	const char *str = "Ciao Mondoi";
// 	const char *set = "ciao";
// 	printf("%s", ft_strtrim(str, set));
// }
