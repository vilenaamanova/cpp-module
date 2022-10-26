#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_contact(void)
{
	std::string	data;

	if (this->index >= 8)
		std::cout << "The phone book is full.\nIf you add a new contact, it will replace the oldest one." << std::endl;
	data = "";
	std::cout << "Enter first name of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].set_first_name(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter last name of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].set_last_name(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter nickname of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].set_nickname(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter phone number of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].set_phone_num(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	data = "";
	std::cout << "Enter the darkest secret of a contact: ";
	std::getline(std::cin, data);
	if (!data.empty())
		this->Contacts[this->index % 8].set_dark_secret(data);
	else
	{
		std::cout << "You can't leave the field empty!\nTry again!" << std::endl;
		return ;
	}
	std::cout << "Contact added to phone book." << std::endl; 
	this->index++;
	return ;
}

void	PhoneBook::search_contact(void)
{
	int					num;
	std::string			index;
	std::stringstream	to_int;

	if (this->Contacts[0].get_first_name().size() != 0)
		display_table();
	else
		std::cout << "The phone book is empty!" << std::endl;
	std::cout << "Search for a contact (enter index): ";
	std::getline(std::cin, index);
	to_int << index;
	to_int >> num;
	if (index.size() == 1 && index[0] >= '0' && index[0] <= '7' && this->Contacts[num].get_first_name().size() != 0)
	{
		std::cout << "First name: " << this->Contacts[num].get_first_name() << std::endl;
		std::cout << "Last name: " << this->Contacts[num].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->Contacts[num].get_nickname() << std::endl;
		std::cout << "Phone number: " << this->Contacts[num].get_phone_num() << std::endl;
		std::cout << "Darkest secret: " << this->Contacts[num].get_dark_secret() << std::endl;
	}
	else
		std::cout << "The index is out of range or contact doesn't exist!" << std::endl;
}