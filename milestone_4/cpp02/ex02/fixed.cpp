/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <mafagina@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:18:16 by mafagina          #+#    #+#             */
/*   Updated: 2026/01/08 16:30:37 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = intValue << this->_fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(floatValue * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_fixedPointValue = copy.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_fixedPointValue) / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &copy) const {
    return this->_fixedPointValue > copy._fixedPointValue;
}

bool Fixed::operator<(const Fixed &copy) const {
    return this->_fixedPointValue < copy._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &copy) const {
    return this->_fixedPointValue >= copy._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &copy) const {
    return this->_fixedPointValue <= copy._fixedPointValue;
}

bool Fixed::operator==(const Fixed &copy) const {
    return this->_fixedPointValue == copy._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &copy) const {
    return this->_fixedPointValue != copy._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &copy) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue + copy._fixedPointValue);
    return result;
}

Fixed Fixed::operator-(const Fixed &copy) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue - copy._fixedPointValue);
    return result;
}

Fixed Fixed::operator*(const Fixed &copy) const {
    Fixed result;
    long temp = static_cast<long>(this->_fixedPointValue) * static_cast<long>(copy._fixedPointValue);
    result.setRawBits(static_cast<int>(temp >> this->_fractionalBits));
    return result;
}

Fixed Fixed::operator/(const Fixed &copy) const {
    Fixed result;
    long temp = (static_cast<long>(this->_fixedPointValue) << this->_fractionalBits) / static_cast<long>(copy._fixedPointValue);
    result.setRawBits(static_cast<int>(temp));
    return result;
}

Fixed &Fixed::operator++() {
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->_fixedPointValue++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->_fixedPointValue--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

