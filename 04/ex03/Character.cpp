/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:45:31 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 23:40:23 by ichaiq           ###   ########.fr       */
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

Character::Character(std::string name)
{
    this->name = name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
}

void Character::operator=(const Character &obj)
{
    if (this == &obj)
        return;
    this->name = obj.name;
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
    if (m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m)
        {
            std::cout << this->getName() <<" has already the " << m->getType() << " equipped." << std::cout;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout << m->getType() << " is equipped at slot "<< i << std::endl;
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
            delete this->inventory[idx];
            this->inventory[idx] = NULL;
            std::cout << "Material dropped from slot "<< idx << std::endl;
        }
        else 
            std::cout << "Slot " << idx << " is empty." << std::endl;
    }
    else std::cout << "Index given out of range" << std::endl;
    
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
            this->inventory[idx]->use(target);
        else std::cout << "Nothing is equiped on slot " << idx << std::endl;
    }
    else std::cout << "Index given out of range" << std::endl;      
}