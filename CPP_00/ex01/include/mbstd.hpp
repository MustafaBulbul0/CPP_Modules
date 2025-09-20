#ifndef MBSTD_HPP
# define MBSTD_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>
# include "classes/phonebook.hpp"

#define RED   "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

void		init_book(s_phonebook *book);
void		search_person(s_phonebook *book);
std::string	write_ten_char(std::string name);
std::string	user_input(std::string ques);
#endif
