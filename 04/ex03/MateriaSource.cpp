/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:07:52 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 16:29:42 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->materials[i] != NULL)
            delete this->materials[i];
}


void MateriaSource::operator=(const MateriaSource &obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj.materials[i] != NULL)
        {
            delete this->materials[i];
            this->materials[i] = obj.materials[i]->clone();
        }
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->materials[i] == NULL)
        {
            this->materials[i] = m;
            return;
        }
    }
    std::cout << "MateriaSource is full !" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materials[i]!= NULL && this->materials[i]->getType() == type)
            return (this->materials[i]->clone());
        
    }
    return NULL;
}