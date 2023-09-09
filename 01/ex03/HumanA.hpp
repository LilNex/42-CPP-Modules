
#ifndef HUMAN_A_HPP
    #define HUMAN_A_HPP

    #include "Weapon.hpp"

    class HumanA
    {
        public:
            HumanA(std::string name, Weapon &weapon);
            void attack();

        private:
            Weapon *_weapon;
            std::string _name;
    };

#endif