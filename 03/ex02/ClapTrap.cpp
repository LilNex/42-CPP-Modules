/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:24:01 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/16 00:23:41 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("unnamed"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
    std::cout << "A ClapTrap " << this->_name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name("unnamed"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
    this->_name = name;
    std::cout << "A ClapTrap " << this->_name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    this->_attack_damage = obj._attack_damage;
    this->_name = obj._name;
    this->_hit_point = obj._hit_point;
    this->_energy_point = obj._energy_point;
    std::cout << "A ClapTrap has been constructed" << std::endl;    
}

ClapTrap::~ClapTrap() {
    std::cout << "A ClapTrap has been deconstructed" << std::endl;    
}

void ClapTrap::operator=(const ClapTrap &obj)
{
    if (this == &obj)
        return;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_point <= 0 || this->_hit_point <= 0)
    {
        std::cout << "ClapTrap can't do this !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_hit_point << " points of damage!" << std::endl;
    this->_energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_point -= amount;
    std::cout << "ClapTrap " << this->_name << " is taking a damage of " << amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_point <= 0 || this->_hit_point <= 0)
    {
        std::cout << "ClapTrap can't do this !" << std::endl;
        return;
    }
    this->_hit_point = amount;
    this->_energy_point--;
    std::cout << "ClapTrap " << this->_name << " is regenerating " << amount << " of hit points" << std::endl;
    
}


