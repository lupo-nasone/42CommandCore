/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:21:10 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/25 17:21:11 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *arr;
//     size_t num_elements = 5;
//     arr = (int *)ft_calloc(num_elements, sizeof(int));
// 	size_t i = 0;
//     while (i < num_elements) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
// 		i++;
//     }
//     free(arr);
//     return 0;
// }
