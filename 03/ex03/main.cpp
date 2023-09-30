/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:13:44 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/30 01:57:20 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap trap("Scaaaaav");

    trap.attack("Me");
    trap.guardGate();
    trap.whoAmI();

    // trap.beRepaired(50);
}