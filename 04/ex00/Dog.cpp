/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:20:08 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/09 16:46:03 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog() : Animal()
{
    this->Animal::type = "Dog";
    this->Dog::type = "Dog";
    std::cout << "A new dog has born !" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
    std::cout << "A new dog has copied !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "An Dog has died !" << std::endl;
}

void Dog::operator=(const Dog &obj)
{
    if (this != &obj)
        this->type = obj.type;
}

void Dog::makeSound()
{
    std::cout << "Wouf Wouf" << std::endl;
}