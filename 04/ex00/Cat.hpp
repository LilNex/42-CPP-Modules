/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:28:56 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 18:59:23 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
    #define CAT_HPP

    #include "Animal.hpp"

    class Cat : public Animal
    {
        protected:
        
        public:
            Cat     ();
            Cat     (const Cat &obj);
            ~Cat    ();
            void    operator=(const Cat &obj);
            virtual void    makeSound() const;

    };

# endif