/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:38 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/16 00:29:21 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
    #define DIAMOND_TRAP_HPP
    

    #include "FragTrap.hpp"
    #include "ScavTrap.hpp"

    class DiamondTrap : public FragTrap, public ScavTrap
    {
        private:
            std::string _name;

        public:
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap(const DiamondTrap &obj);
            ~DiamondTrap();

            void        operator=(const DiamondTrap &obj);
            void        whoAmI();
            void        attack(std::string target);
                    
    };

#endif