#include "../include/mbstd.hpp"

std::string	read_file(char	*path)
{
	std::string		satir;
	std::string		text;
	std::ifstream	inputFile(path);

	if (!inputFile.is_open())
	{
		std::cerr << "The file could not be opened.\n";
		return (NULL);
	}
	while (std::getline(inputFile, satir))
		text += satir + '\n';
	inputFile.close();
	return (text);
}

static std::string	replace(std::string text, std::string s1, std::string s2, int start)
{
	std::string n_text;
	int			len_s1;
	int			len_s2;
	int			i;
	int			j;

	i = 0;
	j = 0;
	len_s1 = s1.length();
	len_s2 = s2.length();
	while (i < start)
	{
		n_text[i] = text[i];
		i++;
	}
	while (s2[j])
	{
		n_text[i] = s2[j];
		i++;
		j++;
	}
	while (text[i - j])
	{
		n_text[i] = text[i - j];
		i++;
	}
	return (n_text);
}

std::string	ch_text(std::string text, std::string s1, std::string s2)
{
	int		len;
	int		i;
	int		j;

	len = s2.length();
	i = 0;
	while (text[i])
	{
		if (text.substr(i, len) == s1)
		{
			if (i != 0)
			{
				if (!isspace(text[i - 1]))
				{
					i++;
					continue ;
				}
			}
			if (!isspace(text[i + len]) && text[i + len] != '\0')
			{
				i++;
				continue ;
			}
			text = replace(text, s1, s2, i);
			i += len;
		}
		i++;
	}
	return (text);
}
