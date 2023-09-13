/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:48 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:49 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
    #define HARL_HPP

    #include "main.hpp"
    
    class Harl
    {
        public: 
            Harl();
            void complain( std::string name );

        private:
            void debug(void);
            void info(void);
            void warning(void);
            void error(void);
            
    };
    
    typedef void (Harl::* fct_ptr)(void);
    
#endif