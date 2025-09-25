#include "../include/mbstd.hpp"

std::string	read_file(char	*path)
{
	std::string		satir;
	std::string		text;
	std::ifstream	inputFile(path);

	if (!inputFile.is_open())
	{
		std::cerr << "The file could not be opened.\n";
		return ("");
	}
	while (std::getline(inputFile, satir))
		text += satir + '\n';
	inputFile.close();
	return (text);
}

static std::string	replace(std::string text, std::string s1, std::string s2, int start)
{
	std::string n_text;

	n_text = text.substr(0, start);
	n_text += s2;
	n_text += text.substr(start + s1.length());	
	return (n_text);
}

std::string	ch_text(std::string text, std::string s1, std::string s2)
{
	int len_s1;
	int i;

	i = 0;
	len_s1 = s1.length();
	while (i < text.length())
	{
		if (text.substr(i, len_s1) == s1)
		{
			if (i > 0 && !isspace(text[i - 1]))
			{
				i++;
				continue ;
			}
			if (i + len_s1 < text.length() && !isspace(text[i + len_s1]))
			{
				i++;
				continue ;
			}
			text = replace(text, s1, s2, i);
			i += s2.length();
		}
		else
		    i++;
	}
	return (text);
}

std::string	output_file(std::string text, std::string name)
{
	std::ofstream outputFile ((name + ".replace").c_str());
	if (!outputFile.is_open()) {
		std::cerr << "The file could not be opened.\n";
		return ("");
    }
	outputFile << text;
	outputFile.close();
	return (text);
}
