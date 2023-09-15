/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:38 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/15 17:16:25 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
    #define DIAMOND_TRAP_HPP

    #include "FragTrap.cpp"
    #include "ScavTrap.cpp"

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