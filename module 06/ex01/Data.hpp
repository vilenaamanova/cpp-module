#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data {
	int			num;
	std::string	str;
};

typedef unsigned long int	uintptr_t;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif