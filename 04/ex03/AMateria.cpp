/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:33:52 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/12 00:40:53 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_type = "Material";
}

AMateria::AMateria(const AMateria &obj)
{
    this->_type = obj._type;
}


AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

std::string const & AMateria::getType() const 
{
    return this->_type;
}
