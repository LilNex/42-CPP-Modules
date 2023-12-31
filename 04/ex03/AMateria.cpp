/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:33:52 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 23:39:08 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_type = "Material";
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::~AMateria ()
{

}

void AMateria::operator=(const AMateria &obj)
{
    this->_type = obj._type;
}


std::string const & AMateria::getType() const 
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    if (this->getType() == "ice")
        std::cout << "* shots and ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->getType() == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}