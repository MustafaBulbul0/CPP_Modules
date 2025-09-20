# include "../include/mbstd.hpp"

int main()
{
	s_phonebook book[9];
	std::string	input;
	int			index;

	index = 0;
	init_book(book);
	while (true)
	{
		std::cout << "Enter your command [ADD, SEARCH, EXIT]:\n"
				  << YELLOW << "$>" << RESET;
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			book[index % 9].add_new_person(index++ % 9);
		else if (input.compare("SEARCH") == 0)
			search_person(book);
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
	
}
