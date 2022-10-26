#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	(void)argc;

	i = 1;
	if (argv[i])
	{
		while(argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char) std::toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}