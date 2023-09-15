/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:42:07 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/15 14:42:07 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout << "A ScavTrap " << this->_name << " has been consructed" << std::endl;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_attack_damage = 20;
    std::cout << "A ScavTrap " << this->_name << " has been consructed" << std::endl;

}

ScavTrap::~ScavTrap()
{
    std::cout << "A ScavTrap robot has been destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    this->_attack_damage = obj._attack_damage;
    this->_name = obj._name;
    this->_hit_point = obj._hit_point;
    this->_energy_point = obj._energy_point;
    std::cout << "A ScavTrap has been constructed" << std::endl;    
}

void ScavTrap::operator=(const ScavTrap &obj)
{
    if (this == &obj)
        return;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is guarding gate" << std::endl;
}

void    ScavTrap::attack(std::string target)
{
    if (this->_energy_point <= 0 || this->_hit_point <= 0)
    {
        std::cout << "ScavTrap can't do this !" << std::endl;
        return;
    }
    std::cout << "Scav " << this->_name << " is attacking " << target << " causing " << this->_attack_damage << " of damage" << std::endl;
    this->_energy_point--;
}
