/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:37 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:40:37 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
    #define PHONEBOOK_HPP

    #include "main.hpp"
    
    class PhoneBook
    {
        public:
            int id_counter;
            std::string name;
            PhoneBook();
            void ShowWelcomeMessage();
            int WaitPrompt();
            void ShowListContacts();
            void SearchContact();

        private:
            Contact _contacts[8];
            int AddNewContact();
            int HandlePrompt(std::string prompt);
            void ShowContact(Contact contact);
            std::string getDisplayString(std::string name);
            void WriteColumn(std::string text);
            
    };

#endif
