#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name (name) {}

HumanB::~HumanB()
{
}


void HumanB::attack()
{
    std::cout << this->_name << " attacks with their ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << "hands" << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}