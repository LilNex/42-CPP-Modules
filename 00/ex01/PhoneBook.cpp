
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}

void PhoneBook::ShowWelcomeMessage()
{
    std::cout << "Welcome to your PhoneBook" << std::endl;
    std::cout << "Usage : " << std::endl;
    std::cout << "SEARCH	- Show list of contacts and select" << std::endl;
    std::cout << "ADD		- Add a new contact" << std::endl;
    std::cout << "EXIT		- Exit from the PhoneBook" << std::endl << std::endl;
}

int	 PhoneBook::WaitPrompt()
{
	std::string prompt;

	std::cout << ">> ";
	std::getline(std::cin, prompt);
	if (!std::cin.good())
	{
		std::cout << "EXIT" << std::endl;
		return (0);
	}
	return this->HandlePrompt(prompt);

}

int PhoneBook::AddNewContact()
{
	std::string prompt;

	std::cout << ((std::string)"").insert(0, 20, '-') << std::endl;
	std::cout << "Adding new contact" << std::endl;
	this->_contacts[this->id_counter % 8].setIndex(this->id_counter % 8);
	do {
		std::cout << "First name: ";
		prompt = ReadPrompt();
	}
	while (!this->_contacts[this->id_counter % 8].setFirstName(prompt));
	do {
		std::cout << "Last name: ";
		prompt = ReadPrompt();
	}
	while (!this->_contacts[this->id_counter % 8].setLastName(prompt));
	do {
		std::cout << "Nickname: ";
		prompt = ReadPrompt();
	}
	while (!this->_contacts[this->id_counter % 8].setNickname(prompt));
	do {
		std::cout << "Phone number: ";
		prompt = ReadPrompt();
	}
	while (!this->_contacts[this->id_counter % 8].setPhonenumber(prompt));
	do {
		std::cout << "Dark secret: ";
		prompt = ReadPrompt();
	}
	while (!this->_contacts[this->id_counter % 8].setDarkSecret(prompt));

	this->id_counter++;

	return (1);
}

std::string PhoneBook::getDisplayString(std::string name)
{
	if (name.length() >= 10)
	{
		name.resize(10);
		name.shrink_to_fit();
		name[9] = '.';
		return name;
	}
	return name;
}

void PhoneBook::WriteColumn(std::string text)
{
	std::cout << "|";
	std::cout.width(10);
	std::cout << std::right << this->getDisplayString(text);
}

void PhoneBook::ShowContact(Contact contact)
{
	std::stringstream convert;

	convert << contact.getIndex();
	this->WriteColumn(convert.str());
	this->WriteColumn(contact.getFirstName());
	this->WriteColumn(contact.getLastName());
	this->WriteColumn(contact.getNickname());
	std::cout << "|" << std::endl;

}

void PhoneBook::ShowListContacts()
{

		std::cout << ((std::string)"").insert(0, 10*4 + 4, '-') << std::endl;
		this->WriteColumn("Index");
		this->WriteColumn("Firstname");
		this->WriteColumn("Lastname");
		this->WriteColumn("Nickname");
		std::cout << "|" << std::endl;
		std::cout << ((std::string)"").insert(0, 10*4 + 4, '-') << std::endl;

		std::string break_line = ((std::string)"").insert(0, 10*4 + 4, '-') + "|";
		for (size_t i = 0; i < break_line.length(); i = i + 11)
			break_line[i] = '|';

		for (size_t i = 0; i < 8; i++)
		{
			if (this->_contacts[i].getIndex() == -1)
				continue;
			this->ShowContact(this->_contacts[i]);
			std::cout << break_line << std::endl;
		}
		

}

void PhoneBook::SearchContact()
{
	this->ShowListContacts();
	if (this->_contacts[0].getIndex() != -1)
	{
		std::cout << "Select an index : ";
		std::string prompt = ReadPrompt();
		if (prompt.empty())
			return;
		for (size_t i = 0; i < prompt.length(); i++)
		{
			if (!isdigit(prompt[i]))
			{
				std::cout << "Invalid input" << std::endl;
				this->SearchContact();
				return ;
			}
		}
		int index = atoi(prompt.c_str());
		if (index < 8 && this->_contacts[index].getIndex() != -1)
			this->_contacts[index].ShowDetails();

	}
	
}

int PhoneBook::HandlePrompt(std::string prompt)
{
	if (prompt == "EXIT")
		return (0);
	else if (prompt == "ADD")
		this->AddNewContact();
	else if (prompt == "SEARCH")
		this->SearchContact();
	else 
		std::cout << "Unvalid command" << std::endl;
	return (1);
}
