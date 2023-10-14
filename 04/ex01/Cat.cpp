/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:29:02 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 03:18:45 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

 
Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "A new Cat has born !" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
    std::cout << "A new Cat has copied !" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "An Cat has died !" << std::endl;
}

void Cat::operator=(const Cat &obj)
{
    if (this == &obj)
        return;
    this->type = obj.type;
    if (this->_brain && obj._brain)
        *this->_brain = *obj._brain;
}

void Cat::makeSound() const
{
    std::cout << "MeowMeoow MFK !" << std::endl;
}
