/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:39:53 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/04 18:39:54 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "An animal has born !" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
    std::cout << "An animal has copied !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "An animal has died !" << std::endl;
}

void Animal::operator=(const Animal &obj)
{
    this->type = obj.type;
}