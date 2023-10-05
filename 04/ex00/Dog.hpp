# ifndef DOG_HPP
    #define DOG_HPP

    #include "main.hpp"

    class Dog : protected Animal
    {
        private:

        protected:
            std::string type;
        public:
            Dog();
            ~Dog();
            void    operator=(const Animal &obj);

    };

# endif