#include "../include/mbstd.hpp"

int	main(int ac, char **av)
{
	std::string	text;

	if (ac != 4)
		return (1);
	text = read_file(av[1]);
	if (text.empty())
		return (2);
	text = ch_text(text, av[2], av[3]);
	if (output_file(text, av[1]).empty())
		return (3);
	return (0);	
}
