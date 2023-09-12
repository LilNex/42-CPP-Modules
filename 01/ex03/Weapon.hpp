
#ifndef WEAPON_HPP
    #define WEAPON_HPP

    #include <iostream>

    class Weapon
    {
        public:
            Weapon(std::string type);
            Weapon();
            ~Weapon(void);
            
            const std::string& getType();
            void setType(std::string value);


        private:
            std::string _type;
    };

#endif