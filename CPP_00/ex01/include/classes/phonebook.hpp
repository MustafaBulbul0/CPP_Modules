#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class phonebook
{
	private:
		std::string	name;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		void	setName();
		int		is_empty();
		void	add_new_person(int	index);
		void	person_info(int	index);

};

#endif
