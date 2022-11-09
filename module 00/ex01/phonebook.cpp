#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	std::string	data;

	if (this->index >= 8)
		std::cout << "The phone book is full.\nIf you add a new contact, it will replace the oldest one." << std::endl;
	data = "";
	std::cout << "Enter first name of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].setFirstName(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter last name of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].setLastName(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter nickname of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].setNickname(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter phone number of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].setPhoneNum(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter the darkest secret of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].setDarkSecret(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	std::cout << "Contact added to phone book." << std::endl; 
	this->index++;
	return ;
}

void	PhoneBook::searchContact(void)
{
	int					num;
	std::string			index;
	std::stringstream	toInt;

	if (this->Contacts[0].getFirstName().size() != 0)
		displayTable();
	else
		std::cout << "The phone book is empty!" << std::endl;
	std::cout << "Search for a contact (enter index): ";
	std::getline(std::cin, index);
	toInt << index;
	toInt >> num;
	if (index.size() == 1 && index[0] >= '0' && index[0] <= '7' && this->Contacts[num].getFirstName().size() != 0)
	{
		std::cout << "First name: " << this->Contacts[num].getFirstName() << std::endl;
		std::cout << "Last name: " << this->Contacts[num].getLastName() << std::endl;
		std::cout << "Nickname: " << this->Contacts[num].getNickname() << std::endl;
		std::cout << "Phone number: " << this->Contacts[num].getPhoneNum() << std::endl;
		std::cout << "Darkest secret: " << this->Contacts[num].getDarkSecret() << std::endl;
	}
	else
		std::cout << "The index is out of range or contact doesn't exist!" << std::endl;
}