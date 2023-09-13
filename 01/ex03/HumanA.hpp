/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:21 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:22 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A_HPP
    #define HUMAN_A_HPP

    #include "Weapon.hpp"

    class HumanA
    {
        public:
            HumanA(std::string name, Weapon &weapon);
            ~HumanA(void);

            void attack();

        private:
            Weapon *_weapon;
            std::string _name;
    };

#endif