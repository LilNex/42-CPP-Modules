
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int Contact::getIndex()
{
    return this->_index;
}

std::string Contact::getFirstName()
{
    return this->_firstName;
}

std::string Contact::getLastName()
{
    return this->_lastName;
}

std::string Contact::getPhonenumber()
{
    return this->_phonenumber;
}

std::string Contact::getNickname()
{
    return this->_nickname;
}

std::string Contact::getDarkSecret()
{
    return this->_darkSecret;
}

void Contact::setIndex(int value)
{
    this->_index = value;
}

void Contact::setPhonenumber(std::string value)
{
    this->_phonenumber = value;
}

bool Contact::setFirstName(std::string value)
{
    if (value.empty())
    {
        std::cout << "First name can't be empty" << std::endl;
        return false;
    }
    this->_firstName = value;
    return (true);
}

bool Contact::setLastName(std::string value)
{
    if (value.empty())
    {
        std::cout << "First name can't be empty" << std::endl;
        return false;
    }
    this->_lastName = value;
    return true;
}

void Contact::setNickname(std::string value)
{
    this->_nickname = value;
}

void Contact::setDarkSecret(std::string value)
{
    this->_darkSecret = value;
}
