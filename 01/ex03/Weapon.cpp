/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:39:47 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:39:49 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon() : _type("undefined weapon") {}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
    return this->_type;
}

void Weapon::setType(std::string value)
{
    this->_type = value;
}
