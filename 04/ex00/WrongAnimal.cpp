/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:39:53 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:04:15 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("undefined")
{
    std::cout << "A WrongAnimal has born !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
    std::cout << "A WrongAnimal has copied !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "A WrongAnimal has died !" << std::endl;
}

void WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this != &obj)
        this->type = obj.type;
}

std::string WrongAnimal::getType()
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "..." << std::endl;
}
