# ifndef ANIMAL_HPP
    #define ANIMAL_HPP

    #include "main.hpp"

    class Animal
    {
        private:

        protected:
            std::string type;
        public:
            Animal();
            ~Animal();
            void    operator=(const Animal &obj);

    };

# endif