#ifndef CLAP_TARP_HPP
# define CLAP_TARP_HPP

    #include <iostream>

    class ClapTrap
    {
        private:
            std::string _name;
            int         _hit_point;
            int         _energy_point;
            int         _attack_damage;

        public:
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(const ClapTrap &obj);
            ~ClapTrap();

            void        operator=(const ClapTrap &obj);
            
            void        attack(const std::string& target);
            void        takeDamage(unsigned int amount);
            void        beRepaired(unsigned int amount);

    };



#endif