/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:02 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:40:03 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


// void f()
// {
//     system("leaks morebrainz");
// }



int main()
{
    // atexit(f);
    Zombie *zn2 = zombieHorde(5, "znnnnn");

    for (int i = 0; i < 5; i++)
        zn2[i].announce();
    delete[] zn2;
}