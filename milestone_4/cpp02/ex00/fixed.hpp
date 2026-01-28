/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:17:38 by mafagina          #+#    #+#             */
/*   Updated: 2026/01/08 16:09:28 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int					_fixedPointValue;
    static const int	_fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();
    int		getRawBits(void) const;
    void	setRawBits(int const raw);
};

#endif