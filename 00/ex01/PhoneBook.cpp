
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
	std::cin >> prompt;
	if(prompt.empty())
	{
		std::cout << "EXIT" << std::endl;
		return (0);
	}
	std::cout << std::endl;
	
	return this->HandlePrompt(prompt);

}

int PhoneBook::AddNewContact()
{
	std::string prompt;

	std::cout << ((std::string)"").insert(0, 20, '-') << std::endl;
	std::cout << "Adding new contact" << std::endl;
	std::cout << "First name: " << this->id_counter;
	std::cin >> prompt;
	while (this->_contacts[this->id_counter % 8].setFirstName(prompt))
	{
		std::cout<<"errir";
		std::cin >> prompt;
	}

	return (1);
}

int PhoneBook::HandlePrompt(std::string prompt)
{
	if (prompt == "EXIT")
		return (0);
	else if (prompt == "ADD")
		this->AddNewContact();
	return (1);
}
