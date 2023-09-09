/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:42:08 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/09 13:36:51 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
    #define MAIN_HPP

    #include <iostream>
    #include <sstream>
    #include <fstream>

    class sed
    {
        public: 
            sed(char **av);
            void openfile();

        private:
            char *_filename;
            std::ifstream fileStream;
            std::ofstream outfileStream;
            std::string to_find;
            std::string replace;
            
            int calculate_lenght(std::string line);
            void replace_inline(std::string line);
    };
    
#endif