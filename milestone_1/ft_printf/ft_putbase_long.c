/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:56:12 by mafagina          #+#    #+#             */
/*   Updated: 2024/12/05 16:56:13 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(unsigned long n)
{
	if (!n)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (2);
}

int	ft_putbase_long(unsigned long n)
{
	unsigned long	temp;
	int				i;

	temp = n;
	i = ft_check(n);
	while (temp > 0)
	{
		temp /= 16;
		i++;
	}
	return (ft_conv(i, n, "0123456789abcdef"));
}
