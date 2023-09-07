/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:55:25 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/06 12:58:53 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
        }
        std::cout << std::endl;
    } else std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}