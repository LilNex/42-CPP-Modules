/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:28:56 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/09 16:45:54 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
    #define CAT_HPP

    #include "Animal.hpp"

    class Cat : public Animal
    {
        protected:
            std::string type;
        public:
            Cat     ();
            Cat     (const Cat &obj);
            ~Cat    ();
            void    operator=(const Cat &obj);
            void    makeSound();

    };

# endif