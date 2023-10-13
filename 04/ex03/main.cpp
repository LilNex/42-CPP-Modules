/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:10:38 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/13 23:33:40 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int main()
// {
//     Ice *i = new Ice();
//     Cure *j = new Cure();
//     Character *mainChar = new Character("Batal");
//     Character *lambda = new Character("Zombie");

//     std::cout << i->getType() << std::endl;
//     std::cout << j->getType() << std::endl;
//     mainChar->equip(i);
//     mainChar->equip(j);
//     mainChar->use(0, *lambda);
    

    
// }



int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 9;
}