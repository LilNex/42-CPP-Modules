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
            void setPhonenumber(std::string value);
            void setNickname(std::string value);
            void setDarkSecret(std::string value);
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
