# include "../include/mbstd.hpp"

void	init_book(phonebook *book)
{
	int	i;

	i = -1;
	while (++i < 9)
		book[i].setName();
}

int		phonebook::is_empty()
{
	if (name.empty())
		return (1);
	return (0);
}

int	is_number(std::string s)
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

void	phonebook::setName()
{
	name = "";
}
