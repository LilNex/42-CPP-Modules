/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:35 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 03:18:15 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "main.hpp"

void f()
{
    system("leaks abstract");
}

void test1()
{
    Animal* animals[10];
    // Animal test;

    for (int i = 0; i < 10; i++) 
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
}


void test2()
{
    Dog dog1;
    Dog dog2;

    Cat cat1;
    Cat cat2;

    cat1.makeSound();
    cat1 = cat2;

    dog1.makeSound();
    dog1 = dog2;
}

int main()
{
    atexit(f);


    test2();

    
}