#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class s_phonebook
{
	private:
		std::string	name;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		void	setName(){name = "";}
		int		is_empty();
		void	add_new_person(int	index);
		void	person_info(int	index);

};

#endif
