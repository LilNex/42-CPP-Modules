/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:51 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:40:52 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
    #define ZOMBIE_HPP

    #include <iostream>
    #include <sstream>

    class Zombie
    {
        public:
            Zombie(std::string);
            ~Zombie(void);
            void announce(void);

        private:
            std::string _name;
    };
    
    Zombie* newZombie( std::string name );

#endif