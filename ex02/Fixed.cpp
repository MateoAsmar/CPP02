/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:56:33 by masmar            #+#    #+#             */
/*   Updated: 2025/02/09 19:02:56 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()  : value(0) {}

Fixed::Fixed(const int intValue) {
	value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue) {
	value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const { return value; }
void Fixed::setRawBits(int const raw) { value = raw; }
float Fixed::toFloat() const { return (float)value / (1 << fractionalBits); }
int Fixed::toInt() const { return value >> fractionalBits; }

bool Fixed::operator>(const Fixed &other) const { return value > other.value; }
bool Fixed::operator<(const Fixed &other) const { return value < other.value; }

Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }

Fixed &Fixed::operator++() { value++; return *this; }
Fixed Fixed::operator++(int) { Fixed temp(*this); value++; return temp; }

Fixed &Fixed::min(Fixed &a, Fixed &b) { return a < b ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return a > b ? a : b; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
