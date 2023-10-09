# ifndef ANIMAL_HPP
    #define ANIMAL_HPP

    #include <iostream>

    class Animal
    {
        private:

        protected:
            std::string type;
        public:
            Animal  ();
            Animal  (const Animal &obj);
            ~Animal ();

            void            operator=(const Animal &obj);
            std::string     getType();
            virtual void            makeSound();


    };

# endif