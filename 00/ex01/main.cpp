/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:30:07 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/07 17:33:13 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string ReadPrompt()
{
    std::string line;
    std::getline(std::cin, line);
    if (!std::cin.good())
    {
        std::exit(1);
        std::cout << std::endl;
        return "";  
    }
    return line;
}
void f()
{
    system("leaks phonebook");
}

int main()
{
    PhoneBook pb;

    //atexit(f);
    pb.id_counter = 0;
    pb.ShowWelcomeMessage();
    while (pb.WaitPrompt())
        ;
    
    
    
}