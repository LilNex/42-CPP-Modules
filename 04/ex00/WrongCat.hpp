/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:28:56 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:05:13 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
    #define WRONGCAT_HPP

    #include "WrongAnimal.hpp"

    class WrongCat : public WrongAnimal
    {
        protected:
        
        public:
            WrongCat     ();
            WrongCat     (const WrongCat &obj);
            ~WrongCat    ();
            void    operator=(const WrongCat &obj);
            void    makeSound() const;

    };

# endif