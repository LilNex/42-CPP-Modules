/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:57:40 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/14 23:11:02 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
    this->_value = (1 * (value << this->_fractionnal_bits));
}

Fixed::Fixed(const float value)
{
    this->_value = (static_cast<int>(value * (1 << this->_fractionnal_bits)));
}

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}


std::ostream& operator<<(std::ostream& out, Fixed const &obj)
{
    out << obj.toFloat();
    return out;
}


int Fixed::toInt(void) const
{
    return ((this->_value >> this->_fractionnal_bits));
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_value) ) / (1 << this->_fractionnal_bits);
}

Fixed::~Fixed() {}

void Fixed::operator=(Fixed const &obj)
{
    if (this != &obj)
        this->_value = obj.getRawBits();
}

bool Fixed::operator==(const Fixed &obj) const
{
    return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return !(*this == obj);
}
bool Fixed::operator>(const Fixed &obj) const
{
    return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
    return (this->getRawBits() < obj.getRawBits());
}
bool Fixed::operator>=(const Fixed &obj) const
{
    return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return (this->getRawBits() <= obj.getRawBits());
}

Fixed& Fixed::operator++()
{
    this->_value++;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return (tmp);
}

Fixed& Fixed::operator--()
{
    this->_value--;
    return (*this);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}