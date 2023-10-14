/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 00:56:33 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 03:16:21 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "New brain is thinking ..." << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "New copied brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain stopped working ..." << std::endl;
}

void Brain::operator=(const Brain &obj)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = obj._ideas[i];
}