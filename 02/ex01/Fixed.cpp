/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:57:25 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:57:26 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = (1 * (value << this->_fractionnal_bits));
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (static_cast<int>(value * (1 << this->_fractionnal_bits)));
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
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
    return static_cast<float>(this->_value) / (1 << this->_fractionnal_bits);
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor called" << std::endl;
}

void Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assignement called" << std::endl;
    if (this != &obj)
        this->_value = obj.getRawBits();
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}