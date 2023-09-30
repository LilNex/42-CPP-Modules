/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:00:53 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/29 13:22:46 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
    #define FRAG_TRAP_HPP

    #include "ClapTrap.hpp"

    class FragTrap : public virtual ClapTrap
    {
        private:

        public:
            FragTrap();
            FragTrap(const FragTrap &obj);
            FragTrap(std::string name);
            ~FragTrap();

            void        operator=(const FragTrap &obj);
            

            void    highFiveGuys(void);
    };


#endif