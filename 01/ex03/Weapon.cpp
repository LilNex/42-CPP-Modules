
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::Weapon()
{
    this->_type = "none";
}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
    return this->_type;
}

void Weapon::setType(std::string value)
{
    this->_type = value;
}
