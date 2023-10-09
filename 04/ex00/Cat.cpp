/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:29:02 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/09 16:46:12 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

 
Cat::Cat() : Animal()
{
    this->Animal::type = "Cat";
    this->type = "Cat";
    std::cout << "A new Cat has born !" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
    std::cout << "A new Cat has copied !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "An Cat has died !" << std::endl;
}

void Cat::operator=(const Cat &obj)
{
    if (this != &obj)
        this->type = obj.type;
}

void Cat::makeSound()
{
    std::cout << "MeowMeoow MFK !" << std::endl;
}
