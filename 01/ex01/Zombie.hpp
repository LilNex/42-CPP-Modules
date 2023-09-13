/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:03 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:04 by ichaiq           ###   ########.fr       */
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
            Zombie(void);
            ~Zombie(void);
            void announce(void);
            void setName(std::string name);

        private:
            std::string _name;
    };
    
    Zombie* zombieHorde( int N, std::string name );

#endif