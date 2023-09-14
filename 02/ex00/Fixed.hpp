/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:57:14 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:57:15 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
    #define FIXED_HPP

    #include <iostream>

    class Fixed
    {
        private:
            int _value;
            static const int _fractionnal_bits = 8;
        public:
            Fixed();
            ~Fixed();
            Fixed(const Fixed &obj);
            void operator=(Fixed const &obj);

            int getRawBits(void) const;
            void setRawBits(int const raw);
    };
    
#endif