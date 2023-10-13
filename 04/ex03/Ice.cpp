/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:22:40 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 22:46:38 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "An ice material is created" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
}

Ice::~Ice()
{
    std::cout << "An ice materia is destroyed" << std::endl;
    
}

void Ice::operator=(const Ice &obj)
{
    if (this == &obj)
        return;
}

Ice *Ice::clone() const
{
    return (new Ice());
}