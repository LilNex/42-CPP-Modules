
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon() : _type("undefined weapon") {}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
    return this->_type;
}

void Weapon::setType(std::string value)
{
    this->_type = value;
}
