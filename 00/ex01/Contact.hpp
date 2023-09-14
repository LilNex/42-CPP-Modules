/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:18 by ichaiq            #+#    #+#             */
/*   Updated: 2023/09/13 15:40:19 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
    #define CONTACT_HPP
    
    #include <iostream>

    class Contact
    {
        public:
            int getIndex();
            std::string getPhonenumber();
            std::string getFirstName();
            std::string getLastName();
            std::string getNickname();
            std::string getDarkSecret();
            void setIndex(int value);
            bool setFirstName(std::string value);
            bool setLastName(std::string value);
            bool setPhonenumber(std::string value);
            bool setNickname(std::string value);
            bool setDarkSecret(std::string value);
            void ShowDetails();
            Contact();
            ~Contact();

        private:
            int _index;
            std::string _firstName;
            std::string _lastName;
            std::string _phonenumber;
            std::string _nickname;
            std::string _darkSecret;
    };


#endif
