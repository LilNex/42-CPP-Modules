/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:29:43 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 23:41:50 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
    #define DOG_HPP

    #include "Animal.hpp"

    class Dog : public Animal
    {
        private:

        protected:
        
        public:
            Dog();
            Dog(const Dog &obj);
            virtual ~Dog();
            void    operator=(const Dog &obj);
            virtual void    makeSound() const;

    };

# endif