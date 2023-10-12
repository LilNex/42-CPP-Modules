/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:17:48 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/12 00:58:42 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

# ifndef ICE_HPP
 # define ICE_HPP

    class Ice : public AMateria
    {
        
        public:
            Ice();
            Ice(const Ice &obj);
            virtual     ~Ice ();
            
            void        operator=(const Ice &obj);    
            
            Ice* clone() const;


    };


#endif 