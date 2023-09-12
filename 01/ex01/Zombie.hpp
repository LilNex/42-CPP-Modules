#ifndef ZOMBIE_HPP
    #define ZOMBIE_HPP

    #include <iostream>
    #include <sstream>

    class Zombie
    {
        public:
            Zombie(std::string);
            Zombie(void);
            ~Zombie(void);
            void announce(void);
            void setName(std::string name);

        private:
            std::string _name;
    };
    
    Zombie* zombieHorde( int N, std::string name );

#endif