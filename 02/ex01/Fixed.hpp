/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:57:28 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:57:29 by ichaiq           ###   ########.fr       */
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
            void operator=(Fixed const &obj);

            float   toFloat(void) const;
            int     toInt(void) const;

            int getRawBits(void) const;
            void setRawBits(int const raw);
    };
    std::ostream& operator<<(std::ostream& out, const Fixed &obj);
    
#endif