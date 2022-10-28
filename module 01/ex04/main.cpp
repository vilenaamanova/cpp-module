#include <iostream>
#include <fstream>

void	open_and_replace(std::string const & filename, std::string s1, std::string s2)
{
	int				i;
	int				pos;
	std::string		text;
	std::string		newFilename;
	std::string		originalLine;

	std::ifstream originalFile(filename.c_str());
	newFilename = filename + ".replace";
	std::ofstream newFile(newFilename.c_str());
	while (std::getline(originalFile, originalLine))
		text += originalLine;
	i = 0;
	while (i < (int)text.size())
	{
		pos = text.find(s1, i);
		if (pos == i && pos != -1)
		{
			newFile << s2;
			i += s1.size() - 1;
		}
		else
			newFile << text[i];
		i++;
	}
	originalFile.close();
	newFile.close();
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		open_and_replace(argv[1], argv[2], argv[3]);
	else
		std::cout << "Program usage: <filename> word_to_replace replacement_word" << std::endl;
	return (0);
}