/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/16 20:45:08 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {}

Fixed::Fixed(const float value) : fixedPointValue(roundf(value * (1 << fractionalBits))) {}

Fixed::Fixed(const Fixed &other) : fixedPointValue(other.fixedPointValue) {}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		fixedPointValue = other.fixedPointValue;
	}
	return (*this);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(fixedPointValue) / (1 << fractionalBits));
}

bool Fixed::operator>(const Fixed &other) const
{
	return (fixedPointValue > other.fixedPointValue);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (fixedPointValue < other.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (fixedPointValue >= other.fixedPointValue);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (fixedPointValue <= other.fixedPointValue);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (fixedPointValue == other.fixedPointValue);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (fixedPointValue != other.fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
	fixedPointValue += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed &Fixed::operator--()
{
	fixedPointValue -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}