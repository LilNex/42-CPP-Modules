/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:13 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:14 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main()
{
    std::string value = "HI THIS IS BRAIN";

    std::string *stringPTR = &value;
    std::string &stringREF = value;

    std::cout << &value << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << value << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

}