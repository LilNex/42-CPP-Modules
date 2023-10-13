/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:46:20 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 23:00:27 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
 #define CHARACTER_HPP

    # include "ICharacter.hpp"


    class Character : public ICharacter
    {
        protected:
            AMateria *inventory[4];
            std::string name;

        public:
            Character();
            Character(std::string name);
            Character(const Character &obj);
            ~Character();

            void operator=(const Character &obj);


            virtual std::string const &getName() const;
            virtual void equip(AMateria* m);
            virtual void unequip(int idx);
            virtual void use(int idx, ICharacter& target);
    };

#endif 