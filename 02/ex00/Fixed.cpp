#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &obj)
{
    this->_value = obj.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}

void Fixed::operator=(Fixed const &obj)
{
    this->_value = obj.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}