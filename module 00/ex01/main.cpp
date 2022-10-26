#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	ph_book;

	std::cout << "The phone book is empty! Fill it up!" << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			ph_book.add_contact();
		}
		else if (command == "SEARCH")
		{
			ph_book.search_contact();
		}
	}
	return (0);
}
