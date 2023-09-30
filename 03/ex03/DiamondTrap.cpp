/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:48:57 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/30 01:58:51 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() 
{
    std::cout << "A DiamondTrap " << this->_name << " has been constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    this->ClapTrap::_name = name + "_clap_name";
    this->_hit_point = this->FragTrap::_hit_point;
    this->_energy_point = this->ScavTrap::_energy_point;
    std::cout << "fg ad : " << this->FragTrap::_attack_damage << std::endl;
    this->_attack_damage = this->FragTrap::_attack_damage;
    this->_name = name;
    std::cout << "A DiamondTrap " << this->_name << " has been constructed" << std::endl;

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


void DiamondTrap::attack(std::string target)
{
    std::cout << "hp : " << this->_hit_point << std::endl;
    std::cout << "ad : " << this->_attack_damage << std::endl;
    std::cout << "ep : " << this->_energy_point << std::endl;
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I'm " << this->_name << std::endl;
    std::cout << "AKA " << this->ClapTrap::_name << std::endl;
}