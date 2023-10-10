/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:29:02 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:11:35 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

 
WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "A new WrongCat has born !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
    std::cout << "A new WrongCat has copied !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "An WrongCat has died !" << std::endl;
}

void WrongCat::operator=(const WrongCat &obj)
{
    if (this != &obj)
        this->type = obj.type;
}

void WrongCat::makeSound() const
{
    std::cout << "MeowMeoow MFK !" << std::endl;
}
