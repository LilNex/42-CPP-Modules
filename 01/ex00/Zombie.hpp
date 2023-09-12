#ifndef ZOMBIE_HPP
    #define ZOMBIE_HPP

    #include <iostream>
    #include <sstream>

    class Zombie
    {
        public:
            Zombie(std::string);
            ~Zombie(void);
            void announce(void);

        private:
            std::string _name;
    };
    
    Zombie* newZombie( std::string name );

#endif