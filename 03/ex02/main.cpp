/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:13:44 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/02 00:45:26 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ClapTrap clap("ClapBot");
    ClapTrap clap("ClapBot");
    FragTrap trap;
    ScavTrap scav("ScavBot");

    clap.attack("Mes");
    trap.attack("Me");
    scav.attack("2222");

    trap.beRepaired(50);
}