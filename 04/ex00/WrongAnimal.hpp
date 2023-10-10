/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:47 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:13:12 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONG_ANIMAL_HPP
    #define WRONG_ANIMAL_HPP

    #include <iostream>

    class WrongAnimal
    {
        private:

        protected:
            std::string type;
        public:
            WrongAnimal  ();
            WrongAnimal  (const WrongAnimal &obj);
            ~WrongAnimal ();

            void            operator=(const WrongAnimal &obj);
            std::string     getType();
            void            makeSound() const;


    };

# endif