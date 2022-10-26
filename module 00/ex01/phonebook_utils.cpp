#include "PhoneBook.hpp"

std::string	get_index(int index)
{
	std::ostringstream	get_str;
	std::string			index_str;
	std::string			result;

	get_str << index;
	index_str = get_str.str();
	result = "         " + index_str;
	return (result);
}

std::string	get_string(std::string str)
{
	int			i;
	int			str_size;
	int			space_size;
	std::string	interim_res;
	std::string	result;

	str_size = str.size();
	space_size = 10;
	interim_res = "";
	result = "";
	if (str_size != 0 && str_size <= 10)
	{
		space_size = space_size - str_size;
		while (space_size != 0)
		{
			space_size--;
			interim_res.append(1, ' ');
		}
		result = interim_res + str;
	}
	else if (str_size > 10)
	{
		i = 0;
		while (i < 9)
		{
			interim_res.append(1, str[i]);
			i++;
		}
		result = interim_res + ".";
	}
	return (result);
}

void	PhoneBook::display_table(void)
{
	int			i;
	std::string	index_str;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < 8)
	{
		if (this->Contacts[i].get_first_name().size() != 0)
		{
			std::cout << "|";
			index_str = get_index(i);
			std::cout << index_str;
			std::cout << "|";
			first_name = get_string(this->Contacts[i].get_first_name());
			std::cout << first_name;
			std::cout << "|";
			last_name = get_string(this->Contacts[i].get_last_name());
			std::cout << last_name;
			std::cout << "|";
			nickname = get_string(this->Contacts[i].get_nickname());
			std::cout << nickname;
			std::cout << "|";
			std::cout << std::endl;
		}
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}