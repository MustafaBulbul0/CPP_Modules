# include "../include/mbstd.hpp"

void	s_phonebook::add_new_person(int	index)
{
	name = user_input("Name:");
	lastName = user_input("Last Name:");
	nickname = user_input("Nickname:");
	phoneNumber = user_input("Phone Number:");
	darkestSecret = user_input("Darkest Secret:");
}

void	s_phonebook::person_info(int index)
{
		std::cout << "|-------------------------------------------|\n"
				  << "|     Index|First Name| Last Name|  Nickname|\n"
				  << "|----------|----------|----------|----------|\n"
				  << "|         " << index + 1 << "|"
				  << write_ten_char(name) << "|"
				  << write_ten_char(lastName) << "|"
				  << write_ten_char(nickname) << "|\n"
				  << "|-------------------------------------------|\n";
}
