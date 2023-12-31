/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:17:48 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 22:32:03 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef ICE_HPP
 # define ICE_HPP

    #include "AMateria.hpp"
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