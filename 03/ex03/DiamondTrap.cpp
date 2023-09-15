/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:48:57 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/15 17:15:56 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() 
{
    std::cout << "A DiamondTrap " << this->_name << " has been consructed" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    this->FragTrap::_hit_point = 100;
    this->FragTrap::_energy_point = 100;
    this->FragTrap::_attack_damage = 30;
    std::cout << "A DiamondTrap " << this->_name << " has been consructed" << std::endl;

}

DiamondTrap::~DiamondTrap()
{
    std::cout << "A DiamondTrap has been destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    this->FragTrap::_name = obj.FragTrap::_name;
    this->FragTrap::_attack_damage = obj.FragTrap::_attack_damage;
    this->FragTrap::_hit_point = obj.FragTrap::_hit_point;
    this->FragTrap::_energy_point = obj.FragTrap::_energy_point;
    std::cout << "A DiamondTrap has been constructed" << std::endl;    
}

void DiamondTrap::operator=(const DiamondTrap &obj)
{
    if (this == &obj)
        return;
}