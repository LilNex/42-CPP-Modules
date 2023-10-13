/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:22:40 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 22:49:58 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "A cure material is created" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
}

Cure::~Cure()
{
    std::cout << "A cure materia is destroyed" << std::endl;
    
}

void Cure::operator=(const Cure &obj)
{
    if (this == &obj)
        return;
}

Cure *Cure::clone() const
{
    return (new Cure());
}