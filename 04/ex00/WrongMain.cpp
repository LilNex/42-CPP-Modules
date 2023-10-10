/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongMain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:05:44 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:16:09 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

int main()
{
    WrongAnimal *animal = new WrongAnimal();
    WrongCat    *cat = new WrongCat();

    WrongAnimal *aPtr = animal;
    WrongAnimal *cPtr = cat;

    std::cout << aPtr->getType() << std::endl;
    std::cout << cPtr->getType() << std::endl;
    
    
    aPtr->makeSound();
    cPtr->makeSound();

}