/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:35 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/11 01:49:21 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "main.hpp"

void f()
{
    system("leaks Poly");
}

int main()
{
    atexit(f);


    Animal* animals[10];

    for (int i = 0; i < 10; i++) 
    {
        if (i % 2)
            animals[i] = new Animal();
        else
            animals[i] = new Cat();
    }

    // for (int i = 0; i < 10; i++) {
    //     delete animals[i];
    // }

    
}