/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:50 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:51 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.hpp"


int main()
{
    Harl harl;
    std::string line;
    do
    {
        std::cout << "Enter log level : ";
        std::getline(std::cin, line);
        harl.complain(line);
    }
    while (std::cin.good());
    return (0);
}
