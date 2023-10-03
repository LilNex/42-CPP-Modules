/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:13:44 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/02 23:26:06 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ClapTrap cl("clalap");
    ScavTrap trap("Scaaaaav");
    ScavTrap tr;

    tr.attack("ATarget");

    trap.attack("Me");
    cl.attack("Me");

    trap.beRepaired(50);
}