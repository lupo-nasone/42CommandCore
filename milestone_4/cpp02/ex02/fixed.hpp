/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:18:28 by mafagina          #+#    #+#             */
/*   Updated: 2026/01/08 16:11:02 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

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

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    bool operator>(const Fixed &copy) const;
    bool operator<(const Fixed &copy) const;
    bool operator>=(const Fixed &copy) const;
    bool operator<=(const Fixed &copy) const;
    bool operator==(const Fixed &copy) const;
    bool operator!=(const Fixed &copy) const;
    Fixed operator+(const Fixed &copy) const;
    Fixed operator-(const Fixed &copy) const;
    Fixed operator*(const Fixed &copy) const;
    Fixed operator/(const Fixed &copy) const;
    Fixed &operator++();       // Prefix increment
    Fixed operator++(int);     // Postfix increment
    Fixed &operator--();       // Prefix decrement
    Fixed operator--(int);     // Postfix decrement
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif