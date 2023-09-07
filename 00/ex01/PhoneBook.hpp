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
        private:
            Contact _contacts[8];
            int AddNewContact();
            int HandlePrompt(std::string prompt);
            
    };

#endif
