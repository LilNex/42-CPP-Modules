/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:42:07 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/03 17:22:14 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    std::cout << "A FragTrap " << this->_name << " has been constructed" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    std::cout << "A FragTrap " << this->_name << " has been constructed" << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << "A FragTrap has been destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
    std::cout << "A FragTrap has been constructed" << std::endl;    
}

void FragTrap::operator=(const FragTrap &obj)
{
    if (this == &obj)
        return;
    this->_name = obj._name;
    this->_attack_damage = obj._attack_damage;
    this->_hit_point = obj._hit_point;
    this->_energy_point = obj._energy_point;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap  "<< this->_name << "is doing a high five !" << std::endl;
}