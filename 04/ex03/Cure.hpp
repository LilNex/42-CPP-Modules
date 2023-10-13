/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:17:48 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 22:50:59 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CURE_HPP
 # define CURE_HPP

    #include "AMateria.hpp"
    class Cure : public AMateria
    {
        
        public:
            Cure();
            Cure(const Cure &obj);
            virtual     ~Cure ();
            
            void        operator=(const Cure &obj);    
            
            Cure* clone() const;


    };


#endif 