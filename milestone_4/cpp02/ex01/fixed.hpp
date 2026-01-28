/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:18:19 by mafagina          #+#    #+#             */
/*   Updated: 2026/01/08 16:10:01 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>

class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif