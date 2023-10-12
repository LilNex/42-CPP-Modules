/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:22:40 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/12 00:58:51 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
}

Ice::~Ice()
{
    
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