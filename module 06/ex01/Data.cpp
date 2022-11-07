#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	converted;

	converted = reinterpret_cast<uintptr_t>(ptr);
	return (converted);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*converted;

	converted = reinterpret_cast<Data *>(raw);
	return (converted);
}