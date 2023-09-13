/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:32 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:33 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
    #define WEAPON_HPP

    #include <iostream>

    class Weapon
    {
        public:
            Weapon(std::string type);
            Weapon();
            ~Weapon(void);
            
            const std::string& getType();
            void setType(std::string value);


        private:
            std::string _type;
    };

#endif