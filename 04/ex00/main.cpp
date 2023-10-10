/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:35 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/10 19:00:08 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "main.hpp"

int main()
{
    // Animal* meta = new Animal();
    // Animal* j = new Dog();
    Animal* a = new Animal();
    Animal* i = new Dog();
    Animal* cat = new Cat();

    Animal *c = (Animal *)i;
    Animal *cPtr = (Animal *)cat;

    std::cout << i->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << cPtr->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;

    
    i->makeSound(); 
    c->makeSound(); 
    cPtr->makeSound(); 
    a->makeSound(); 
}