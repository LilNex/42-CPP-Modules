/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:45:31 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/12 01:17:21 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("unnamed")
{

}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character::~Character()
{
    
}

void Character::operator=(const Character &obj)
{
    if (this == &obj)
        return;
    this->name = obj.name
    for (size_t i = 0; i < 4; i++)
    {
        if (obj.inventory[i] != NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = obj.inventory[i]->clone();
        }
    }
    
}

std::string const &Character:: getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return;
        }
    }
    std::cout << "Inventory full ! Cannot equip." << std::endl;
}

void Character::unequip(int idx)
{
   
    if (idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
            std::cout << "Material dropped from slot "<< idx << std::endl;
        }
        else 
            std::cout << "Slot " << idx << " is empty." << std::endl;
    }
    else std::cout << "Index given out of range" << std::endl;
    
}

void Character::use(int idx, ICharacter &target)
{
    if (this->inventory[idx] != NULL)
    {
        if (this->inventory[idx]->getType() == "ice")
        else if (this->inventory[idx]->getType() == "cure")
    }
    else std::cout << "Nothing is equiped on slot " << idx << std::endl;
}