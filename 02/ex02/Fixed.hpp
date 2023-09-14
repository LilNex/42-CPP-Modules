/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:57:43 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/14 21:39:24 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
    #define FIXED_HPP

    #include <iostream>
    #include <cmath>

    class Fixed
    {
        private:
            int _value;
            static const int _fractionnal_bits = 8;
        public:
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed &obj);
            Fixed();
            ~Fixed();
            void operator=(const Fixed &obj);

            int getRawBits(void) const;
            void setRawBits(int const raw);

            float   toFloat(void) const;
            int     toInt(void) const;

            /*       Comparaison operators           */

            bool operator==(const Fixed &obj) const;
            bool operator!=(const Fixed &obj) const;
            bool operator>(const Fixed &obj) const;
            bool operator<(const Fixed &obj) const;
            bool operator>=(const Fixed &obj) const;
            bool operator<=(const Fixed &obj) const;
            
            Fixed& operator++();
            Fixed operator++(int);
            Fixed& operator--();
            Fixed operator--(int);

            Fixed operator+(const Fixed &obj) const;
            Fixed operator-(const Fixed &obj) const;
            Fixed operator*(const Fixed &obj) const;
            Fixed operator/(const Fixed &obj) const;

            static Fixed& min(Fixed &a, Fixed &b);
            static Fixed& max(Fixed &a, Fixed &b);
            
            static const Fixed& min(const Fixed &a, const Fixed &b);
            static const Fixed& max(const Fixed &a, const Fixed &b);
            
    };
    std::ostream& operator<<(std::ostream& out, const Fixed &obj);
    
#endif