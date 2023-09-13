/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:06 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:40:07 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
/*
void f()
{
    system("leaks brainz");
}
*/

int main()
{
    Zombie zn("test");

    Zombie *zn2 = new Zombie("zn2");

    zn.announce();

    zn2->announce();

    delete zn2;
}