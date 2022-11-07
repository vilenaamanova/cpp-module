#include "Convert.hpp"

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		Convert	convert(argv[1]);
		
		convert.detectType();
	}
	else
		std::cout << "Wrong number of arguments!" << std::endl;
	return (0);
}