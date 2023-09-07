
#include "Contact.hpp"

Contact::Contact()
{
    this->_index = -1;
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

bool Contact::setPhonenumber(std::string value)
{
    if (value.empty())
    {
        std::cout << "Phonenumber can't be empty" << std::endl;
        return false;
    }
    this->_phonenumber = value;
    return (true);

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
        std::cout << "Last name can't be empty" << std::endl;
        return false;
    }
    this->_lastName = value;
    return true;
}

bool Contact::setNickname(std::string value)
{
    if (value.empty())
    {
        std::cout << "Nickname can't be empty" << std::endl;
        return false;
    }
    this->_nickname = value;
    return true;
}

bool Contact::setDarkSecret(std::string value)
{
    if (value.empty())
    {
        std::cout << "Dark Secret can't be empty" << std::endl;
        return false;
    }
    this->_darkSecret = value;
    return true;
}

void Contact::ShowDetails()
{
    std::cout << ((std::string)"").insert(0, 20, '*') << std::endl;
    std::cout << "First name : " << this->getFirstName() << std::endl;
    std::cout << "Last name : " << this->getLastName() << std::endl;
    std::cout << "Nickname : " << this->getNickname() << std::endl;
    std::cout << "Phone number : " << this->getPhonenumber() << std::endl;
    std::cout << "Dark secret : " << this->getDarkSecret() << std::endl;
    std::cout << ((std::string)"").insert(0, 20, '*') << std::endl;
}