#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phBook;

	std::cout << "The phone book is empty! Fill it up!" << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phBook.addContact();
		}
		else if (command == "SEARCH")
		{
			phBook.searchContact();
		}
	}
	return (0);
}
