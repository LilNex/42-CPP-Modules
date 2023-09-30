/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:00:53 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/29 13:20:22 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
    #define SCAV_TRAP_HPP

    #include "ClapTrap.hpp"

    class ScavTrap : public virtual ClapTrap
    {
        private:

        public:
            ScavTrap();
            ScavTrap(const ScavTrap &obj);
            ScavTrap(std::string name);
            ~ScavTrap();

            void        operator=(const ScavTrap &obj);
            
            void    attack(std::string target);
            void    guardGate();
    };


#endif