/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 00:56:33 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/11 01:39:05 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
    #define BRAIN_HPP

    #include <iostream>

    class Brain
    {
        public:
            std::string _ideas[100];
            Brain();
            Brain(const Brain &obj);
            ~Brain();

            void operator=(const Brain &obj);
    
    };

#endif