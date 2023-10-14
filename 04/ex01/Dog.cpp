/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:20:08 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 03:18:41 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "A new dog has born !" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
    std::cout << "A new dog has copied !" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "An Dog has died !" << std::endl;
}

void Dog::operator=(const Dog &obj)
{
    if (this == &obj)
        return;
    this->type = obj.type;
    if (this->_brain && obj._brain)
        *this->_brain = *obj._brain;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}