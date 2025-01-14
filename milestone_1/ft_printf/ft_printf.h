/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:56:11 by mafagina          #+#    #+#             */
/*   Updated: 2024/12/05 16:56:12 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *n, ...);
int	ft_putbase(unsigned long n, char *base);
int	ft_putbase_long(unsigned long n);
int	ft_conv(int i, unsigned long n, char *base);

#endif
