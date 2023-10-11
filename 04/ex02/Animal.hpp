/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:47 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/11 01:49:47 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
    #define ANIMAL_HPP

    #include <iostream>
    #include "Brain.hpp"

    class Animal
    {
        private:

        protected:
            std::string type;
            Animal  ();
            Animal  (const Animal &obj);
            virtual ~Animal ();
        public:

            void            operator=(const Animal &obj);
            std::string     getType();
            virtual void            makeSound() const = 0;


    };

# endif