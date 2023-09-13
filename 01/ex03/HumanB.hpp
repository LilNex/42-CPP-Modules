/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:24 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:25 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B_HPP
    #define HUMAN_B_HPP

    #include "Weapon.hpp"

    class HumanB
    {
        public:
            HumanB(std::string name);
            ~HumanB(void);
            void attack();
            void setWeapon(Weapon &weapon);

        private:
            Weapon *_weapon;
            std::string _name;
    };

#endif