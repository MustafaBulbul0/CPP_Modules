# include "../include/mbstd.hpp"

void	init_book(s_phonebook *book)
{
	int	i;

	i = -1;
	while (++i < 9)
		book[i].setName();
}

int		s_phonebook::is_empty()
{
	if (name.empty())
		return (1);
	return (0);
}


std::string	user_input(std::string ques)
{
	std::string s;

	s = "";
	while (s[0] == '\0')
	{
		std::cout << "Please enter the " << ques << "\n" << "+";
		std::getline(std::cin, s);
		if (s[0] == '\0')
		{
			std::cout << RED << "Empty contact information is not allowed.\n" << RESET;
		}
	}
	return (s);
}

static int	is_number(std::string s)
{
	int	i;

	i = 0;
	if (s.empty())
		return (0);
	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

void	search_person(s_phonebook *book)
{
	std::string input;
	int			index;

	while (true) {
		std::cout << "Which contact index would you like to see?(0 to quit searching)\nIndex: ";
		std::getline(std::cin, input);
		if (!is_number(input) || input.empty()) {
			std::cout << RED << "Only digits in range of 1 to 9 are allowed.\n" << RESET;
			continue ;
		}
		index = atoi(input.c_str());
		if (index == 0)
			return;
		if (index < 1 || index > 9) {
			std::cout << RED << "Only digits in range of 1 to 9 are allowed.\n" << RESET;
			continue;
		}
		if (book[index - 1].is_empty()) {
			std::cout << "No registered person\n";
			continue;
		}
		book[index - 1].person_info(index - 1);
		break;
	}
}

std::string	write_ten_char(std::string name)
{
	char	n_name[10];
	int		len;

	len = name.length();
	if (len <= 10)
	{
		for (int i = 0 ; i < 10 - len ; i++)
			n_name[i] = ' ';
		for (int i = 10 - len ; i < 10 ; i++)
			n_name[i] = name[i + len - 10];
	}
	else
	{
		for (int i = 0; i < 9 ; i++)
			n_name[i] = name[i];
		n_name[9] = '.';
	}
	return (n_name);
}
