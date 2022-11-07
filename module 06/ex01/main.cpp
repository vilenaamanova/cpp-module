#include "Data.hpp"

int	main(void)
{
	Data		before;
	Data		*after;
	uintptr_t	raw;

	before.num = 42;
	before.str = "Important message";
	std::cout << "---BEFORE---" << std::endl;
	std::cout << &before << std::endl;
	std::cout << "INT =  " << before.num << "\nSTRING = \"" << before.str << "\"" << std::endl;
	raw = serialize(&before);
	after = deserialize(raw);
	std::cout << "---AFTER---" << std::endl;
	std::cout << after << std::endl;
	std::cout << "INT = " << after->num << "\nSTRING = \"" << after->str << "\"" << std::endl;
	std::cout << "---MODIFICATED---" << std::endl;
	after->num = 100;
	after->str = "Another important message";
	std::cout << "INT = " << before.num << "\nSTRING = \"" << before.str << "\"" << std::endl;
}