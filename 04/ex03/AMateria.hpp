/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:10:55 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 22:45:42 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
    #define AMATERIA_HPP
    
    #include <iostream>


    class ICharacter;
    
    class AMateria
    {
        protected:
            std::string _type;
        
        public:
            AMateria();
            AMateria(const AMateria &obj);
            AMateria(std::string const & type);
            virtual     ~AMateria ();

            void operator=(const AMateria &obj);

            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };

    #include "ICharacter.hpp"
#endif